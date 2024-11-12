#include<stdio.h>
#include<string.h>
int main()
{
    struct details{
        char address;
        char person[20];
        int pincode ;
    };
struct details p1;
printf("Enter the name of person:");
fgets(p1.person,sizeof(p1.person),stdin);
p1.person[strcspn(p1.person,"\n")]=0;
printf("Enter pincode:");
scanf("%d",&p1.pincode);
printf("Enter address:");
scanf("%s",&p1.address);
printf("address is %s\n",p1.address);
printf("person is %s\n",p1.person);
printf("pincode is %d",p1.pincode);
return 0;
}