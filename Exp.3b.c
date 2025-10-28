#include <stdio.h>
int main(){
    int n=5,i,j,coef;
    for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
            if(j==0||j==i) coef=1;
            else coef=coef*(i-j+1)/j;
            printf("%d ",coef);
        }
        printf("\n");
    }
    return 0;
}