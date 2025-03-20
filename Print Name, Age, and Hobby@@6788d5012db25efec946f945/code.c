#include <stdio.h>
int main(){
    char name[100],hobby[100];
    int age;
    scanf("%s %d %s",&name,&age,&hobby);
    printf("Name: %c",name);
    printf("Age: %d",age);
    printf("Hobby: %c",hobby);
    return 0;
}