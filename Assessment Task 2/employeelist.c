/*******************************************************************************
 * 48430 Fundamentals of C Programming - Assignment 2
 * Name: Pin-Hsun (Charlie) Huang
 * Student ID: 14247845
 * Date of submission:
 * A brief statement on what you could achieve (less than 50 words):
 * I could achieve test 1-12 with the function to add, remove the last employee, display employee list...
 * 
 * A brief statement on what you could NOT achieve (less than 50 words):
 * I could not achieve 13 and 14, with 13 I did not know how to deal with the careless user input such as abc...
 * For case 14 I did not understand what it means with *** stack smashing detected ***: terminated
 *
*******************************************************************************/
/*******************************************************************************
 * List header files - do NOT use any other header files. Note that stdlib.h is
 * included in case you want to use any of the functions in there. However the
 * task can be achieved with stdio.h and string.h only.
*******************************************************************************/
#include <stdlib.h>
#include <stdio.h>
/*******************************************************************************
 * List preprocessing directives - you may define your own.
*******************************************************************************/
#define MAX_COMPANY_SIZE 5
#define MAX_NAME_SIZE 11
/*******************************************************************************
 * List structs - you may define struct date_time and struct flight only. Each
 * struct definition should have only the fields mentioned in the assignment
 * description.
*******************************************************************************/
struct date
{
    unsigned int day;
    unsigned int month;
    unsigned int year;
};

typedef struct date date_t;

struct employee
{
    char name[MAX_NAME_SIZE - 1];
    float fte;
    unsigned int level;
    date_t birthday;
};

typedef struct employee employee_t;
/*******************************************************************************
 * Function prototypes - do NOT change the given prototypes. However you may
 * define your own functions if required.
*******************************************************************************/
void printMenu(void);
void addEmployee(employee_t employeeList[], int *size);
void deleteEmployee(int *size);
void displayEmployeeList(employee_t employeeList[], int size);
void saveEmployee(employee_t employeeList[], int size, char *dbFileName);
void readEmployee(employee_t employeeList[], int *size, char *dbFileName);
/*******************************************************************************
 * Main
*******************************************************************************/
int main(void)
{
    employee_t employeeList[MAX_COMPANY_SIZE];
    printMenu();
    int choice;
    int size = 0;
    printf("Enter your choice>\n");
    scanf("%i", &choice);
    char dbFileName[] = "database";
    while (choice != 6)
    {
    /* switch case statement based on different user input */
    switch (choice)
    {
        case 1: 
            addEmployee(employeeList, &size);
            break;
        case 2: 
            deleteEmployee(&size);
            break;
        case 3: 
            displayEmployeeList(employeeList, size);
            break;
        case 4:
            saveEmployee(employeeList, size, dbFileName);
            break;
        case 5:
            readEmployee(employeeList, &size, dbFileName);
            break;
        default:
            printf("Invalid choice.");
    }
    printMenu();
    printf("Enter your choice>\n");
    scanf("%i", &choice);
    } 
    return(0);
}
/*******************************************************************************
 * This function prints the initial menu with all instructions on how to use
 * this program.
 * inputs:
 * - none
 * outputs:
 * - none
*******************************************************************************/
void printMenu(void)
{
    printf("\n\n"
     "1. add employee\n"
     "2. delete last employee\n"
     "3. display employee list\n"
     "4. save the employee list to the database\n"
     "5. read the employee list from the database\n"
     "6. exit the program\n");
}

/*The addEmployee method which takes two parameters - employeeList (array) and pointer to the global variable size
  The method collects the various input through the teriminal by prompting the user a series of questions and finally
  added them to the employeeList array
*/
void addEmployee(employee_t employeeList[], int *size)
{
    if (*size == MAX_COMPANY_SIZE)
    {
        printf("List is full");
    }
    else
    {
        employee_t employee;
        printf("Enter name>");
        scanf("%10s", employee.name);
        printf("Enter birthday: day>");
        scanf("%u", &employee.birthday.day);
        int i;
        while ((i = getchar()) != '\n') 
        { 
            i = getchar();
        }
        while (employee.birthday.day < 1 || employee.birthday.day > 31)
        {
            printf("Invalid day. ");
            printf("Enter birthday: day>");
            scanf("%u", &employee.birthday.day);
            int i;
            while ((i = getchar()) != '\n') 
            { 
                i = getchar();
            }
        }
        printf("Enter birthday: month>");
        scanf("%u", &employee.birthday.month);
        while (employee.birthday.month < 1 || employee.birthday.month > 12)
        {
            printf("Invalid month. ");
            printf("Enter birthday: month>");
            scanf("%u", &employee.birthday.month);
            int i;
            while ((i = getchar()) != '\n') 
            { 
                i = getchar();
            }
        }
        printf("Enter birthday: year>");
        scanf("%u", &employee.birthday.year);
        while (employee.birthday.year < 1800 || employee.birthday.year > 2017)
        {
            printf("Invalid year. ");
            printf("Enter birthday: year>");
            scanf("%u", &employee.birthday.year);
            int i;
            while ((i = getchar()) != '\n') 
            { 
                i = getchar();
            }
        }
        printf("Enter FTE>");
        scanf("%f", &employee.fte);
        while (employee.fte < 0.0 || employee.fte > 1.0)
        {
            printf("Invalid FTE. ");
            printf("Enter FTE>");
            scanf("%f", &employee.fte);
            int i;
            while ((i = getchar()) != '\n') 
            { 
                i = getchar();
            }
        }
        printf("Enter level>");
        scanf("%u", &employee.level);
        while (employee.level < 7 || employee.level > 18)
        {
            printf("Invalid level. ");
            printf("Enter level>");
            scanf("%u", &employee.level);
            int i;
            while ((i = getchar()) != '\n') 
            { 
                i = getchar();
            }
        }
        /* add the employee with type employee_t struct to the employeeList array */
        employeeList[*size] = employee;
        /* increase the size by one */
        *size += 1;
    }
}

/* Delete Employee function : to delete last employee from the array employeeList */
void deleteEmployee(int *size)
{
    /* if the size of the array is not empty then minus one from the size otherwise print "No employee" */
    if(*size != 0)
    {
        *size -= 1;
    }
    else
    {
        printf("List is empty");  
    }
}

/* Display the list of employees in a specified format */
void displayEmployeeList(employee_t employeeList[], int size){
    int i;
    employee_t employee;
    /* if the current size is 0 meaning no employees in the array then display "No employee" */
    if (size == 0)
    {
        printf("List is empty");
    }
    /* Otherwise display the list based on the below conditions
       Name - left aligned, 10 chars at most.
       Date - 2 digit day, 2 digit month, 4 digit year
       FTE – 3 decimal places for the fractional part
       level - 2 digits 
    */
    else
    {
        printf("Name       Birthday   FTE   Level");
        printf("\n---------- ---------- ----- -----");
        for(i = 0; i < size; i++)
        {
            employee = employeeList[i];
            printf("\n%-10s", employee.name);
            printf(" %02i-%02i-%04i", employee.birthday.day, employee.birthday.month, employee.birthday.year);
            printf(" %.3f", employee.fte);
            printf(" %02d", employee.level);
        }
        printf("\n");
    }
}
/* save the employee list to the database file, also overwrite if database file already exists.*/
void saveEmployee(employee_t employeeList[], int size, char *dbFileName)
{
    /* open the file for writing*/
    FILE *file = fopen(dbFileName, "w");
    int i;
    /* for each employee in the array, assign it to the employee_t type then write it into the file with tabs in between each struct members*/
    for(i = 0; i < size; i++)
    {
        employee_t employee = employeeList[i];
        fprintf(file, "%s\t%d\t%d\t%d\t%f\t%u\n", employee.name, employee.birthday.day, employee.birthday.month, employee.birthday.year, employee.fte, employee.level);
    }
    fclose(file);
}

/* read the employee list from the database file */
void readEmployee(employee_t employeeList[], int *size, char *dbFileName)
{
    /* if the file does not exists then display "Read error", otherwise read the existing file and add to the employeeList array*/
    FILE *file = fopen(dbFileName, "r");
    if (file != NULL)
    {
        employee_t employee;
        int i = 0;
        /* read the file until end of file*/
        while(fscanf(file, "%s %d %d %d %f %u", employee.name, &employee.birthday.day, &employee.birthday.month, &employee.birthday.year, &employee.fte, &employee.level) != EOF)
        {
            /* adds each employee to the employeeList array*/
            employeeList[i] = employee;
            i++;
            if (i >= MAX_COMPANY_SIZE)
            {
                *size = MAX_COMPANY_SIZE;
                break;
            }
            else
            {
                *size = i;      
            }
        }
        fclose(file);
    }
    else 
    {
        printf("Read error");
    }
}
