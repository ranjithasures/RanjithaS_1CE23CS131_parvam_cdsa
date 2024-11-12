#include<stdio.h>
#include<string.h>
int main(){
    char str[20];
    printf("Enter the string:\n");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]=0;//remove the last char....
    printf("The string is %s \n",str);
    int length=strlen(str);
    printf("%d is the length of the string",length);
    return 0;
 }
