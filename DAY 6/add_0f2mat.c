#include<stdio.h>
int main(){
    int row,col;
    printf("enter the number of rows and columns");
    scanf("%d",&row);
    scanf("%d",&col);
    int a[row][col];
    printf("Enter the number of elements");
    for( int i=0; i<row; i++){
        for(int j=0;j<col;j++){
           scanf("%d",a[i][j]);
        }
    }
        for( int i=0; i<row; i++){
        for(int j=0;j<col;j++){
           printf("%d",a[i][j]);
        }
        printf("\n");
    }
    return 0; 
}