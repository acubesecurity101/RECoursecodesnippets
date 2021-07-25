#include<stdio.h>
#include<string.h>

int main(void)
{

 
    char character = 'A'; //character
    printf("The character is : %c\n", character);
    int a = 10, b = -10; //signed and unsigned integer variable
    printf("The signed variable is %d & the unsigned variable is %u\n", a, b);
    float y = 69.69; //float
    printf("The float variable is y: %f\n", y);
    int octal = 48; //octal 
    printf("The octal value of the declared integer is %o \n", octal);
    int hex = 12; //to be converted to hex
    printf("The hex converted value of 12 is : %x\n",  hex);
    char string[7] = "Binary"; //string
    printf("The string is : %s\n", string);
    printf("The memeory address of hex is %p\n", (void*)&hex); //memory address

    return 0;



}