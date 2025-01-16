#include<stdio.h>
int main ()
{
int a=10;
int *z = a;
int *ptr = &a;
int b = *ptr;
int c = ptr;
int d = &a;
printf("%d\n",d);       //  store and print address of memory location of variable a:

printf("%d\n",ptr);     //  store and print address of memory location of variable a:

printf("%d\n",*ptr);    //  store and print value at address of memory location a:

printf("%p\n",d);       //  store and print address of memory location of variable a in Hexadecimal:

printf("%p\n",*ptr);    //  store and print value at address of memory location a in Hexadecimal:

printf("%u\n",d);       //  store and print address of memory location of variable a:

printf("%d",*(&a));     //  store and print value at address of memory location a in Hexadecimal:
return 0;
}