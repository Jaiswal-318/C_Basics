#include<stdio.h>

/*Create a string first_name and last_name to store first and last name of user,
print all the character using a loop ?
*/

void print_str(char arr[]); // we don't need to specify length of arry of string:
int main(){
    char first_name[] = "Bishal"; // to store word or string use (" ")
    char last_name[] = "Jaiswal";
    char name[] = {'A','N','U',' ','J','H','A','\0'}; 
       print_str(first_name);
    print_str(last_name);
    printf("\n");

   // extra: stuff
    printf("The name is: %s\n%d\n",name,name); //ARRAYS are pointers;
    printf("name first letter; %c\n",name[0]);

    // to print user name;
    char Name[50];
    printf("Enter your name: ");
    scanf("%s",Name); 
    printf("your name is: %s",Name); 

   
    return 0;
}

void print_str(char arr[]){
    for (int i = 0; arr[i] != '\0'; i++)
    {
        printf("%c",arr[i]);
    }
    printf("\t");
}
