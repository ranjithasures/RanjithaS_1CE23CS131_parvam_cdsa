#include<stdio.h>
int main(){
    int a[]={1,2,4,7,10};
    int n=sizeof(a)/sizeof(a[0]);
    int target;
    printf("enter the elements to search:");
    scanf("%d",&target);
    for( int i=0;i<n;i++){
       if(target==a[i]){
        printf("the element is present at index %d\n",i);
        return 0;
         }
    }
    printf("the element is not present!"); 
    return 0;
}