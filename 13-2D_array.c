#include<stdio.h>
// Create a 2D array, storing a table of 2 and 3 ?

void Store_table(int tab[][10],int a,int b, int n);

int main() {
    int tables[2][10];
    Store_table(tables,0,10, 2);
    Store_table(tables,1,10, 3);
    for (int i = 0; i< 10; i++)
    {
        printf("%d\t",tables[0][i]);
    }
    printf("\n");
    for (int i = 0; i< 10; i++)
    {
        printf("%d\t",tables[1][i]);
    }
     return 0;
}

void Store_table(int tab[][10], int a,int b,int n){
    for (int i=0; i<10; i++)
    {
        tab[a][i]= n*(i+1);
    } 
}
