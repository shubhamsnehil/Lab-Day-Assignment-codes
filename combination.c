#include <stdio.h>
//n!/(r!*(n-r)!)
float combinator(int n,int r)
{
    if(r==1)
    {
        return n;
    }
    return (n*combinator(n-1,r-1))/r;
}
int main()
{
    int n,r;
    printf("Enter value of n and r:");
    scanf("%d%d",&n,&r);
    if(n<r)
    {
        printf("Invalid");
        return 0;
    }
    printf("%d",(int)combinator(n,r));
    return 0;

}
