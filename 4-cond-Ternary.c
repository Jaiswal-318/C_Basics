
#include<stdio.h>
// ternary conditional
int main(){
    int M;
    printf("Enter Marks(0-100): ");
    scanf("%d",&M);
    M>=30 ? printf("PASS"): printf("FAIL");
    return 0;
    
}