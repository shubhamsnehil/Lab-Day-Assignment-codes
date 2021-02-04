//Roll no.:20CY20031
//Name:Shubham Snehil
#include <stdio.h>
#include <stdlib.h>//for calling rand function
int main()
{
    int array[30],n,temp;
    printf("\nEnter number of elements to be input:");
    scanf("%d",&n);
    srand(time(0));//for generating time based random numbers
    for(int i=0;i<n;i++)//for generating array with random numbers
    {
        array[i]=((rand())%21)+10;//generating random numbers within given range [10,30]
    }
    for(int i=0;i<n;i++)
    {
        printf("%d\n",array[i]);//for displaying contents of array
    }
    for(int i=0;i<n/2;i++)//for swapping numbers from front and back
    {
       temp=array[i];
       array[i]=array[n-1-i];//for swapping one number from front with corresponding number from back
       array[n-1-i]=temp;
    }
    for(int i=0;i<n;i++)
    {
        printf("\n%d",array[i]);//for displaying final contents of reversed array
    }
    return 0;
}
