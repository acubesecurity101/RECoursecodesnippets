//String functions
#include<stdio.h>
#include<string.h>

int main(){



char stringone[7] = "ABCDEFG";
int size_of_string = (int)strlen(stringone); //string length function
printf("The size of string is : %d\n", size_of_string);


char name_two[10] = "Elemental";
puts(name_two);
strcpy(name_two, "Snipe"); //string copy from source to destination
puts(name_two);

char first_string[6] = "Hello";
char second_string[7] = " World";
strcat(first_string, second_string); //concatenating the strings and storing results in first string
printf("%11s\n", first_string);


char compare_stringone[12] = "Hello World";
char compare_stringtwo[10] = "HelloWorld" ;
int compare = strcmp(compare_stringone, compare_stringtwo); //string compare between two arrays
printf("%d\n", compare);

int match_ret_length = strspn("Disassembly is cool", "Disassembly");
printf("%d\n", match_ret_length);
if(match_ret_length> 0){

    printf("Yes , it scanned and found a match which is of length : %d\n",match_ret_length );
}
else{

    printf("Error Matching");
}

char one[] = "Disassembly is cool";
char two[] = "assembly" ;
char *com;

com = strstr(one, two);

printf("%s\n", com);





return 0;

    
}