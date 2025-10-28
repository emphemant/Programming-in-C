#include <stdio.h>
int main(){
    int n=4,num=1,i,j;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("%d ",num++);
        }
        printf("\n");
    }
    return 0;
}