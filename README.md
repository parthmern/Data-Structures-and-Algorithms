# Data-Structures-and-Algorithms

## ♥ **What is Data-Structure**

➔ A data structure is a storage that is used to store and organize data. <br/>
➔ It is a way of arranging data on a computer so that it can be accessed and updated efficiently. <br/>
➔ It is also used for processing, retrieving, and storing data. <br/>

📃 Example - In fridge, the vegetales,food,fruits (datas) can be __STORE__ , __ORGANIZE__ , __ACCESS__ , __MANIPULATE__ <br/>
♻️ _Overview_ - [link](urlhere)

➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖
## 💛 **Classification / types**

![img](https://static.javatpoint.com/ds/images/ds-introduction2.png)

*here TREE and GRAPHS are NON-LINEAR DATASTRUCTURE*

➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖

### 1️⃣ Linear data structure
➔ Data structure in which data elements are arranged sequentially or linearly <br/>
➔ where each element is attached to its previous and next adjacent elements <br/>
➔ Data items can be traversed in a single run <br/>
➔ Implementation is easy. <br/>
➔ EX- Array, Stacks, linked list, queue <br/>

✔️ __Static data structure__ <br/>
➔ Static data structure has a fixed memory size <br/>
➔ Compile time memory allocation <br/>
➔ easier to access the elements <br/>
➔ EX- Array <br/>

✔️ __Dynamic data structure__ <br/>
➔ the size is not fixed <br/>
➔ randomly updated during the runtime <br/>
➔ which may be considered efficient concerning the memory (space) complexity of the code <br/>
➔ EX- Stacks, linked list, queue <br/>

### 2️⃣ Non-linear data structure
➔ Every item is attached with many other items. <br/>
➔ Data is not arranged in sequence. <br/>
➔ Data cannot be traversed in a single run. <br/>
➔ Implementation is difficult. <br/>
➔ EX- tree, graph. <br/>

➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖  <br/>
➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖  <br/>

## 💙 STRUCTURE
➔ allow us to combine the data of different types <br/>
➔ use to create complex datatype which contains different dataTypes <br/>
➔ similar to array but in array we can store only one dataType but in struct we can store multiple dataTypes <br/>
➔ user defined dataType <br/>

📃 Example - if we want to store the inforamtion of 1000 employee of XYZ company and the information is like NAME, ADDRESS, EMAIL, EMPLOYEE_ID ==> then we can create the STRUCT one time with different dataTypes like `char name` , `char address[]` , `int email` , `float employee_id` to store the info of every employee 

```

struct structure_name   
{  
    data_type member1;  
    data_type member2;  
    .  
    .  
    data_type memeber;  
};

```
➔ the memory allocation for struct cannot create Until we decalre the struct <br/>
➔ when we declare the struct all the memory allocate bcz of user defined datatype <br/>

```

// declaring struct here 
struct structure_name x;

// access the element of struct using structure-member-operator (.)
x.member1 = value;
x.member2 = value;

```

![struct](https://static.javatpoint.com/cpages/images/structure_memory_allocation.png)

➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖  <br/>
➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖  <br/>

## 💚 UNION
➔ very similar to Struct ( user defined dataType)
➔ difference between Struct and Union is that -> in struct each element has its own storage memory allocation but in union there is only single shared memory location which is **equal to the size of largest data member** means the dataType in union which needed the highest bytes means MAX SIZE will become the single shared memory location

📃 Example - **why we need the Union=** i have to play the drums in different time in morning, in afternoon, in night AND in morning i need 2 sticks to play drum AND in afternoon i need 3 sticks to play drum AND in night i need 2 sticks to play drum ==> so if i go to market then i take only 3 sticks not the 2+3+2=6 sticks because AT A TIME ONLY ONE DRUM IS PLAYING (so at a time we are using only one element from struct that time make union) ➔ Union cannot handle all members at once

```

union union_name   
{  
    data_type member1;  
    data_type member2;  
    .  
    .  
    data_type memeber;  
};  

```
➔ the memory allocation for union cannot create Until we decalre the union <br/>
➔ when we declare the union all the memory allocate bcz of user defined datatype <br/>

```

// declaring struct here 
union union_name x , y ;

// access the element of struct using structure-member-operator (.)
x.member1 = value; // at a time we can use only one member
y.member2 = value; // at a time we can use only one member

// if we try to acces more than one member then the first assigned member's value will be currept and the second assigned member's value will be become original

```
![union](https://3.bp.blogspot.com/-JfMM_AsdMrw/Wz9g2ms6RJI/AAAAAAAAIDY/spleowI62oUxHVBV1XbXneLlU8k3at_zgCLcBGAs/s1600/c-structure-union%2Bcopy.jpg)

➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖  <br/>
➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖  <br/>

## 💛 SELF REFRENTIAL STRUCTURE
➔ one structure which have pointer as member and which point to the same type of structure <br/>
♻️ *overview* - [link](https://youtu.be/fpjAFx4v4oU)

<img src="https://blogger.googleusercontent.com/img/b/R29vZ2xl/AVvXsEj1UKTWapJ8DiLaeHj8vt3lw6Et8Qk7yftoLYsKVfTRThEZlJgWBLl5eAwdei3RGwUyvFTmREGh5ZTUNZZK2cF_4EAbzfIrCvMLuyysxzlTZrObpidtuLGJD1frK1x_1qu4j-Q2ryUrT6YlgUQ9q5KzE93mnwb550LXvzQCRkpux39OUMmgKOSrpW79/s1000/Self%20Referential%20Structure.png" width="500" height="300">

![](https://gcdnb.pbrd.co/images/RGUggoWTOpNi.jpg?o=1)

*here var1 struct member named `var1.ptr` have the address of another struct named var2* <br/>
*so if we print `var1.ptr` then we are pointing to the `var2` struct and if we want to access the member of var2 struct using the var1 pointer then use `var1.ptr->member_name_of_var2`* <br/>

➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖  <br/>
➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖  <br/>

## 💙 POINTER
➔ variable that contains the address of another variable. it is a variable that points to any other variable <br/>
➔ Pointers are used to dynamically allocate or deallocate memory using methods such as malloc(), realloc(), calloc(), and free(). <br/>
➔ size depends on architechure ex. 2 byte for 32 bit <br/>

```

int myAge = 43 ;
int* ptr = &myAge ; // here ptr is pointer and we are storing the address of myAge variable in ptr pointer

printf("%d\n", myAge) ; // value of myAge (43)
printf("%p\n", &myAge) ; // memory address of myAge (0x7ffe5367e044)
printf("%p\n", ptr) ; // memory address of myAge with the pointer (0x7ffe5367e044)
printf("%d\n", *ptr) ; // using pointer the value of myAge (43)

```

![Pointer](https://www.w3resource.com/w3r_images/c_pointer.png)

➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖  <br/>
➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖  <br/>

## 💚 DYANMIC MEMORY ALLOCATION
➔ **MEMORY ALLOCATION** assigned in 4 segment <br/>
1) __code__ (text segment) <br/>
2) __static and global variables__ ( 1= data segment- to store initialize data - during declaring values)( 2= BSS segment- to store 
   declaration data -uninitialized storing)  <br/>
3) __stack__ (main function then other function push and pop ...)(LIFO) (<br/>
4) __heap__ (dynamic memory allocation) (it grows when dyanamic memory increase) <br/>

<img src="https://scaler.com/topics/images/types-of-memory.webp" width="500" height="400">

✔️ **Static memory allocation** <br/>
➔  Allocation of memory before execution - compile time memory allocation <br/>
➔  Non-reusable memory <br/>
➔  Less optimal way <br/>

✔️ **Dynamic memory allocation** <br/>
➔  Allocation of memory at run time - run time memory allocation <br/>
➔  reusable memory <br/>
➔  More optimal way <br/>


### ❄️ Dynamic memory allocation
➔ the memory is allocated at runtime from the heap segment  <br/>
<br/>

1️⃣ **malloc()** : <br/>
➔ memory allocation <br/>
➔ reserves block of memory with given amount of bytes <br/>
➔ return value of void pointer to allocated space ( here `ptr` give us void pointer of the allocated memory ) so we need to do typeCast according to our 
   requirements ( we are typecasting in `int *ptr` here ) <br/>
➔ However if space is insufficiant in Heap and memory allocation fails then it returns NULL pointer <br/>
➔ all the values at allocated memory are initialized to *garbage value- GB* <br/>

➔ Syntax
```
    ptr = (ptr - type *)malloc(size_in_bytes)
```
➔ Ex.
```
    int *ptr;
    ptr = (int *)malloc(5 *sizeof(int));
```
2️⃣ **calloc()** : <br/>
➔ contiguous allocation <br/> 
➔ reserves n (many-n number) block of memory with given amount of bytes <br/>
➔ Similar to malloc , return value of void pointer to allocated space ( here `ptr` give us void pointer of the allocated memory ) so we need to do typeCast        according to our requirements ( we are typecasting in `int *ptr` here ) <br/>
➔ Similar to malloc , However if space is insufficiant in Heap and memory allocation fails then it returns NULL pointer <br/>
➔ all the values at allocated memory are initialized to *0 -zero* <br/>
<br/>
➔ Differences between malloc and calloc = First, we have to send as parameters the number of blocks needed along with their size in bytes. Second, in calloc(), the values at the allocation time are initialized to 0 instead of garbage value unlike what happens in malloc() <br/>
➔ Syntax
```
    ptr = (ptr - type *)calloc(n, size_in_bytes)
```
➔ Ex.
```
    int *ptr;
    ptr = (int *)calloc(5, sizeof(int));
```
3️⃣ **realloc()** : <br/>
➔ reallocation of memory  <br/>
➔ in cases where the dynamic memory allocated previously is insufficient and there is a need of increasing the already allocated memory to store more data (previously i have allocated 10 bytes to HEAP and now currently i need 16 bytes then i have to reallocated the bytes) <br/>
➔ We also pass the previously declared memory address, and the new size of the memory in bytes while calling the function <br/>
<br/>
➔ Syntax
```
    ptr = (ptr - type *)realloc(ptr, new_size_in_bytes)
```
➔ Ex.
```
    ptr = (int *)realloc(ptr,10* sizeof(int));
```

4️⃣ **free()** : <br/>
➔ disadvantages of dynamic memory allocation, it was mentioned that there is no automatic deletion of dynamically allocated memory when the pointer gets overwritten <br/>
➔ So, to manually do it, we use the free() function to free up the allocated memory space. Therefore, free() is used to free up the space occupied by the allocated memory <br/>
➔ This will free the memory being used by the program in the heap <br/>
<br/>
➔ Syntax
```
    free(ptr);
```

➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖  <br/>
➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖  <br/>
## 🤎 RECURSION : 
➔ Function call itself <br/>

1️⃣ Direct recursion <br/>
➔ When a function is called within itself directly (ex. head,tail,nested,tree ) <br/>

```
//factorail

int fact(int n)
{
    if(n==1)
    return 1;

    else
    return  n * fact(n-1) ; // stack application applied here
}
```

2️⃣ Indirect recursion <br/>
➔  when a function calls another function that eventually calls the original function and it forms a cycle  <br/>

```
int a()
{
    b();
}

int b()
{
    a();
}
```

➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖  <br/>
➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖  <br/>
## 🧡 ADTs and ARRAY

### ❄️ ADT - Abstract Data Types
♻️ *overview*- [link](https://www.geeksforgeeks.org/abstract-data-types/)


➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖  <br/>
➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖  <br/>

## 💜 ARRAY
➔ An array is a fixed-size collection of elements of the *same data type* that are stored in *contiguous memory locations*.<br/>
➔ Elements in an array are accessed using their index <br/>

![](https://media.geeksforgeeks.org/wp-content/uploads/20230302091959/Arrays-in-C.png)

```
    // DECLARE
    type arrayName [ arraySize ] ;
    double balance[5] ;

    // Initializing
    double balance[] = {1000.0, 2.0, 3.4, 7.0, 50.0} ;

    //Accessing
    balance[0] = 1000.0

    // Traversal or Triversing - process in which we visit every element of the data structure
    for (int i = 0; i < N; i++)
    {
        array_name[i];
    }

```

 ➔ ❄️ **ARRAY OPERATIONS** <br/>
 <br/>
 ➔ **Traversal** <br/>
 <br/>
 ➔ **Insertion at specific position of array** <br/>
 
```
// C Program to Insert an element
// at a specific position in an Array
 
#include <stdio.h>
 
int main()
{
    int arr[100] = { 0 };
    int i, x, pos, n = 10;
 
    // initial array of size 10
    for (i = 0; i < 10; i++)
        arr[i] = i + 1;
 
    // print the original array
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");                      //OUTPUT= 1 2 3 4 5 6 7 8 9 10 
 
    // element to be inserted
    x = 50;
 
    // position at which element
    // is to be inserted
    pos = 5;
 
    // increase the size by 1
    n++;
 
    // shift elements forward
    for (i = (n-1) ; i >= pos ; i--)
        arr[i] = arr[i - 1];
 
    // insert x at pos (position)
    arr[pos - 1] = x;
 
    // print the updated array
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\n");
 
    return 0;
}

// OUTPUT=
// 1 2 3 4 5 6 7 8 9 10 
// 1 2 3 4 50 5 6 7 8 9 10 
```

<img src="https://media.geeksforgeeks.org/wp-content/uploads/20190826133603/Insert-an-element-at-a-specific-position-in-an-Array.jpg" width="500px" height="400px" >

➔ **Deletion at specific position of array** <br/>

```
for(i = pos-1 ; i<size-1 ; i++ )
{
    a[i]= a[i+1] ;
}

```

📢 Type of array- <br/>
1) 1-D array <br/>
2) Multi-D array(2D, 3D) <br/>
3) Dynamic array - it is the same as MALLOC() <br/>


➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖  <br/>
➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖  <br/>
➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖  <br/>
➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖  <br/>

## 💚 LINKED LISTS : [best-for-code](https://www.javatpoint.com/singly-linked-list)

⚠️ **Why use linked list over array?** <br/>
➔ Arrays demand a contiguous memory location - sometimes it is not possible to get the too much long -block of memory allocation from system  <br/>
➔ Lengthening an array is not possible. We would have to copy the whole array to some bigger memory location to lengthen its size. <br/>
➔ ( inserting or deleting is difficult )inserting or deleting an element causes the elements to shift right and left, respectively  <br/>

➔ It allocates the memory dynamically <br/>
➔ All the nodes of the linked list are non-contiguously stored in the memory and linked together with the help of pointers <br/>
➔ ( inserting or deleting is easy )because it is like chaining/chain  <br/>
 <br/>
➔ DRAWBACK=  <br/>
➔ extra pointer required for every element which takes extra memory  <br/>
➔ Random access not allowed bcz non-contiguous  <br/>

💫 [learn self refrential structure](https://github.com/parthmern/Data-Structures-and-Algorithms/edit/main/README.md#-self-refrential-structure)
<br/>
```
struct Node
{
    int data;
    struct Node *next; // Self referencing structure
};
```
♻️ Notes= [link](https://api.codewithharry.com/media/videoSeriesFiles/courseFiles/data-structures-and-algorithms-in-hindi-13/LinkedLists.pdf)
<br/>

➔ Malloc() :
```
struct Node *head ;
head = (struct Node *)malloc(sizeof(struct Node)) ;
```

![img](https://cwh-full-next-space.fra1.digitaloceanspaces.com/videos/data-structures-and-algorithms-in-hindi-14/Image_1.webp)

*Every element in a linked list is called a node and consists of two parts, the data part, and the pointer part. The data part stores the value, while the pointer part stores the pointer pointing to the address of the next node.* <br/>

### ❤️ Insertion :

Case 1: Insert at the beginning <br/>
Case 2: Insert in between <br/>
Case 3: Insert at the end <br/>
Case 4: Insert after the node <br/>
<br/>
<br/>
⭕️ Case 1: Insert at the beginning <br/>
➔ Syntax for creating a new node 
```
struct Node *ptr = (struct Node*) malloc (sizeof (struct Node)) ;

ptr -> data = 9 ;

ptr ->next = head ;
head = ptr ;
```
![img](https://cwh-full-next-space.fra1.digitaloceanspaces.com/videos/data-structures-and-algorithms-in-hindi-15/Image_2.webp)


⭕️ Case 2: Insert in between <br/>
➔ Syntax for creating a new node 
```
struct Node *ptr = (struct Node*) malloc (sizeof (struct Node)) ;

ptr -> data = 9 ;

ptr ->next = p->next  ; //where p = position of pointer = second,third
p ->next = ptr ;
```

![img](https://cwh-full-next-space.fra1.digitaloceanspaces.com/videos/data-structures-and-algorithms-in-hindi-15/Image_3.webp)

*here p means the pointer ( second,third ) and firstly we have to connect the new ptr next to the p->next element so `ptr ->next = p->next` means we are storing the value of p->next in the Newly created ptr's NEXT position. secondly, `p ->next = ptr` we are storing the address of NEW ptr in the old p->next*
<br/>
<br/>
<br/>
⭕️ Case 3: Insert at the end <br/>
➔ Syntax
```
struct Node *ptr = (struct Node*) malloc (sizeof (struct Node)) ;

ptr -> data = 9 ;

p ->next = ptr  ; 
ptr ->next = NULL ;
```

![](https://cwh-full-next-space.fra1.digitaloceanspaces.com/videos/data-structures-and-algorithms-in-hindi-15/Image_4.webp)

<br/>
<br/>
⭕️ Case 4: Insert after the node <br/>
➔ Syntax <br/>

```
struct Node *ptr = (struct Node*) malloc (sizeof (struct Node)) ;

ptr-> next = prevNode-> next ;
prevNode -> next = ptr ;
```
<br/>
<img src="https://cwh-full-next-space.fra1.digitaloceanspaces.com/videos/data-structures-and-algorithms-in-hindi-15/Image_5.webp">

<br/>

### ❤️ Deletion :

⭕️ Case 1: Delete at the first node <br/>
```
struct Node * ptr = head ;
head = head -> next ;

free(ptr) ;
```
![](https://cwh-full-next-space.fra1.digitaloceanspaces.com/videos/data-structures-and-algorithms-in-hindi-17/Image_2.webp)

⭕️ Case 2: delete node in between <br/>
```
Struct Node * p = head ;

while( p = index-1 )
{
    p = p -> next;
}

Struct Node * q = p->next ;
p->next = q->next ;

free(q) ;

```
![](https://cwh-full-next-space.fra1.digitaloceanspaces.com/videos/data-structures-and-algorithms-in-hindi-17/Image_3.webp)
<br/>

⭕️ Case 3: delete node last <br/>
```
struct Node *p = head;
struct Node *q = head->next;

while(q->next !=NULL)
{
    p = p->next;
    q = q->next;
}
    
p->next = NULL;
free(q);
```

![](https://cwh-full-next-space.fra1.digitaloceanspaces.com/videos/data-structures-and-algorithms-in-hindi-17/Image_4.webp)

⭕️ Case 4: Deleting the element with a given value <br/>

```
struct Node *p = head;
struct Node *q = head->next;

while(q->data!=value && q->next!= NULL)
{
    p = p->next;
    q = q->next;
}

if(q->data == value)
{
    p->next = q->next;
    free(q);
}
```

![](https://cwh-full-next-space.fra1.digitaloceanspaces.com/videos/data-structures-and-algorithms-in-hindi-17/Image_5.webp)

➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖  <br/>
### 💜 Circular Linked List <br/>
➔ A circular linked list is a linked list where the last element points to the first element (head) hence forming a circular chain <br/>
➔ Tail is connected to the Head. There is no node pointing to the NULL <br/>

![](https://cwh-full-next-space.fra1.digitaloceanspaces.com/videos/data-structures-and-algorithms-in-hindi-19/Image_1.webp)

```
    fourth->next = head;
    //or
    tail->next = head;
```
➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖  <br/>
### 💛 Doubly Linked List <br/>
➔ Each node contains a data part and two pointers in a doubly-linked list, one for the previous node and the other for the next node and Both the end pointers point to the NULL. (previous - data - next ) 

![](https://cwh-full-next-space.fra1.digitaloceanspaces.com/videos/data-structures-and-algorithms-in-hindi-21/Image_1.webp)

⚠️ *How is it different from a singly linked list?* <br/>
➔ allows traversal in both directions <br/>
➔ in head node, the previous address is of NULL value and same for the tail node, the next address is NULL <br/>

```
struct node   
{  
    struct node *prev;   
    int data;  
    struct node *next;   
}   
```
➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖  <br/>
➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖  <br/>
➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖  <br/>
➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖  <br/>

## 💚 STACK :
➔ linear data structure. <br/>
➔ LIFO (Last In First Out) order <br/>
![](https://scaler.com/topics/images/stack-in-c.webp)

⚠️ **Applications of Stack**
➔ We have talked about *function calls* before as well. A function until it returns reserves a space in the memory stack. Any function embedded in some function comes above the parent function in the stack. So, first, the embedded function ends, and then the parent one. Here, the function called last ends first.  (LIFO) <br/>
➔ Infix to postfix conversion (and other similar conversions) <br/>
➔ Parenthesis matching <br/>
➔ UNDO/REDO <br/>
➔ Recursion <br/>
➔ String reversal <br/>
 <br/>

![](https://cwh-full-next-space.fra1.digitaloceanspaces.com/videos/data-structures-and-algorithms-in-hindi-24/Image_1.webp)
 
⭕️push() - insert elemernt <br/>

```

if (top == n-1 ); //---> overflow (where n=size)

else
top++;
a[top]=x; //where x=inserted element that we can take using scanf

```
⭕️pop() - delete element <br/>

```
if(top==-1) //---> empty stack

else
top--;
```

⭕️display() - traversing <br/>

```
if(top==-1) //---> empty stack

for(i=0 ; i <=top ; i++)
{
    print(a[i])
}
```

⭕️Isempty() - check empty or not <br/>
```
if(top==-1) //---> empty stack
```

⭕️IsFull() - check full(overflow) or not <br/>

```
if (top == n-1 ); //---> overflow (where n=size)
```

⭕️peek() - peekest element
```
if(top==-1) //---> empty stack

else
printf(a[top])
```



