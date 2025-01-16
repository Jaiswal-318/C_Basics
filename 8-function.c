#include<stdio.h>
float Square_Area(float a);
float Circle_Area(float b);
float main(){
    float S,C;
    printf("Enter side of square: "); // why unable to use line breaker.
    scanf("%f",&S);
    printf("Enter Radius of circle: ");
    scanf("%f",&C);
    printf("square Area is: %f\n",Square_Area(S));
    printf("Circle Area is: %f ",Circle_Area(C));
}

float Square_Area(float a){
    return a*a;
}

float Circle_Area(float b){
    return 3.14*b*b;
}