#include <stdio.h>
int main(){
    float c, f;
    printf("Enter temperature in Celsius: ");
    if(scanf("%f", &c)==1){
        f = (c * 9 / 5) + 32;
        printf("Fahrenheit = %.2f\n", f);
    }
    return 0;
}