#include<stdio.h>
// to print no. from 0 to 1;
int main() {
    for (int  i = 0; i <= 10; i++)
    {
        if (i==9)
        {
            break; // to exit the loop similarly (continue;) is used to skip the iteration
        }
         printf("%d \n",i);
        
    }
    return 0;
    }