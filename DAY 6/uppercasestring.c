#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
char a[50]="Hello";
char b[50];
char c[70]="World!";
strcpy(b,a);
printf("copied string is %s\n",b);
printf("the length of the copied string is %d\n",strlen(b));
strcat(a,b);
printf("concatenated string is %s\n",a);
strcat(b,c);
printf("concatenated string2 is  %s\n",b);
int res=strcmp(b,a);//hellohello<helloworld=.-1
printf("%d\n",res);//0=>both are same ,-1 str1 is less,+1 str1 is greater
if(res==0)
{
    printf("both strings are equal\n");
}
else if(res==-1)
{
    printf("string1 is lesser than string2\n");
}
else{
    printf("string1 is greater than string2\n");
}
printf("%s\n",strrev(a));
//upper
for(int i=0;a[i]!='\0';i++)
{
    a[i]=toupper(a[i]);

}
printf("%s",a);
//lowercase
for(int i=0;a[i]!='\0';i++)
{
    a[i]=tolower(a[i]);

}
printf("%s",a);
return 0;
}