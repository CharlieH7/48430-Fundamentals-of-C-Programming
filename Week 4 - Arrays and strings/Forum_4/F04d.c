/*******************************************************************************
author     : Beeshanga Abewardana Jayawickrama
date       :

description:
    how strings are handled in C
    null termination
    strings as a char array or char pointer - difference
*******************************************************************************/

#include <stdio.h>

int main(void)
{
    /* C STRINGS: option 1. char array 
    try: s[1] = 'E', s[1] = '\0'
    why does the program behave the way it does? 
    */
    char s[] = "hello";
    /* */
    s[1] = 'E';
    
    printf("%s\n", s);
    printf("sizeof(s)=%ld\n", sizeof(s));


    /* C STRINGS: option 2. char pointer 
    try: s[1] = 'E'
    why does the program behave the way it does? 
    */
    /* */
    char* sp = "hello again";
    sp[1] = 'E';
    printf("%s\n", sp);
    
    return 0;
}