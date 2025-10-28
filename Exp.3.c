#include <stdio.h>
int main(){
    int n,a[100],num,i,count=0;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter number to find frequency: ");
    scanf("%d",&num);
    for(i=0;i<n;i++){
        if(a[i]==num) count++;
    }
    printf("Frequency of %d = %d\n",num,count);
    return 0;
}