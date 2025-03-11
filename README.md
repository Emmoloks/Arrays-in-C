# Introduction to Arrays in C

In C programming, one of the frequent problems is handling similar types of data.  
For example, if a user wants to store marks of **500 students**, this can be done by creating **500 variables individually**, but this is tedious and impractical.  

These types of problems can be efficiently handled using **arrays**.  

An **array** in C programming can be defined as a collection of memory locations, each of which can store the same **data type** and can be referenced using the same variable name.  

It is a **collective name** given to a group of similar quantities. These similar quantities could be:
- Marks of 500 students  
- Number of chairs in a university  
- Salaries of 300 employees  
- Ages of 250 students  

Thus, we can say an **array** is a sequence of **homogeneous values** (same type).  
These values could be integers, floats, characters, etc.  

## Types of Arrays in C
1. **One-dimensional arrays**  
2. **Multidimensional arrays**  

---

## One-Dimensional Arrays  

A **one-dimensional array** is a structured collection of components (often called **array elements**) that can be accessed individually by specifying the position of a component with a single **index value**.  

### **Syntax for Declaring a One-Dimensional Array:**
data_type array_name[array_size];
