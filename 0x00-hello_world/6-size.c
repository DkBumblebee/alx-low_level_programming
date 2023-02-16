#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)

{
    char a;
    int b;
    float c;
    long int d;
    long long int e;

    printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
    printf("Size of int: %lu byte(s)\n", (unsigned long)sizeof(b));
    printf("Size of long int: %lu byte(s)\n", (unsigned long)sizeof(d));
    printf("Size of long long int:%lu byte(s)\n", (unsigned long)sizeof(e));
    printf("Size of float:%lu byte(s)\n", (unsigned long)sizeof(e));
    return (0);
}
