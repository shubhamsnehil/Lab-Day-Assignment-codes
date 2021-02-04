//Roll No.:20CY20031
//Name:Shubham Snehil
#include <stdio.h>
int main()
{
    int a,temp;
    printf("\nEnter an integer:");
    scanf("%d",&a);
    while(a!=0)
    {
        temp=a%10;
        switch(temp)
        {
        case 0:
            printf("Zero ");
            break;
        case 1:
            printf("One ");
            break;
        case 2:
            printf("Two ");
            break;
        case 3:
            printf("Three ");
            break;
        case 4:
            printf("Four ");
            break;
        case 5:
            printf("five ");
            break;
        case 6:
            printf("Six ");
            break;
        case 7:
            printf("seven ");
            break;
        case 8:
            printf("Eight ");
            break;
        case 9:
            printf("nine ");
            break;
        }
        a/=10;
    }
}
