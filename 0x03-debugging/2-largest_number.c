#include <stdio.h>

int largest_number(int a, int b, int c);

int main(void)
{
    int a, b, c, largest;

    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);

    largest = largest_number(a, b, c);

    printf("Largest number is %dn", largest);

    return 0;
}

int largest_number(int a, int b, int c)
{
    int largest;

    if (a > b && a > c)
    {
        largest = a;
    }
    else if (b > a && b > c)
    {
        largest = b;
    }
    else
    {
        largest = c;
    }

    return largest;
}

