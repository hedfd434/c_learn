#include <stdio.h>
#include "main.h"
#include <stdlib.h>

//functions
int function_1(int x, int y)
{
    return x + y;
}

int function_2(int x, int y)
{
    return x - y;
}


//functions pointers

//typedef for function pointer
/*
    fun_ptr becomes a type which a pointer to function which returns 1 integers and takes 2 integers as the arguments
    at thise moment whenever we want to use a pointer for function desribed abowed we can use fun_ptr as a datatype
    below is example where callback functions use two different types of passing function as an argument to the function
    by specifing function type or by using pre-specified fun_ptr data type
*/
// typedef int (*fun_ptr)(int, int);




//pointer for functions that take 2 ints and return 1 int
/*
    this is just a type of function which we want to handle, with created name for the pointer (works only in)
    where:
    int - is a type of function, what does it return ?
    (*fun_ptr) - it is a name for function pointer - fun_ptr is a pointer to the function that takes 2 ints and return1 1 int
    (int, int) - this are the data typed that function takes
*/
// int (*fun_ptr_10)(int, int);

/* 
    this is a pointer to a certain function function which is function 1
*/
int (*fun_ptr_10)(int, int) = function_1;


//callback function
/*
    this function takes 3 arguments
    where first two are just integers, which are used to further calculatios
    the last function is a pointer to function that returns 1 int but as the arguments takes 2 integers

    further function returns the result of function specified in function pointer argument
*/

//function using normal function pointer
int calclulate(int x, int y, int (*fun_ptr_1)(int, int))
{
    return (*fun_ptr_1)(x, y);
}


//function usign pre-specified functino pointer
// int calclulate(int x, int y, fun_ptr fun_1)
// {
//     return fun_1(x, y);
// }





//main function
int main(int argc, int **argv)
{

    int (*fun_ptr_12)(int, int);
    fun_ptr_12 = function_1;

    printf("fun_ptr_10(1, 29) = %d\n", fun_ptr_12(1, 29));


    printf("fun_ptr = %d\n", fun_ptr_12);

    printf("%%d function_1 = %d", function_1);
    // int result = calclulate(1,2,function_1);

    // printf("result = %d", result);
    // printf("fun_1_ptr = %d", fun_1_ptr);
    // printf("output of fun_1_ptr called as a function %d\n", fun_1_ptr(2,3)); 


    // qsort()
    return 0;
}