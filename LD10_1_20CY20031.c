//Roll No.:20CY20031
//Name:Shubham Snehil
#include <stdio.h>
#include <math.h>
int count=0;
int nonRecb2d(int arr[],int s)//creating non recursive user defined function for decimal conversion
{
    int d_equiv=0;//setting initial value to 0
    for(int i=15; i>=0; i--)//loop to apply logic of binary to decimal conversion on each element
    {
        d_equiv+=arr[i]*(pow(2,15-i));//logic to convert the number
        count++;//count variable for number of addition and multiplication used in process
    }
    return d_equiv;
}
int recb2d(int arr[],int s)//creating recursive user defined function for decimal conversion
{
    if(s==0)//base case
    {
        return 0;
    }
    count++;
    return ((pow(2,count-1))*arr[s-1])+recb2d(arr,s-1);//recursive call of function recb2d
}
int main()//main function
{
    int binNum[16];
    srand(time(0));//calling time based random numbers
    for(int i=0; i<16; i++)
    {
        binNum[i]=(rand())%2;//filling the array with random numbers, remainder with 2 gives 0 and 1
    }
    for(int i=0; i<16; i++)
    {
        printf("%d",binNum[i]);//displaying the content of array
    }
    printf("\nBinary to decimal non recursively:%d",nonRecb2d(binNum,16));//display of results
    printf("\nNumber of multiplications performed:%d",count);
    printf("\nNumber of additions performed:%d",count-1);
    count=0;//setting value of count to 0 before displaying result of recursive function
    printf("\nBinary to decimal recursively:%d",recb2d(binNum,16));
    printf("\nNumber of multiplications performed:%d",count);
    printf("\nNumber of additions performed:%d",count-1);
    return 0;
}
