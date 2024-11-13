#include<stdio.h>
int main(){
    FILE *file = fopen("example.txt", "r");//open file in read mode
    if(file==NULL){
        printf("Error creating file.\n");
        return 1;
    }
    printf("File created successfully.\n");
    fclose(file);//close the file
    return 0;
}