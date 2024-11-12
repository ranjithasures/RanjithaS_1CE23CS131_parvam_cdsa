#include<stdio.h>
int main(){
    char str[20];
    printf("Enter the string:");//scanf("%s",name);-without space
    fgets(str,20,stdin);//can accept space
    printf("The string is: %s",str);
    return 0;
}