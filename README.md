# Data-Structures-and-Algorithms

### ♥ **What is Data-Structure**

➔ A data structure is a storage that is used to store and organize data. <br/>
➔ It is a way of arranging data on a computer so that it can be accessed and updated efficiently. <br/>
➔ It is also used for processing, retrieving, and storing data. <br/>

📃 Example - In fridge, the vegetales,food,fruits (datas) can be __STORE__ , __ORGANIZE__ , __ACCESS__ , __MANIPULATE__ <br/>
♻️ _Overview_ - [link](urlhere)

➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖
### 💛 **Classification / types**

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

### 💙 STRUCTURE
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

### 💚 UNION
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

### 💛 SELF REFRENTIAL STRUCTURE
➔ one structure which have pointer as member and which point to the same type of structure <br/>
♻️ *overview* - [link](https://youtu.be/fpjAFx4v4oU)

<img src="https://blogger.googleusercontent.com/img/b/R29vZ2xl/AVvXsEj1UKTWapJ8DiLaeHj8vt3lw6Et8Qk7yftoLYsKVfTRThEZlJgWBLl5eAwdei3RGwUyvFTmREGh5ZTUNZZK2cF_4EAbzfIrCvMLuyysxzlTZrObpidtuLGJD1frK1x_1qu4j-Q2ryUrT6YlgUQ9q5KzE93mnwb550LXvzQCRkpux39OUMmgKOSrpW79/s1000/Self%20Referential%20Structure.png" width="500" height="300">

![](https://gcdnb.pbrd.co/images/RGUggoWTOpNi.jpg?o=1)

➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖  <br/>
➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖  <br/>

### 💙 POINTER
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
