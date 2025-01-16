#include<stdio.h>
#include<stdlib.h>
/*Allocate memory to store first five ODD no. then
REALLOCATE it to store 6 even no. ?
*/
int main(){
    int *ptr;
    ptr = (int*) malloc(5*sizeof(int));
    ptr[0]=1;
    ptr[1]=3;
    ptr[2]=5;
    ptr[3]=7;
    ptr[4]=9;
    for(int i=0;i<=4;i++ ){
        printf("%d\t",ptr[i]);
    }
    printf("\n");
    ptr=(int*) realloc(ptr,6);
    ptr[0]=2;
    ptr[1]=4;
    ptr[2]=6;
    ptr[3]=8;
    ptr[4]=10;
    ptr[5]=12;
     for(int j=0;j<=5;j++ ){
        printf("%d\t",ptr[j]);
    }
    return 0;
}
