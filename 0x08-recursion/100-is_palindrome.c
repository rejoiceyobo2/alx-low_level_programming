#include "main.h"
#include <stdio.h>

/**
 * is_palindrome - Check if a string is a palindrome recursively.
 * @s: The string to check.
 *
 * Return: 1 if palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
    int len = 0, i;

    /* Get the length of the string */
    while (s[len] != '\0')
        len++;

    /* Base case: if the string is empty or has only one character, it's a palindrome */
    if (len <= 1)
        return 1;

    /* Check if the first and last characters are equal */
    if (s[0] == s[len - 1]) {
        /* Move pointers to inner string */
        s++;
        s[len - 2] = '\0'; /* Exclude last character */
        /* Recursive call */
        return is_palindrome(s);
    }

    /* If first and last characters are not equal, it's not a palindrome */
    return 0;
}

