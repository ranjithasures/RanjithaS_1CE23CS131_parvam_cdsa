#include<stdio.h>
int main(){
    char str[20];
    printf("Enter the string:");//scanf("%s",name);-without space
    fgets(str,20,stdin);//can accept space
    printf("The string is: %s",str);
    int length=strlen(str);
    printf("%d is the length of the string",length-1);
    return 0;
}