#include<stdio.h>
// program for conditional statement operator of (if and else)
int main() {
    float M;
    printf("Enter Marks(0-100): ");
    scanf("%f",&M);
    if (M<=30) {
        printf("fail");
    }
    else{
        printf("Pass");
    }
    return 0;
    }
    