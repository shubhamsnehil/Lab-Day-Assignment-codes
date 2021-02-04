//Roll No.:20CY20031
//Name:Shubham Snehil
#include <stdio.h>
#include<stdlib.h>
void get_union(int arr1[],int arr2[])//function to find union set
{
    int tmp[40],check=0,k=0;//tmp is the final union set. Check and k are helper variables
    for(int i=0; i<20; i++)//loop to copy elements of first array to tmp
    {
        tmp[k]=arr1[i];
        k++;
    }
    for(int i=0; i<20; i++)
    {
        check=0;//initializing value of check
        for(int j=0; j<20; j++) //loop to check if there are any same elements in tmp and first array
        {
            if(arr1[i]==tmp[j]);
            {
                check=1;
                break;
            }
        }
        if(check==0)//if check=0 then only elements from second array will go to union set
        {
            tmp[k]=arr2[i];
            k++;
        }
    }
    printf("\nUnion of sets:");
    for(int i=0; i<k; i++)
    {
        printf("%d ",tmp[i]);
    }

}
void get_intersection(int arr1[],int arr2[])//function to find intersection set
{
    int tmp[40],k=0,check=0;
    for(int i=0; i<20; i++)
    {
        check=0;
        for(int j=0; j<20; j++)
        {
            if(arr1[i]==arr2[j])//comparison of elements of both arrays to find common elements
            {
                check=1;
                break;
            }
        }
        if(check==1)
        {
            tmp[k]=arr1[i];//elements get copied to tmp only if they are found to be equal in both arrays, thats why using check=1
            k++;
        }
    }
    if(k==0)//in case no common elements are present in both arrays
    {
        printf("\nThey are disjoint sets");
    }
    else
    {
        printf("\nIntersection of sets:");
        for(int i=0; i<k; i++)
        {
            printf("%d ",tmp[i]);
        }
    }
}

int main()
{
    int set1[20],set2[20],tmp[40],temp[40],choice,r;
    srand(time(0));//calling time based random numbers
    for(int i=0; i<40; i++)
    {
        temp[i]=0;
    }
    for(int i=0; i<20; i++)
    {
        r=0;
        while(1)
        {
            r=((rand())%31)+10;//adjusting range of random numbers
            if(temp[r]!=1)
            {
                temp[r]=1;
                break;
            }
        }
        set1[i]=r;
    }
    for(int i=0; i<40; i++)
    {
        temp[i]=0;
    }
    for(int i=0; i<20; i++)
    {
        r=0;
        while(1)
        {
            r=((rand())%31)+10;//adjusting range of random numbers
            if(temp[r]!=1)
            {
                temp[r]=1;
                break;
            }
        }
        set2[i]=r;
    }
    printf("Set1:");
    for(int i=0; i<20; i++)
    {
        printf("%d ",set1[i]);
    }
    printf("\n");
    printf("Set2:");
    for(int i=0; i<20; i++)
    {
        printf("%d ",set2[i]);
    }
    while(1)//infinite loop
    {
        printf("\nEnter the choice 1,2 or 3:");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1://for calling union function
            get_union(set1,set2);
            break;
        case 2://for calling intersection function
            get_intersection(set1,set2);
            break;
        case 3://exit case
            return 0;
            break;
        default://for all other choices
            printf("Invalid choice");
        }
    }
}

