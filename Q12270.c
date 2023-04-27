#include<stdio.h>
int main(){
    float a,b;
    printf("Enter 1st number: \n");
    scanf("%f",&a);
    printf("Enter 2nd number: \n");
    scanf("%f",&b);
    printf("Sum: %f\n",a+b);
    printf("Average: %f\n",(a+b)/2);
    printf("Sum of squares: %f \n",a*a+b*b);
    return 0;
}