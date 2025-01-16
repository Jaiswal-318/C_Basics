#include<stdio.h>
#include<stdlib.h>

int main(){
   // printf("int:%d\nfloat:%d\nchar:%d\ndouble:%d",sizeof(int),sizeof(float),sizeof(char),sizeof(double));
int *ptr;
int *abc;
int *xyx;
abc = (int*) calloc(3,sizeof(float));
ptr = (int*) malloc(3*sizeof(int));
ptr[0]=1;
ptr[1]=2;
ptr[2]=3;
ptr[3]=4;
for (int i=0; i<=3;i++)
{
        printf("%d\t",ptr[i]);}
for (int j = 0; j<=3 ; j++)
{
    printf("%d\t",abc[j]);
}
free(ptr);
free(abc);
printf("%d\n",ptr[0]);
printf("%d\t",abc[1]);

    return 0;
}