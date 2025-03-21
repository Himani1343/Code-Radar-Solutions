#include<stdio.h>
int main(){
    int x;
    int y;
    int z;
    scanf("%d",&x);
    scanf("%d",&y);
    scanf("%d",&z);
    if((x+y)>z && (y+z>x) && (x+z>y)){
        printf("Valid");}
    else {
    printf("Invalid");}
    return 0;
    }