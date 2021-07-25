#include<stdio.h>

int main(void){

int array[3] = {24, 48, 72};
printf("The first element of the array %d and the memory address of is %p\n", array[0], &array[0]);
printf("The second element of the array %d and the memory address of is %p\n", array[1], &array[1]);
printf("The third element of the array %d and the memory address of is %p\n", array[2], &array[2]);


char my_name[3] = {'B', 'A', 'C'};
printf("The first element of the character array is %c and memory address is %p\n", my_name[0], &my_name[0]);
printf("The second element of the character array is %c and memory address is %p\n", my_name[1], &my_name[1]);
printf("The third element of the character array is %c and memory address is %p\n", my_name[2], &my_name[2]);

}