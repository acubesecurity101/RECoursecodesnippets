//Pointers

//Pointers

#include<stdio.h>
#include<string.h>


void main(){

int a = 89; //declaring a normal variable 

int *p = &a; //declaring a pointer variable

printf("Address of pointer variable : %p\n",  p); //printing the address of the pointer in hex

printf("Value of variable : %d\n", *p); //dereferencing a pointer variable

*p = 69;

printf("The new value of variable p is : %p\n", p);

int array[4] = {56, 76, 87, 90}; //declaring an array

int *pointer_to_array =  &a; //assigning and declaring a variable pointing towards array[0]

for (int i = 0; i<4 ; i++){

    
    printf("The numbers are %d\n", array[i]); //prints the elements of the array
    printf("The address of the pointers are %p\n", pointer_to_array); //prints address of the elements
    pointer_to_array++;
    



}

}

