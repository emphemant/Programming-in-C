#include <stdio.h>
int main(){
    int n,a[100],i,pos=0,neg=0,odd=0,even=0;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(a[i]>0) pos++;
        else if(a[i]<0) neg++;
        if(a[i]%2==0) even++;
        else odd++;
    }
    printf("Positive=%d\nNegative=%d\nEven=%d\nOdd=%d\n",pos,neg,even,odd);
    return 0;
}