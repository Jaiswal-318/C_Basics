#include<stdio.h>
// to calc. factorial of a given num using RECURSION .
int fac(int n);

int main (){
    int n;
    printf("Enter a Num: ");
    scanf("%d",&n);
    int A = fac(n)+100; // To store the value return value of function:
    printf("Value of A is: %d\n",A);
    printf("factorial of a given no. %d\n",fac(n));
    return 0;
}
int fac(int n){
    if (n==1)
    { return 1;
    }
   int fac1= fac(n-1);
int fac2= fac1*n;
return fac2;
}