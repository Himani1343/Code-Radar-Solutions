#include<stdio.h>
int main(){
    int x;
    int y;
    int z;
    scanf("%d",&x);
    scanf("%d",&y);
    scanf("%d",&z);
    if(x=y=z){
        printf("Equilateral");
    }
    if(x=y||y=z||x=z){
        printf("Isosceles");
    }
    if(x!=y!=z){
        printf("Scalene");
    }
    return 0;
}