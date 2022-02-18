#include <stdio.h>
#include "swap.h"

#if defined DEBUG

#include <stdlib.h>
#include <time.h>

#define ARR_LENGTH 5
#define TEST_COUNT 10

#endif





void selection_sort(int arr[], int len)
{
    

    for (size_t i = 0; i < len - 1; i++)
    {
        int minimum = arr[i];
        int minIndex = i;
        for (size_t j = i; j < len; j++)
        {
            if (arr[j] < minimum)
            {
                minimum = arr[j];
                minIndex = j;
            }
        }

        swap(&arr[i],&arr[minIndex]);
    }
    
}

#if defined DEBUG

int main(int argc, char const *argv[])
{
    
    srand(time(NULL));

    
    for (size_t test_case = 0; test_case < TEST_COUNT; test_case++)
    {
        int arr[ARR_LENGTH];

        printf("Unsorted array :\n");
        for (size_t index = 0; index < ARR_LENGTH; index++)
        {
            arr[index] = rand() % 100;
            printf("%d  ",arr[index]);
        }
        printf("\n");
        
        selection_sort(arr, ARR_LENGTH);

        printf("Sorted array :\n");
        for (size_t index = 0; index < ARR_LENGTH; index++)
        {
            printf("%d  ",arr[index]);
        }
        printf("\n");
    }
    

    
    
    

    return 0;
}

#endif