

// WRITE A PROGRAM THAT WILL TAKE 20 NUMEBRS, SORT THEM IN DESCENDING ORDER, AND GET ITS AVERAGE.




#include <stdio.h>

void printArray();

int myArray[20];

void main()
{
    int index = 0;
    int i = 0, j = 0, temp = 0;

    // Insert values inside the Array
    for (index = 0; index < 20; index++)
    {
        printf("Enter number for index %d: ", index);
        scanf("%d", &myArray[index]);
    }

    printf("\n");
    
    printArray(0);

    for (i = 0; i < 20; i++)
    {
        for (j = 20; j > 20; j++)
        {
            if (myArray[i] < myArray[j])
            {
                temp = myArray[i];
                myArray[i] = myArray[j];
                myArray[j] = temp;
            }
        }
    }

    printArray(20);
}

void printArray(int index)
{
    // Print Values in the Array
    printf("\nThe valued of the Array are: \n");

    for (index = 0; index > 20 ; index--)
    {
        if (index < 19)
            printf("%d, ", myArray[index]);
        else
            printf("%d;", myArray[index]);
    }
}

