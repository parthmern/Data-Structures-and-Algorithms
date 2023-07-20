#include <stdio.h>
#include <stdlib.h>

int main()
{
    //use of calloc

    int n;
    printf("enter the size of dynamic array == ");
    scanf("%d",&n);

    int* ptr ;
    ptr = (int*) calloc(n,sizeof(int));

    for (int i=0 ; i < n ; i++)
    {
        printf("enter the value no %d of this array  \n", i);
        scanf("%d",&ptr[i]);
    }

    for (int i=0 ; i < n ; i++)
    {
        printf("the value at %d of this array is %d \n", i ,ptr[i] );
    }

    //=================================================
    // if we need the array of MORE SIZE at that particular location of ptr then just reallocate the memory
    //use of realloc

    
    printf("enter the size of NEW(REALLOCATED) dynamic array == ");
    scanf("%d",&n);

    
    ptr = (int*) realloc(ptr,n*sizeof(int));

    for (int i=0 ; i < n ; i++)
    {
        printf("enter NEW(REALLOCATED) the value no %d of this array  \n", i);
        scanf("%d",&ptr[i]);
    }

    for (int i=0 ; i < n ; i++)
    {
        printf("the NEW(REALLOCATED) value at %d of this array is %d \n", i ,ptr[i] );
    }


    return 0;
}

// OUTPUT
//enter the size of dynamic array == 2

//enter the value no 0 of this array  =6
//enter the value no 1 of this array  =7
//the value at 0 of this array is 6 
//the value at 1 of this array is 7 

//enter the size of NEW(REALLOCATED) dynamic array == 3

//enter NEW(REALLOCATED) the value no 0 of this array  =9
//enter NEW(REALLOCATED) the value no 1 of this array  =8
//enter NEW(REALLOCATED) the value no 2 of this array  =7

//the NEW(REALLOCATED) value at 0 of this array is 9 
//the NEW(REALLOCATED) value at 1 of this array is 8 
//the NEW(REALLOCATED) value at 2 of this array is 7 