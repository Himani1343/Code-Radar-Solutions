#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int k;
    scanf("%d",&k);
   int arr[n];
   int count=0;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(k==arr[i]){
            count++;
        }
    }
    printf("%d",count);

}