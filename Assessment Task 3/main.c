/* 
    Caeser Cipher Program in C
    Group Members Name + ID: Pin-Hsun (Charlie) Huang 14247845, Jose Landi , Matthew Lee , David Kurniawan
    Project Aim: To implement an encrption and decyption algorithm using C through the use of Caesar Cipher 
    Encryption algorithm. By prompting the employee's username to give an encrypted message, which will become
    their password for login.
    Work split: 
    Charlie - encryption method
    Jose - decyption method
*/

/*header files*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

/*preprocessor directive*/
#define MAX_USERNAME_LENGTH 15
#define MAX_EMPLOYEE_SIZE 5
#define MAX_MESSAGE_LENGTH 50


/* employee struct */
struct employee
{   
    char username[MAX_USERNAME_LENGTH];
    int facultyKey;
};
typedef struct employee employee_t;

/* function prototype */
void Caesar_Cipher_Encryption(employee_t e);
void Caesar_Cipher_Decryption(char password[MAX_USERNAME_LENGTH], int facultyKey);
void menu();

int main(void)
{

    employee_t list[] = {
        [0].username = "jlandi",
        [0].facultyKey = 1,
        [1].username = "charliecaptain",
        [1].facultyKey = 2,
        [2].username = "bertaqualinazz",
        [2].facultyKey = 2,
        [3].username = "johnsmithy",
        [3].facultyKey = 3,
        [4].username = "exampleusername",
        [4].facultyKey = 4 
    }; 

    int choice;
    menu();
    printf("Your choice:->");
    scanf("%d", &choice);
    while (1)
    {
        if(choice == 3){
            break;
        }
        switch(choice){
            case 1:
            int i = 0;
            char input[MAX_USERNAME_LENGTH];
            printf("Enter username to encrypt: ");
            scanf("%15s", input);

            for(i = 0; i < MAX_EMPLOYEE_SIZE; i++){
                if(strcmp(input, list[i].username) == 0){
                    Caesar_Cipher_Encryption(list[i]); 
                    break;
                }
                else{
                    printf("Username does not exist\n");
                    break;
                }

            }
            break;

            case 2:
            char accesspassword[MAX_USERNAME_LENGTH];
            printf("Enter decryption access password: ");
            scanf("%15s", accesspassword);
            
            if(strcmp(accesspassword, "adminpassword") != 0){
                printf("Password incorrect, access denied.\n");
            }
            else{
                char input[MAX_USERNAME_LENGTH];
                printf("Enter password to decrypt: ");
                scanf("%s", input);

                int facultyKey;
                printf("Enter faculty key: ");
                scanf("%d", &facultyKey);

                Caesar_Cipher_Decryption(input, facultyKey);
            }
            break;

            default:
            printf("Invalid Choice\n");
            break;
    }
    menu();
    printf("Your choice:-> ");
    scanf("%d", &choice);
  }
  return(0);
}



/* Written by Charlie */
void Caesar_Cipher_Encryption(employee_t e) 
{
    char password[MAX_USERNAME_LENGTH];
    char currentCharacter;
    int i;
    for (i = 0; e.username[i] != '\0'; i++)
    {
        currentCharacter = toupper(e.username[i]);
        if(currentCharacter >= 'a' && currentCharacter <= 'z')
        {
            currentCharacter = currentCharacter + e.facultyKey;
            if(currentCharacter > 'z')
            {
                currentCharacter = currentCharacter - 'z' + 'a' - 1;
            }
            password[i] = currentCharacter;
        }
        else if (currentCharacter >= 'A' && currentCharacter <= 'Z')
        {
            currentCharacter = currentCharacter + e.facultyKey;
        }
        if(currentCharacter > 'Z') 
        {
            currentCharacter = currentCharacter - 'Z' + 'A' - 1;
        }
        password[i] = currentCharacter;
    }
    printf("Encrypted Password is: %s\n", password);
}


void Caesar_Cipher_Decryption(char password[MAX_USERNAME_LENGTH], int facultyKey)
{
    char currentCharacter;
    int i;
    for (i = 0; password[i] != '\0'; i++)
    {
        currentCharacter = password[i];
        if(currentCharacter >= 'a' && currentCharacter <= 'z')
        {
            currentCharacter = currentCharacter - facultyKey;
            if(currentCharacter < 'a')
            {
                currentCharacter = currentCharacter + 'z' - 'a' + 1;
            }
            password[i] = currentCharacter;
        }
        else if (currentCharacter >= 'A' && currentCharacter <= 'Z')
        {
            currentCharacter = currentCharacter - facultyKey;
        }
        if(currentCharacter < 'A') 
        {
            currentCharacter = currentCharacter + 'Z' - 'A' + 1;
        }
        password[i] = tolower(currentCharacter);
    }
    printf("Decrypted password is: %s\n", password);
}

void menu()
{
    printf("To encrypt, input 1\n");
    printf("To decrypt, input 2\n");
    printf("To exit, input 3\n");
}
