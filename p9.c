#include<stdio.h>
int main()
{
    int i,j,n;
     printf("enter the no.");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(j<i)
                printf(" ");
            else printf("%d",j+1);
        }printf("\n");
    }
return 0;
}


