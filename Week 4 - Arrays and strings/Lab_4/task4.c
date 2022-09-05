#include <stdio.h>

int main(void)
{
    char word[3], reverseWord[3];
    printf("Enter a word with 3 letters> ");
    scanf("%s", word);
    printf("Word entered: %s\n", word);
    int i, k;
    for (i = 0, k = 2; i < 3; i++, k--)
    {
        reverseWord[i] = word[k];
    }
    printf("Reverse word: %s\n", reverseWord);
    return(0);
}
