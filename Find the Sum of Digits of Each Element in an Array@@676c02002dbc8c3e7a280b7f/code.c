#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);

    int arr[n];
    int count=0;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
    while(arr[i]!=0){
        arr[i]=arr[i]/10;
        count++;

        
    }
    }
    printf("%d ",arr[n]);
}