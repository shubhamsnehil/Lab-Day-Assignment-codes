//Roll No.:20CY20031
//Name:Shubham Snehil
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int matrix[6][6],sum[6];//declaration of variables
    srand(time(0));//calling time based random numbers
    for(int j=0; j<6; j++)
    {
        for(int k=0; k<6; k++)
        {
            matrix[j][k]=((rand())%9)+1;//filling the matrix with random numbers from 1 to 9
        }
    }
    for(int j=0; j<6; j++)
    {
        for(int k=0; k<6; k++)
        {
            printf("%d    ",matrix[j][k]);//displaying the matrix
        }
        printf("\n");
    }
    printf("\n");
    printf("Elements of principal diagonal:");
    for(int j=0; j<6; j++)//loop to display elements of principal diagonal
    {
        for(int k=0; k<6; k++)
        {
            if(j==k)
            {
                printf("%d ",matrix[j][k]);
            }
        }
    }
    printf("\n");
    for(int i=0;i<6;i++)
    {
        sum[i]=0;
    }
    for(int j=0; j<6; j++)
    {
        for(int k=0; k<6; k++)
        {
            sum[j]=sum[j]+matrix[j][k];//calculating and storing sum of each row of the matrix
        }
    }
    for(int j=0; j<6; j++)//loop to check whether sum of on row is equal to sum of other row in the matrix
    {
        for(int k=0; k<6; k++)
        {
            if (j!=k)//condition to stop comparing same row with itself
            {
                if(sum[j]==sum[k])
                {
                    printf("\nYes");
                    printf("\nSum of row %d=Sum of row %d=%d",j,k,sum[j]);
                }
            }
        }
    }
}
