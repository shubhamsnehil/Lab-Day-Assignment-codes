//Roll No.:20CY20031
//Name:Shubham Snehil
#include <stdio.h>
int main()
{
    int m,c,a,b;
    printf("\nEnter the value of slope:");
    scanf("%d",&m);
    printf("\nEnter the value of y-intercept:");
    scanf("%d",&c);
    printf("\nEnter the coordinates:");
    scanf("%d%d",&a,&b);
    if(b==m*a+c)
        printf("\nYES");
    else
        printf("\nNO");
}
