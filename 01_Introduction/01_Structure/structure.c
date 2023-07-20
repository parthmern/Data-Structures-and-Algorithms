
#include <stdio.h>

struct Student 
{
  int id;
  int marks;
  char chracter;
  char name[40];
};

int main() {
    
    // declaring 2 struct here(parth and matrix)
    struct Student parth,matrix;
    
    parth.id = 1;
    parth.marks= 20;
    parth.name[0]= 'x';
    
    matrix.id = 1;
    matrix.marks= 20;
    
    printf("parth %d %d %d",parth.id,parth.marks,parth.name[0]);
    
    //OUTPUT = parth 1 20 120
    // char store the ascii value

    return 0;
}