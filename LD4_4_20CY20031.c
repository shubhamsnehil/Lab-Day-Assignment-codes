#include <stdio.h>
int main()
{
    int a=1,b=0,n,i,temp;
    printf("\nEnter value of n:");
    scanf("%d",&n);
    if(n<=0)
    {
        printf("\nEnter a positive integer");
        return 0;
    }
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            printf("%d ",a+b);
            temp=a;
            a=b;
            b=temp+b;

        }
        else
        {
         printf("-%d ",a+b);
            temp=a;
            a=b;
            b=temp+b;
        }
    }
    return 0;
}
