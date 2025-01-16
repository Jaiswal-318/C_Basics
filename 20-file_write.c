#include<stdio.h>
// Write a program to write all the odd number from 1 to n amd 

int main(){
    FILE *fptr;
    fptr = fopen("a.txt","a");

    int a,b,c,d,e,f;

    printf("enter a num: ");
    scanf("%d",&a);
    fprintf(fptr,"\nBishal Jaiswal\n");

    for (int i=1;i<=a; i++)
    { if (i % 2 !=0) {
    fprintf(fptr,"%d\t",i); } }

    fclose(fptr);

    // another proram
    fptr = fopen("a.txt","r");
    fscanf(fptr,"%d",&b);
    fscanf(fptr,"%d",&c);
    fscanf(fptr,"%d",&d);
    fscanf(fptr,"%d",&e);
    fscanf(fptr,"%d",&f);
    printf("%d\t %d\t %d\t %d\t %d\t",b,c,d,e,f);

    fclose(fptr);
    return 0;
}