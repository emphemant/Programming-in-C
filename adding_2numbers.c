#include <stdio.h>
int main(){
    double a, b;
    printf("Enter two numbers separated by space: ");
    if(scanf("%lf %lf", &a, &b)==2){
        printf("Sum = %.6g\n", a + b);
    }
    return 0;
}