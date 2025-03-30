#include <stdio.h>
int main(){
int n;
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);}
    int countEven=0;
    int countOdd=0;
    
        if(arr[i]%2==0){
        countEven+=arr[i];}

        else{
        countOdd+=+arr[i];
    
    
}
    printf("%d %d",countEven,countOdd);
return 0;
}