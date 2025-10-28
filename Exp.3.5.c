#include <stdio.h>
int main(){
    float l1,b1,l2,b2,l3,b3,p1,p2,p3;
    printf("Enter length and breadth of 3 rectangles: ");
    if(scanf("%f %f %f %f %f %f",&l1,&b1,&l2,&b2,&l3,&b3)==6){
        p1=2*(l1+b1); p2=2*(l2+b2); p3=2*(l3+b3);
        float max=(p1>p2)?(p1>p3?p1:p3):(p2>p3?p2:p3);
        printf("Highest Perimeter = %.2f\n",max);
    }
    return 0;
}