#include <stdio.h>
int main(){
int n;
scanf("%d",&n);
int arr[n];
for(int i=0;i<=n-1;i++){
    scanf("%d",&n);}
    int countEven=0;
    int countOdd=0;
    for(int i=0;i<=n-1;i++){
        if(arr[i]%2==0){
        countEven=countEven+arr[i];}

        else{
        countOdd=countOdd+arr[i];
    }
    
}
    printf("%d %d",countEven,countOdd);
return 0;
}