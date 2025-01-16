#include<stdio.h>
#include<string.h> // It is library where fuction of string are defined and stored.

int main (){
    char new[50];
    char str[] = "Bishal";
    char _str[] = "Jaiswal";

// length of string;
    int lengthstr = strlen(str);
    int length_str = strlen(_str);
    printf("length of str:= %d\nlength of _str:= %d\n",lengthstr,length_str);

// to copy value stored in one string to another;
    strcpy(new,str);
    printf("string stored in new: %s\n",new);
    
//  to join two sring;
    strcat(str,_str);
    puts(str);

// TO compare string; it is based of ASCII Value
int A = strcmp(str,_str);
printf("comparison: %d\n",A);

// TO Make lower and upper case;
strlwr(str);
strupr(_str);
puts(str);
puts(_str);
    return 0;
}