#include "main.h"

/**
 * _sqrt_recursion_recursive - Finds the natural square root recursively.
 * @n: The number to find the square root of.
 * @root: The current guess for the square root.
 *
 * Return: The natural square root of n, or -1 if n has no natural square root.
 */
int _sqrt_recursion_recursive(int n, int root)
{
    if (root * root == n)
        return root;
    if (root * root > n)
        return -1;
    return _sqrt_recursion_recursive(n, root + 1);
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to find the square root of.
 *
 * Return: The natural square root of n, or -1 if n has no natural square root.
 */
int _sqrt_recursion(int n)
{
    if (n < 0)
        return -1;
    if (n == 0 || n == 1)
        return n;
    return _sqrt_recursion_recursive(n, 1);
}

