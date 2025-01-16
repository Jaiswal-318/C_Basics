#include<stdio.h>

typedef struct vector
{
    int x,y;
} vec;
 
void sum(vec a, vec b, vec c);
int main(){
    vec a = {5,10};
    vec b = {3,7};
    vec c = {0};
    sum(a,b,c);
}
void sum(vec a, vec b, vec c){
    c.x = a.x + b.x;
    c.y = a.y + b.y;
    printf("sum of x-comp is: %d\n",c.x);
    printf("sum of y-comp is: %d",c.y);
}
