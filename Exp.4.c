#include <stdio.h>
int main(){
    int a[10][10],b[10][10],c[10][10],m,n,p,q,i,j,k;
    printf("Enter rows and cols of matrix A: ");
    scanf("%d%d",&m,&n);
    printf("Enter rows and cols of matrix B: ");
    scanf("%d%d",&p,&q);
    if(n!=p){
        printf("Matrix multiplication not possible\n");
        return 0;
    }
    printf("Enter elements of matrix A:\n");
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    printf("Enter elements of matrix B:\n");
    for(i=0;i<p;i++)
        for(j=0;j<q;j++)
            scanf("%d",&b[i][j]);
    for(i=0;i<m;i++)
        for(j=0;j<q;j++){
            c[i][j]=0;
            for(k=0;k<n;k++)
                c[i][j]+=a[i][k]*b[k][j];
        }
    printf("Resultant Matrix:\n");
    for(i=0;i<m;i++){
        for(j=0;j<q;j++)
            printf("%d ",c[i][j]);
        printf("\n");
    }
    return 0;
}