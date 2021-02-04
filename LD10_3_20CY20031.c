//Roll No.:20CY20031
//Name:Shubham Snehil
#include <stdio.h>
int main()
{
    char name[10][15];//2D array for names of 10 students with 15 characters or less
    int age[10],n,check=0,check1=0;//check is a helper variable for printing first selection for each iteration, check1 is a helper variable for checking if two names are equal
    printf("\nEnter the number of students:");
    scanf("%d",&n);
    for(int i=0;i<n;i++)//to get input from user
    {
        printf("\nEnter Name and Age:");
        scanf("%s%d",&name[i],&age[i]);
    }
    for (int i=0;i<n;i++)//for purpose of checking same name
    {
     for(int j=i+1;j<n;j++)//for comparing selection with subsequent values
     {
         for(int k=0;name[j][k]!='\0';k++)//for comparing two strings
         {
             if(name[i][k]!=name[j][k])
             {
                 check1=1;//indicates that string was not equal
              break;
         }
     }
     if(check1==0)//checking if string was equal
     {
         if(check==0)//for printing first selection
         {
            printf("Name=%s Age=%d ",name[i],age[i]);
            check=1;
         }
         printf("Name=%s Age=%d ",name[j],age[j]);
         name[j][0]='\0';
     }
     check1=0;//reseting value for further string comparison
    }
    printf("\n");

}
check=0;//reseting value for further printing of first selection
for (int i=0;i<n;i++)//for comparison of age
    {
     for(int j=i+1;j<n;j++)//for selecting subsequent ages
     {
     if(age[i]==age[j]&&age!=-1)//for comparing ages and discarding age with value -1(already compared value)
     {
         if(check==0)//for printing first selection
         {
            printf("Name=%s Age=%d ",name[i],age[i]);
            check=1;//to not print in subsequent iteration
         }
         printf("Name=%s Age=%d ",name[j],age[j]);
         age[j]=-1;//setting compared age to -1 for discarding already compared value
     }
    }
    printf("\n");

}
return 0;
}
