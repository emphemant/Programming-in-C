#include <stdio.h>
#include <string.h>
int main(){
    char name[100];
    int age;
    printf("Enter name: ");
    if(fgets(name, sizeof(name), stdin)){
        size_t ln = strlen(name);
        if(ln && name[ln-1]=='\n') name[ln-1]=0;
    }
    printf("Enter age: ");
    if(scanf("%d", &age)==1){
        printf("Name: %s\nAge: %d\n", name, age);
    }
    return 0;
}