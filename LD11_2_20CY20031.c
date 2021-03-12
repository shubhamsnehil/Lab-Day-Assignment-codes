//Roll No.:20CY20031
//Name:Shubham Snehil
#include <stdio.h>
#include <stdlib.h>
struct temp//to return two values under one function
{
    int largest;
    int smallest;
};
struct temp findMinMax(int *arr,int p, int q)//function to display smallest and largest value of the array
{
    struct temp tmp;
    tmp.largest=0;
    tmp.smallest=0;
    for(int i=0; i<p; i++)
    {
        for(int j=0; j<q; j++)
        {
            if(tmp.largest<*(arr+i*q+j))//condition to find largest element
            {
                tmp.largest=*(arr+i*q+j);
            }
            if(tmp.smallest>*(arr+i*q+j))//condition to find smallest element
            {
                tmp.smallest=*(arr+i*q+j);
            }
            if(tmp.smallest==0)
            {
                tmp.smallest=*(arr+i*q+j);
            }
        }

    }
    return tmp;
}
int main()
{
    int p,q,*mat;
    printf("Enter the dimensions of the array:");
    scanf("%d%d",&p,&q);
    mat=(int*)malloc(p*q*sizeof(int));//dynamic allocation of array size
    srand(time(0));//for calling time based random numbers
    for(int i=0; i<p; i++)
    {
        for(int j=0; j<q; j++)
        {
            *(mat+i*q+j)=(rand())%101;//filling the elements of array
        }
    }
    for(int i=0; i<p; i++)
    {
        for(int j=0; j<q; j++)
        {
            printf("%d    ",*(mat+i*q+j));
        }
        printf("\n");
    }
    struct temp values=findMinMax(mat,p,q);//calling function to display min and max value of array
    printf("Largest element of array=%d",values.largest);
    printf("\n");
    printf("Smallest element of array=%d",values.smallest);
    return 0;

}
