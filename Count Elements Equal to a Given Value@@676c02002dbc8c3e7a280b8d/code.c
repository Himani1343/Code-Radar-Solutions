#include<stdio.h>
int main(){
    int n,k;
    scanf("%d %d",&n,&k);
   int arr[n];
   count=0;
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        if(k==arr[i]){
            count++
        }
    }
    printf("%d",count)

}