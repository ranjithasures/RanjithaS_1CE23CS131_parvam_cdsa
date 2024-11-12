#include<stdio.h>
int main(){
   int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
   int transpose[3][3];

   printf("transpose elements are:\n");
   for(int i=0;i<3;i++){
        for(int j=0; j<3; j++){
                scanf("\t%d",&a[j][i]);
        }
        printf("\n");
    }
   return 0;
}