//Roll no.:20CY20031
//Name:Shubham Snehil
#include <stdio.h>
int main()
{
    int roll[10],n,check=0;//check is a helper variable to print first selection for each iteration
    float CGPA[10],avg=0;
    printf("\nEnter the number of students:");
    scanf("%d",&n);
    for(int i=0;i<n;i++)//to input roll number and CGPA and calculate average
    {
        printf("\nEnter roll number and CGPA for student %d:",i+1);
        scanf("%d%f",&roll[i],&CGPA[i]);
        avg+=CGPA[i];
    }
    avg/=n;
    for(int i=0;i<n;i++)//displaying the user input values
    {
        printf("\nThe roll number=%d CGPA=%f",roll[i],CGPA[i]);
    }
    printf("\nAverage CGPA=%f\n",avg);//printing average CGPA
    for(int i=0;i<n;i++)//for selecting first element to compare with
    {
        for(int j=i+1;j<n;j++)//to select subsequent elements to compare with
        {
            float CGPA1,CGPA2;
            CGPA1=(float)((int)(CGPA[i]*100+0.5))/100;//typecasting and rounding off value of CGPA for double digit accuracy
            CGPA2=(float)((int)(CGPA[j]*100+0.5))/100;
          if(CGPA1==CGPA2&&CGPA[i]!=-1)//checking for same CGPA and discarding CGPA if it is -1(i.e.,already compared value)
          {
              if(check==0)//helper to print first selection from parent 'if' statement.
              {
                  printf("Roll number=%d CGPA=%f ",roll[i],CGPA[i]);
              }
              printf("Roll number=%d CGPA=%f ",roll[j],CGPA[j]);
              check=1;
              CGPA[j]=-1;
          }
        }
        printf("\n");
        check=0;

    }
    return 0;
}
