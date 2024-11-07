#include<stdio.h>
int sum_of_digits(int number){
    int total=0;
    while(number>0){

        total+=number%10;
        number/=10;
    }
    return total;
}
int main(){
    int number;
    printf("enter the number:");
    scanf("%d",&number);
    printf("sum of digits:%d\n",sum_of_digits(number));
    return 0;
}
