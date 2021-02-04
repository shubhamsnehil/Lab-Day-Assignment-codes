//Roll No.:20CY20031
//Name:Shubham Snehil
#include <stdio.h>
int main()
{
    int x[20]= {13,14,15,16,17,18,19,20,21,22,23}; //filling integers in array based on given range
    for(int i=0; i<=10; i++) //iterating over elements in array
    {
        for(int j=i+1; j<=10; j++) //iteration to compare selected elements and printing pairs
        {
            if((x[i]%10)+(x[i]/10)%10+(x[j]%10)+(x[j]/10)%10==(x[i]+x[j])%10+((x[i]+x[j])/10)%10)//logic to find sum of digit preserving pair
                printf("\n%d and %d",x[i],x[j]);
        }
    }
    return 0;
}
