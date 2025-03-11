###Introduction To Arrays:
In C programming, one of the frequently problem is to handle similar types of data. For example: if the
user wants to store marks of 500 students, this can be done by creating 500 variables individually but,
this is rather tedious and impracticable. These types of problem can be handled in C programming using
arrays.
An array in C Programing can be defined as number of memory locations, each of which can store the
same data type and which can be references through the same variable name. It is a collective name
given to a group of similar quantities. These similar quantities could be marks of 500 students, number
of chairs in university, salaries of 300 employees or ages of 250 students. Thus we can say array is a
sequence of data item of homogeneous values (same type). These values could be all integers, floats or
characters etc.
We have two types of arrays:
1. One-dimensional arrays.
2. Multidimensional arrays.

##One-dimensional arrays
A one-dimensional array is a structured collection of components (often called array elements) that can
be accessed individually by specifying the position of a component with a single index value. Arrays must
be declared before they can be used in the program. Here is the declaration syntax of one dimensional
array:
data_type array_name[array_size];
Here “data_type” is the type of the array we want to define, “array_name” is the name given to the
array and “array_size” is the size of the array that we want to assign to the array. The array size is always
mentioned inside the “[]”.

##Initializing Arrays
Initializing of array is very simple in c programming. The initializing values are enclosed within the curly
braces in the declaration and placed following an equal sign after the array name. Here is an example
which declares and initializes an array of five elements of type int. Array can also be initialized after
declaration. Look at the following code, which demonstrate the declaration and initialization of an array.
int age[5]={2,3,4,5,6};
It is not necessary to define the size of arrays during initialization e.g.
int age[]={2,3,4,5,6};

##Accessing array elements
In C programming, arrays can be accessed and treated like variables in C.
For example:
 scanf("%d",&age[2]);
//statement to insert value in the third element of array age[]
 printf("%d",age[2]);
//statement to print third element of an array.
