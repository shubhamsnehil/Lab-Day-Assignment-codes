#include <stdio.h>
#include <stdlib.h>
struct temp
{
    int largest;
    int smallest;
};
struct temp data(int arr[10][10])
{
    struct temp tmp;
    tmp.largest=0;
    tmp.smallest=0;
    for(int i=0; i<10; i++)
    {
        for(int j=0; j<10; j++)
        {
            if(tmp.largest<arr[i][j]&&i==j)
            {
                tmp.largest=arr[i][j];
            }
            if(tmp.smallest>arr[i][j]&&i+j==9)
            {
                tmp.smallest=arr[i][j];
            }
            if(tmp.smallest==0)
            {
                tmp.smallest=arr[i][j];
            }
        }
    }
    return tmp;
}
int main()
{
    int arr[10][10];
    srand(time(0));
    for(int i=0; i<10; i++)
    {
        for(int j=0; j<10; j++)
        {
            arr[i][j]=((rand())%30)+1;
        }
    }
    for(int i=0; i<10; i++)
    {
        for(int j=0; j<10; j++)
        {
            printf("%d    ",arr[i][j]);
        }
        printf("\n");
    }
    struct temp values=data(arr);
    printf("Largest of main diagonal=%d",values.largest);
    printf("\n");
    printf("Smallest of secondary diagonal=%d",values.smallest);
    return 0;
}
