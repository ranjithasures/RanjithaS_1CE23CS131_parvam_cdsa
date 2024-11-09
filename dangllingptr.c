<<<<<<< HEAD
#include<stdio.h>
int main(){
    int*ptr=(int*)malloc(sizeof(int));
    *ptr=10;
    printf("bfr free %d\n",*ptr);
 free(ptr);
 printf("aftr free %d/\n",*ptr);
    return 0;
=======
#include<stdio.h>
int main(){
    int*ptr=(int*)malloc(sizeof(int));
    *ptr=10;
    printf("bfr free %d\n",*ptr);
 free(ptr);
 printf("aftr free %d/\n",*ptr);
    return 0;
>>>>>>> 167b5ada9e8e29f458e4e6b7d012b46382492cb9
}