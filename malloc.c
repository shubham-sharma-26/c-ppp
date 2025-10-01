//malloc
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,*ptr;
    printf("enter the value:");
    scanf("%d",&n);

    ptr=(int*)malloc(n*sizeof(int));
    printf("\n enter value:");
    for(i=0;i<n;i++)
    {
        scanf("%d",(ptr+i));
        printf("\n the entered values are:");
        for(i=0;i<n;i++)
        {
            printf("%d",*(ptr+i));
        }
        free(ptr);
    }
}