#include<stdio.h>
int main(){
    int n,arr[5] ;
    printf("Enter the no of elements");
     scanf("%d", &n);
    printf("Enter 5 elements");
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("the arr elements are....");
    for(int i=0; i<=n; i++) {
        printf("%d", arr[i]);

    }
     return 0;
}