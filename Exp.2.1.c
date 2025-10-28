#include <stdio.h>
int main(){
    float length, width, area, perimeter;
    printf("Enter length and width: ");
    if(scanf("%f %f", &length, &width)==2){
        area = length * width;
        perimeter = 2 * (length + width);
        printf("Area = %.2f\nPerimeter = %.2f\n", area, perimeter);
    }
    return 0;
}