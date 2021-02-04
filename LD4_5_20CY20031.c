#include <stdio.h>
#include <math.h>
int main()
{
    int n,i,temp,j;
    unsigned long long int tempfac=1;
    float x,sum=0;
    printf("\nEnter the value of x:");
    scanf("%f",&x);
    printf("\nEnter the value of n:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
       if(i%2==0)
       {
          temp=2*i+1;
          tempfac=1;
          for(j=temp;j>0;j--)
          {
            tempfac=tempfac*j;
          }
          sum=sum+((pow(x,temp))/tempfac);
       }
       else
       {
         temp=2*i+1;
          tempfac=1;
          for(j=temp;j>0;j--)
          {
            tempfac=tempfac*j;
          }
          sum=sum-((pow(x,temp))/tempfac);
       }
    }
    printf("\nSum=%f",sum);
    return 0;
}
