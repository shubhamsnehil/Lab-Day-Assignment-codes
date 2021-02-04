//Roll No.:20CY20031
//Name:Shubham Snehil
#include <stdio.h>
int main()
{
    int a,b;
    float r,s,am,amc;
    printf("\nEnter the amount being deposited:");
    scanf("%d",&a);
    printf("\nEnter the period of deposit:");
    scanf("%d",&b);
    printf("\nEnter the yearly rate of interest:");
    scanf("%f",&r);
    s=(a*r*b)/100;
    am=s+a;
    printf("\nAmount payable at the end of the deposit with simple interest=%f",am);
    amc=(a)*(pow((1+r*0.01),b));
    printf("\nAmount payable at the end of the deposit with compound interest=%f",amc);

}
