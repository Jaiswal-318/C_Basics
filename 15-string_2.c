#include<stdio.h>

// Use of fgets() and puts();

int main (){

     /* in previous program
     suppose if u enter Prince Jaiswal then scanf takes only Prince 
     because scanf not takes multi word string 
     so use use gets(char variable name); or fgets(char variable name, variable size, stdin) to take input
      and puts() 0r fputs() for output of string */
    
    char _Name[50];
    printf("Enter your full name:");
    fgets(_Name,50,stdin);
    printf("Your full name is: ");
    puts(_Name);

    char *str_arr = "Thank You"; 
    /*if we use pointer then we change string value later but,
     if we use array we can't change the value stored in it later in program.*/
    printf( "Printing by using of pointer array string: %s",str_arr);
    return 0;
}