
#include <stdio.h>

union Student 
{
  int id;
  int marks;
  char chracter;
  char name[40];
};

int main() {
    
    // declaring 2 union here(parth and matrix)
    union Student parth,matrix;
    
    // if we try to acces more than one member then the first assigned member's value will be currept and the second assigned member's value will be become original

    parth.id = 1;
    parth.marks= 20;
    parth.name[0]= 'x';
    
    matrix.id = 3;
    
    printf("matrix %d ",matrix.id);
    printf("parth %d %d %d",parth.id,parth.marks,parth.name[0]);
    
    //OUTPUT = matrix 3
    //         parth 120 120 120
}