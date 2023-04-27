#include <stdio.h>

int largest_number(int num1, int num2, int num3);

int main() {
    int a, b, c, largest;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    largest = largest_number(a, b, c);

    printf("The largest number is %dn", largest);

    return 0;
}

int largest_number(int num1, int num2, int num3) {
    int largest = num1;

    if (num2 > largest) {
        largest = num2;
    }

    if (num3 > largest) {
        largest = num3;
    }

    return largest;
}

