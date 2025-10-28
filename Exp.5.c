#include <stdio.h>
int main(){
    int a,b,c,d,n;
    for(a=1;a<=20;a++){
        for(b=a;b<=20;b++){
            for(c=a;c<=20;c++){
                for(d=c;d<=20;d++){
                    if(a*a*a+b*b*b==c*c*c+d*d*d && (a!=c && a!=d)){
                        n=a*a*a+b*b*b;
                        printf("%d = %d^3 + %d^3 = %d^3 + %d^3\n",n,a,b,c,d);
                    }
                }
            }
        }
    }
    return 0;
}