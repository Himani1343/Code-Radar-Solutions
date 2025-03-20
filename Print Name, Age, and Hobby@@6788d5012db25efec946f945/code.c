#include <stdio.h>
int main(){
    char name[100];
    int age;
    char hobby[100];
    scanf("%c %d %c",&name,&age,&hobby);
    printf("Name: %c",name);
    printf("Age: %d",age);
    printf("Hobby: %c",hobby);
    return 0;
}