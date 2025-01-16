#include<stdio.h>
// program to perform operation on file
int main(){
    FILE *fptr;
    fptr = fopen("a.txt","a");  // r=read, w=write a=append
    //
    char a;
    int b;
    fscanf(fptr,"%c",&a);
    printf("file char is; %c\n",a);
    fscanf(fptr,"%c",&a);
    printf("file char is; %c\n",a);
    
    fprintf(fptr, "\n%d",123); // write in a file 
    
    char x = getc(fptr);   // getc = read a file
    printf(" the character is: %c",x);
    
    putc('A',fptr);  // to write in a file.






    fclose(fptr);
    return 0;
}