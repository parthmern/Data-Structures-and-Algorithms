#include <stdio.h>
#include <stdlib.h>

int main()
{
    //use of calloc

    int* ptr ;
    ptr = (int*) calloc(3,sizeof(int));

    for (int i=0 ; i < 3 ; i++)
    {
        printf("enter the value no %d of this array  \n", i);
        scanf("%d",&ptr[i]);
    }

    for (int i=0 ; i < 3 ; i++)
    {
        printf("the value at %d of this array is %d \n", i ,ptr[i] );
    }
    
    // we are doing FREE the memory of heap (ptr) manually and now we cannot access the previous values of ptr array

    free(ptr);

    // if we need again the new memory from heap then we create this


    return 0;
}