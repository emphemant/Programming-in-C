#include <stdio.h>
int main(){
    float x1,y1,x2,y2,x3,y3;
    printf("Enter coordinates x1 y1 x2 y2 x3 y3: ");
    if(scanf("%f %f %f %f %f %f",&x1,&y1,&x2,&y2,&x3,&y3)==6){
        if((x2-x1)*(y3-y1)==(y2-y1)*(x3-x1))
            printf("Collinear\n");
        else
            printf("Not Collinear\n");
    }
    return 0;
}