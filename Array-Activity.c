
#include <stdio.h>

void printArray();

int myArray[10];

void main()
{
    int index = 0;
    int i = 0, j = 0, temp = 0;

    // Insert values inside the Array
    for (index = 0; index < 10; index++)
    {
        printf("Enter number for index %d: ", index);
        scanf("%d", &myArray[index]);
    }

    printf("\n");
    
    printArray(0);

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            if (myArray[i] < myArray[j])
            {
                temp = myArray[i];
                myArray[i] = myArray[j];
                myArray[j] = temp;
            }
        }
    }

    printArray(0);
}

void printArray(int index)
{
    // Print Values in the Array
    printf("\nThe valued of the Array are: \n");

    for (index = 0; index < 10; index++)
    {
        if (index < 9)
            printf("%d, ", myArray[index]);
        else
            printf("%d;", myArray[index]);
    }
}
