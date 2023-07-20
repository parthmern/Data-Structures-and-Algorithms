#include <stdio.h>
#include <stdlib.h>

int main()
{
    //use of malloc

    int n;
    printf("enter the size of dynamic array == ");
    scanf("%d",&n);

    int* ptr ;
    ptr = (int*) malloc(n * sizeof(int));

    for (int i=0 ; i < n ; i++)
    {
        printf("enter the value no %d of this array  \n", i);
        scanf("%d",&ptr[i]);
    }

    for (int i=0 ; i < n ; i++)
    {
        printf("the value at %d of this array is %d \n", i ,ptr[i] );
    }

    return 0;
}

// OUTPUT
// enter the value no 0 of this array =4
// enter the value no 1 of this array =5
// enter the value no 2 of this array =6
// the value at 0 of this array is 4 
// the value at 1 of this array is 5 
// the value at 2 of this array is 6 