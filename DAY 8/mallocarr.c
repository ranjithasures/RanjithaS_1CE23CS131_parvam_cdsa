#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    int*array=(int*)malloc(n*sizeof(int));
    if(array==NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }
    printf("Enter %d eleements:\n",n);
    for(int i=0;i<n; i++)
      scanf("%d", &array[i]);
    printf("you entered:");
    for(int i=0;i<n;i++)
     printf("\t%d",array[i]);
    printf("\n");
    free(array);
    return 0;
   }


