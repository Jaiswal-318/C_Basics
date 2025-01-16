#include<stdio.h>
// swapping of two number is done by call by reference pointer:
// not done by call by value pointers:
void swap(int *x, int *y);
int main (){
    int x=5, y=6;
    swap(&x,&y);
    printf("x = %d and y = %d \n",x,y);
    return 0;
}
void swap(int *x, int *y){
    int t = *x;
    *x = *y;
    *y = t;
}