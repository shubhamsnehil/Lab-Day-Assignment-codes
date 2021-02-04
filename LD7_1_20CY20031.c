//Roll No.:20CY20031
//Name:Shubham Snehil
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int b2d(int arr[])//creating user defined function for decimal conversion
{
    int d_equiv=0;//setting initial value to 0
    for(int i=15; i>=0; i--)//loop to apply logic of binary to decimal conversion on each element
    {
        d_equiv+=arr[i]*(pow(2,15-i));//logic to convert the number
    }
    return d_equiv;
}
int main()
{
    int binNum[16],choice,decimal_equiv;
    srand(time(0));//calling time based random numbers
    for(int i=0; i<16; i++)
    {
        binNum[i]=(rand())%2;//filling the array with random numbers, remainder with 2 gives 0 and 1
    }
    for(int i=0; i<16; i++)
    {
        printf("%d",binNum[i]);//displaying the content of array
    }
    printf("\n");
    while(1)//running the infinite loop
    {
        printf("Enter the choice: 1,2,3,4,5,6: ");
        scanf("%d",&choice);
        switch(choice)//to take user choice out of 1,2,3,4,5,6
        {
        case 1://binary to decimal conversion case
            decimal_equiv=b2d(binNum);
            printf("Decimal equivalent is :%d ",decimal_equiv);
            break;
        case 2://binary to hexadecimal conversion case
            break;
        case 3://binary to octal conversion case
            break;
        case 4://multiplying by 2 case
            break;
        case 5://dividing by 2 case
            break;
        case 6://exit case
            return 0;
            break;
        default://for all other choices
            printf("Invalid choice ");
        }

    }
}

