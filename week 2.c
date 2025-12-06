#include <stdio.h>

int main(){
    printf("Input radius;");
    float r;
    scanf("%f",&r);
    
    printf("Input height;");
    float h;
    scanf("%f",&h);
    
    float volume=3.14159*r*r*h;
    
    printf("The volume of the cylinder if %.2f\n",volume);
    
    double area=(2*3.14159*r*r)+(2*3.145159*r*h);
    printf("The surface area of the cylinder is %.2lf",area);
    
    return 0;
}