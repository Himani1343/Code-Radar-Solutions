#include <stdio.h>
int main(){
int n;
scanf("%d",&n);
int arr[n],i;
int countEven=0;
    int countOdd=0;
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);}
    
    
        if(arr[i]%2==0){
        countEven++;
        }
        else{
        countOdd++;
    
    
}
    printf("%d %d",countEven,countOdd);
return 0;
}