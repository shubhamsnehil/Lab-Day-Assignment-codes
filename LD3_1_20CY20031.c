//Roll No.:20CY20031
//Name:Shubham Snehil
#include <stdio.h>
#include <math.h>
int main()
{
   float x1,y1,r1,x2,y2,r2,d;
   printf("\nEnter the coordinates of centre and radius of first circle:");
   scanf("%f%f%f",&x1,&y1,&r1);
   printf("\nEnter the coordinates of centre and radius of second circle:");
   scanf("%f%f%f",&x2,&y2,&r2);
   d=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
   if(d>r1+r2||d==0||d<r1-r2)
    printf("\nNO INTERSECTION");
    else if(d==r1+r2||d==r1-r2)
        printf("\nThe circles intersect at 1 point");
    else if(d>r1-r2&&d<r1+r2)
        printf("\nThe circles intersect at 2 points");
    return 0;

}
