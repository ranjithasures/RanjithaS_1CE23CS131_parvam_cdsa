#include<stdio.h>
int main(){
    int a[]={1,2,32,45,7};
    int sum=0;
    for(int i=0; i<5; i++){
       printf("%d\n",a[i]);
    sum+=a[i];
    }
    printf("sum is: %d",sum);
     return 0;
}