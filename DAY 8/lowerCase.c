#include<stdio.h>
int main()
{
    char str[]="HELLO, WORLD!";
    int i=0;

    while(str[i] !='\0')
    {
        if (str[i] <= 'Z' && str[i] >= 'A'){
            str[i] = str[i] -'A'+'a';
        }
        i++;
    }
    printf("Lowercase string: %s\n",str);
    return 0;
}
//upper and lowercase without using inbuilt function