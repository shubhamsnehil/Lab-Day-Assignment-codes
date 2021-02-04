#include <stdio.h>
#include <math.h>
float findTerm(int n,float x)
{
    if(n==1)
    {
        return 1;
    }
    return ((x*x)/((2*(n-1))*(2*(n-1)-1)))*findTerm(n-1,x);
}
int main()
{
    int n;
    float x;
    printf("Enter value of n:");
    scanf("%d",&n);
    printf("Enter value of x:");
    scanf("%f",&x);
    for(int i=0;i<n;i++)
    {
        printf("%f\n",findTerm(i+1,x));
    }
    return 0;
}
