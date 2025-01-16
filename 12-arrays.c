#include<stdio.h>
int main (){
    int Arr[3]; // it help us by preventing declaring multiple variable
    int arr[2]={1,2};
    printf("enter marks of three subject: ");
    scanf("%d %d %d", &Arr[0],&Arr[1],&Arr[2]);
    printf("first subject mark: %d\nsecond sub mark: %d\nthird sub mark: %d\n",Arr[0],Arr[1],Arr[2]);
    printf("the first value store in arr[] is: %d\n ", arr[0]);
    printf("address of arr %d",arr); // Array is itself a pointer ;
    return 0;
}
