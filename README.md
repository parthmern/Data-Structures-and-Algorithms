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






