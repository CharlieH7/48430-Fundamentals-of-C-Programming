#include <stdio.h>
#include <string.h>


int is_palindrome(char word[]);

int main(void)
{
    char word[10];
    printf("Enter a word to check if it's a palindrome> ");
    scanf("%s", word);
    char c = is_palindrome(word)+'0';
    printf("%c\n", c);
    return(0);
}

int is_palindrome(char word[]) 
{
    int leftmost = 0;
    int h = strlen(word) - 1;
    while (h > leftmost)
    {
        if (word[leftmost++] != word[h--])
        {
            return(0);
        }
    }
    return(1);
}
