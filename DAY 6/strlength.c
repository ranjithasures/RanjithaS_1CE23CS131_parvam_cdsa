//finding length without using in built funtion
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100]="hello";
    int length=0;
    int i=0;
    while(str[length]!='\0')
    {
        length++;
    }
    printf("The length of string without inbuilt function is %d",length);
    return 0;
    }
