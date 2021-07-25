#include<stdio.h> 
#include<math.h> 
int multiply (double number_one , double number_two)

{ 

double result;

 result = number_one * number_two;
 printf("The desired result is %.2lf\n", result); 
 return 0; 
} 

void name_input(char a[10]){


int i = 0;
printf("My name has following characters: \n"); 
for (i = 0; i<10 ; i++){
    printf("%c\n", a[i]);
}




}

int main(void)

{

puts("Please enter the first number: ");

float numberone, numbertwo;

scanf("%f", &numberone);

puts("Please enter the second number : ");

scanf("%f",  &numbertwo);

multiply(numberone,numbertwo);

puts("Please enter your name: ");

char name[10];

for(int j =0; j<9; ++j){

scanf("%12s", &name[j]);

}

name_input(&name);

return 0;

}