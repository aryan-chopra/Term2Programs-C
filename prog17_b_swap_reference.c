// Write a program to swap two variables using the concept of call by reference.

#include <stdio.h>

void swap(int *firstNumber, int *secondNumber);

int main(void)
{
    int firstNumber, secondNumber;
    printf("Enter two numbers: ");
    scanf("%d %d", &firstNumber, &secondNumber);

    swap(&firstNumber, &secondNumber);
    printf("Values after swapping: %d, %d\n", firstNumber, secondNumber);

    return 0;
}

void swap(int *firstNumber, int *secondNumber)
{
    int temp = *firstNumber;
    *firstNumber = *secondNumber;
    *secondNumber = temp;
}
