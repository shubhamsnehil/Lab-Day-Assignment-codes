//Roll no.:20CY20031
//Name:Shubham Snehil
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int array[30],n;
    printf("\nEnter the number of elements of array:");//taking number of values to be input
    scanf("%d",&n);
    srand(time(0));
    for(int i=0;i<n;i++)//filling array with random numbers
    {
        array[i]=((rand()%31)+10);//adjusting range of random numbers
    }
    for(int i=0;i<n;i++)
    {
      printf("%d\n",array[i]);//for displaying value of array
    }
    for(int i=0;i<n;i++)//for selecting first value of triplet
    {
        for(int j=i+1;j<n;j++)//for selecting second value of triplet
        {
            for(int k=j+1;k<n;k++)//for selecting third value of triplet
            {
                if(array[i]+array[j]+array[k]==60)
                {
                    printf("\nIndex=%d Value=%d\n",i,array[i]);//displaying value and index of triplet
                    printf("Index=%d Value=%d\n",j,array[j]);
                    printf("Index=%d Value=%d\n",k,array[k]);
                }
            }
        }
    }

return 0;
}
