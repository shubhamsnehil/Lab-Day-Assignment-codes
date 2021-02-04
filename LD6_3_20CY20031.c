//Roll No.:20CY20031
//Name:Shubham Snehil
#include <stdio.h>
int main()
{
    int s,n,k=0,l=0;//k and l are helper variables for detecting line changes and number of lines
    printf("\nEnter Scale factor:");
    scanf("%d",&s);
    if(s>6)
    {
        printf("\nScale factor out of range");
        return 0;
    }
    printf("\nEnter number of lines:");
    scanf("%d",&n);

    while(l<n)//condition to check number of lines not exceeding n
    {
        for(int i=1; i<=3+s; i++)//for printing integers from 1 to 3+s
        {
            k++;//to signify one character has been printed
            printf("%d",i);
            if(k==2+s)//to check the maximum characters allowed in a line and changing line based on that
            {
                printf("\n");
                k=0;//reseting value of k for reuse
                l++;//to count number of lines printed
                if(l==n)//for checking and breaking the loop when iteration reaches last line(to ignore remaining characters)
                {
                    break;
                }
            }
        }
    }
    return 0;

}
