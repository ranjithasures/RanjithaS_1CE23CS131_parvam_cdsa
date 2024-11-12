#include<stdio.h>
int main(){
   int a[2][2]={{1,2},{3,4}};
   printf("transpose elements are:\n");
   for(int i=0;i<2;i++){
        for(int j=0; j<2; j++){
                printf("\t%d",a[j][i]);
        }
        printf("\n");
    }
   return 0;
}
//can also be used to copy elements from one matrix to another