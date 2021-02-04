#include <stdio.h>
#include <math.h>
int main()
{
   int t;
    printf("\nEnter the task number (1,2,3,4):");
    scanf("%d",&t);
    float f1,f2,f3,d,d1,d2,a1,a2,temp,temp1;
    printf("\nEnter the 3 values:");
    scanf("%f%f%f",&f1,&f2,&f3);
    switch(t)
    {
    case 1:
        temp=f2;
        f2=f1;
        temp1=f3;
        f3=temp;
        f1=temp1;
        printf("\nNew Value of f1=%f",f1);
        printf("\nNew Value of f2=%f",f2);
        printf("\nNew Value of f3=%f",f3);
        break;
    case 2:
        d=(f2*f2)-4*f1*f3;
    if(d>=0)
        {
            d1= (-1*f2+sqrt(d))/(2*f1);
    d2=(-f2-sqrt(d))/(2*f1);
    printf("\nFirst root=%f",d1);
    printf("\nSecond root=%f",d2);
        }
    else
        {
            a1=-f2/(2*f1);
    a2=(sqrt(-d))/(2*f1);
    printf("\nFirst imaginary root:%f+j%f",a1,a2);
    printf("\nSecond imaginary root:%f-j%f",a1,a2);
    }
    break;
    case 3:
        if(((f1*f1)+(f2*f2)-(f3*f3))>0)
            printf("\nOUTSIDE");
        else if(((f1*f1)+(f2*f2)-(f3*f3))==0)
            printf("\nON THE CIRCLE");
        else if(((f1*f1)+(f2*f2)-(f3*f3))<=0)
            printf("\nINSIDE");
        break;
    case 4:
        if((f1+f2)>f3&&(f2+f3)>f1&&(f1+f3)>f2)
            printf("\nYES");
        else
            printf("\nNO");
        break;
    default:
        printf("\nNO SUCH TASK");
    }
    return 0;
}
