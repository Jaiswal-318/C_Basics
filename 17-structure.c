#include<stdio.h>
#include<string.h>
// creating a user defined data types: 
struct student
{
    int Roll;
    float CGPA;
    char Name[50];
};
void pr_details(struct student a);
int main(){
    // 1st program on structure;

    struct student CS[100];
    CS[0].Roll = 942;
    CS[0].CGPA = 9.6;
    strcpy(CS[0].Name, "Bishal");
    printf("Name: %s\n",CS[0].Name);
    printf("Roll: %d\n",CS[0].Roll);
    printf("CGPA: %f\n",CS[0].CGPA);
    printf("\n");

// Another code without Array;

    struct student a;
    printf("Enter your name: ");
    fgets(a.Name,50,stdin);
    printf("Enter roll no: ");
    scanf("%d",&a.Roll);
    printf("Enter CGPA: ");              
    scanf("%f",&a.CGPA); 
    printf("\n");
    char y[50];
    strcpy(y,a.Name);
    printf("Name: %s",y);                
    printf("Roll: %d\nCGPA: %f",a.Roll,a.CGPA);
    printf("\n");
    
// using function;
 pr_details(a);  
    return 0; 

}
void pr_details(struct student a){
    char x[50];
    strcpy(x,a.Name);
    printf("Name: %s",x);                
    printf("Roll: %d\nCGPA: %f",a.Roll,a.CGPA);

}
