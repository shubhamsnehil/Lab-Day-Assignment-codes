//Roll No.:20CY20031
//Name:Shubham Snehil
#include <stdio.h>
#include <math.h>
int main()
{
    float a1,b1,r1,a2,b2,r2,d;
    printf("\nEnter coordinate of centre and radius of first circle:");
    scanf("%f%f %f",&a1,&b1,&r1);
    printf("\nEnter coordinate of centre and radius of second circle:");
    scanf("%f%f%f",&a2,&b2,&r2);
    d=sqrt((a1-a2)*(a1-a2)+(b1-b2)*(b1-b2));
    printf("\nThe distance between two circles is:%f",d);
}
