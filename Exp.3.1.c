#include <stdio.h>
int main(){
    float a,b,c;
    printf("Enter three sides of triangle: ");
    if(scanf("%f %f %f",&a,&b,&c)==3){
        if(a+b>c && b+c>a && c+a>b){
            if(a==b && b==c) printf("Equilateral Triangle\n");
            else if(a==b || b==c || c==a) printf("Isosceles Triangle\n");
            else if(a*a+b*b==c*c || b*b+c*c==a*a || c*c+a*a==b*b) printf("Right Angled Triangle\n");
            else printf("Scalene Triangle\n");
        }else printf("Not a valid triangle\n");
    }
    return 0;
}