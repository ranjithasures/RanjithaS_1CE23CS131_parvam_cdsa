#include<stdio.h>
int main(){
     int arr[5]={3,2,8,1,9};
     int n=5;
    
        for(int i=0; i<n-1;i++){
            int minIndex=i;
        for( int j=i+1;j<n;j++){
        if(arr[j]<arr[minIndex]){
            minIndex=j;
        }
        }
           int temp=arr[minIndex];
            arr[minIndex]=arr[i];
            arr[i]=temp;
        }
         printf("sorted array:");
         for( int i=0;i<n;i++){
         printf("%d",arr[i]);
         }
         printf("\n")
          return 0;
}