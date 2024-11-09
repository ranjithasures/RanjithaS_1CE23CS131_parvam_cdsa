#include<stdio.h>
int main(){
     int n;
    printf("Enter the no of elements:");
     scanf("%d",&n);
     int arr[n];
    printf("Enter %d elements:",n);
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
        }
     printf("the arr elements are....");
    for(int i=0; i<n; i++) {
        printf("\t%d", arr[i]);
    }
    int max=arr[0];
    int min=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        else if(arr[i]<min){
            min=arr[i];
        }
    }
    printf("\nMaximum is :%d",max);
    printf("\nMinimum is :%d",min);
    return 0;
}