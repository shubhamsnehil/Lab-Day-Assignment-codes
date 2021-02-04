//Roll No.:20CY20031
//Name:Shubham Snehil
#include <stdio.h>
#include <math.h>
int main()
{
    int L,R;
    printf("\nEnter the value of side of square:");
    scanf("%d",&L);
    printf("\nEnter the value of radius of circle:");
    scanf("%d",&R);
    if(2*R<=L)
        printf("\nCIRINSQ");
    else if(sqrt(2)*L<=2*R)
        printf("\nSQINCIR");
    else
        printf("\nNONE");
}
