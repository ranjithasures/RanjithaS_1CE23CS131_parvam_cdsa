#include<stdio.h>
int main()
{
    FILE *file=fopen("hello.txt","w");
    if(file==NULL)
    {
        perror("Error opening file");
        return 1;
    }
    fprintf(file,"Invest your time in better places .\n");
    fprintf(file,"Writing to file will overwrite its contents.\n");
    fclose(file);
    printf("File written sucessfully in write mode.\n");
    return 0;
}