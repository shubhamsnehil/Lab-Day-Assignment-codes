//Roll No.:20CY20031
//Name:Shubham Snehil
#include <stdio.h>
#include <math.h>
int main()
{
    int u=100;
    int a1=1;
    int t1=3;
    int a2=5;
    float d1,d2,d3,D,v,t2,T;
    d1=u*t1-(a1*t1*t1)/2.0;
    v=u-a1*t1;
    d2=(v*v)/(2.0*a2);
    d3=d1+d2;
    t2=v/a2;
    T=t1+t2;
    D=(10*d3)/7.0;
    printf("\nTotal length of runway:%f",D);
    printf("\nTotal time for spacecraft to stop:%f",T);
    return 0;

}
