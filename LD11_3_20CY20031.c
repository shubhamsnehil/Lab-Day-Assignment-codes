//Roll No.:20CY20031
//Name:Shubham Snehil
#include <stdio.h>
#include <stdlib.h>
int dist2cities(int arr[5][5],int s, int t)//creating first function
{
    int d1;
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            d1=arr[s][t];//distance between city s and city t
        }
    }
    return d1;
}
int dist2thr3city(int arr[5][5],int s,int t,int r)//creating second function
{
    int d2;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            d2=arr[s][r]+arr[r][t];//distance between city s and city t through city r
        }
    }
    return d2;
}
int main()
{
    int dist[5][5],s,t,r,temp;
    srand(time(0));//time based random numbers
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            dist[i][j]=(rand())%1001;//filling the array
            temp=dist[i][j];
            dist[j][i]=temp;
        }
    }
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            printf("%d    ",dist[i][j]);//printing the matrix
        }
        printf("\n");
    }
    printf("Enter s,r and t:");
    scanf("%d%d%d",&s,&r,&t);//taking input from user
    printf("\nDistance between city %d and city %d is:%d",s,t,dist2cities(dist,s,t));
    printf("\nDistance between city %d and city %d through city %d is:%d",s,t,r,dist2thr3city(dist,s,t,r));

}
