<<<<<<< HEAD
#include<stdio.h>
int main(){
    int a=10;
    int*ptr;
    char b='s';
    char*ptr1=&b;
    ptr=&a;

    printf("the value of a is %d\n",a);
    printf("the address of a is %p\n",&a);
    printf("the ptr is %p\n",ptr);
    printf("the size of ptr is %d\n",sizeof(ptr));
    printf("the size of ptr is %d\n",sizeof(ptr1));
    return 0;
=======
#include<stdio.h>
int main(){
    int a=10;
    int*ptr;
    char b='s';
    char*ptr1=&b;
    ptr=&a;

    printf("the value of a is %d\n",a);
    printf("the address of a is %p\n",&a);
    printf("the ptr is %p\n",ptr);
    printf("the size of ptr is %d\n",sizeof(ptr));
    printf("the size of ptr is %d\n",sizeof(ptr1));
    return 0;
>>>>>>> 167b5ada9e8e29f458e4e6b7d012b46382492cb9
}