#include "main.h"

/**
 * is_prime_recursive - Helper function to check for prime recursively
 * @n: The number to check for prime
 * @i: The divisor to check divisibility
 *
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_recursive(int n, int i)
{
    if (n <= 1)
        return 0;
    if (i * i > n)
        return 1;
    if (n % i == 0)
        return 0;
    return is_prime_recursive(n, i + 1);
}

/**
 * is_prime_number - Checks if a number is prime
 * @n: The number to check
 *
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
    if (n <= 1)
        return 0;
    return is_prime_recursive(n, 2);
}

