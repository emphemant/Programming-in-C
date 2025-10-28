#include <stdio.h>
int main(){
    int year,days,day;
    printf("Enter year: ");
    if(scanf("%d",&year)==1){
        days = (year-1)*365 + (year-1)/4 - (year-1)/100 + (year-1)/400;
        day = days % 7;
        if(day==0) printf("Monday\n");
        else if(day==1) printf("Tuesday\n");
        else if(day==2) printf("Wednesday\n");
        else if(day==3) printf("Thursday\n");
        else if(day==4) printf("Friday\n");
        else if(day==5) printf("Saturday\n");
        else printf("Sunday\n");
    }
    return 0;
}