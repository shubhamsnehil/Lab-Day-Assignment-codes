//Roll No.:20CY20031
//Name:Shubham Snehil
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int array[30],temp,i=0,even=0;//temp is a temporary variable to store intermediate values of array
    srand(time(0));//to call time based random integers
    for(i=0; i<30; i++)//to fill the array with numbers in the given range
    {
        array[i]=((rand())%91+10);//setting the range
    }
    for(i=0; i<30; i++)//to display the array
    {
        printf("%d ",array[i]);
        if(array[i]%2==0)
        {
            even++;
        }
    }
    i=0;//reseting value of i
    while(i<30-even)//iteration for selecting elements in the array till 15th location
    {
        if(array[i]%2==0)//checking if selected element is even
        {
            temp=array[i];//storing the element in temp variable
            for(int j=i+1; j<30; j++)//shifting all values from 'i'th location to 30th location one index backwards
            {
                array[j-1]=array[j];//shifting consecutive elements
            }
            i--;//changing value of i to recheck the shifted element which will fall in the same index
            array[29]=temp;//shifting the selected value to end of array
        }
        i++;
    }
    printf("\n");
    for(i=0; i<30; i++)//printing the new array with even and odd elements segregated preserving the order
    {
        printf("%d ",array[i]);
    }
}
