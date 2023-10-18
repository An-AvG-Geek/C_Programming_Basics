//program to print area of a circle and the volume of the cylinder of same base

#include<stdio.h>
int main(){
    float r;
    float h;
    printf("Enter the radius of the circle\n");
    scanf("%f",&r);
    printf("The area of the circle is %f\n",3.14*r*r);
    int area=3.14*r*r;
    printf("Enter the height of the cylinder of same radius\n");
    scanf("%f",&h);
    printf("The volume of the cylinder is %f",area*h);
    return(0);


}