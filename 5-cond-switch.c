#include<stdio.h>
// program for conditional statement operator of Switch Case
int main() {
    int M;
    printf("Enter num (0-1): ");
    scanf("%d", &M);
    switch (M)
    {
    case 0: printf("OFF");
    break;
    case 1: printf("ON");
        break;
    
    default: printf("No Conclusion");
        break;
    }
    

}