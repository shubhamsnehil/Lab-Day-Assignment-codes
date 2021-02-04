#include <stdio.h>
int tribonacci(int n)
{
    if(n==0)
    {
        return 0;
    }
    else if(n==1||n==2)
    {
        return 1;
    }
    return tribonacci(n-3)+tribonacci(n-2)+tribonacci(n-1);

}
int main()
{
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    printf("%d",tribonacci(n));
}
