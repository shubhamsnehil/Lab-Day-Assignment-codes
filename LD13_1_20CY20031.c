//Roll No.:20CY20031
//Name:Shubham Snehil
#include<stdio.h>
#include <string.h>//for calling strcmp, strcpy and strupr
char FILENAME[]="G:\\studs.txt";//declaring file name as constant
int nStuds;//declaring global variable
struct student//creating structure
{
    char firstname[20];
    char lastname[20];
    char address[40];
    int mobnum;
    int marks[5];
    int sum;
};
struct student studArray[50];//structure array
void createStuds()//declaring first function
{
    struct student temp;
    char c;
    nStuds=0;
    FILE *fp;
    fp=fopen(FILENAME,"r"); //opening the file
    if(fp==NULL)
    {
        printf("error in opening file");
        exit(-1);
    }
    for(int j=0; j<21; j++)//scanning elements from file and setting variables of structure
    {
        fscanf(fp,"%s%s%s%d%d%d%d%d%d",&studArray[j].firstname,&studArray[j].lastname,&studArray[j].address,&studArray[j].mobnum,&studArray[j].marks[0],&studArray[j].marks[1],&studArray[j].marks[2],&studArray[j].marks[3],&studArray[j].marks[4]);
        nStuds++;
    }
    fclose(fp);//closing the file
    printf("\nFirstname     Lastname     Address     mobnumber     Marks1     Marks2     Marks3     Marks4     Marks5");
    for(int i=0; i<nStuds; i++)//printing the details
    {
        printf("\n%s     %s     %s     %d     %d     %d     %d     %d     %d",studArray[i].firstname,studArray[i].lastname,studArray[i].address,studArray[i].mobnum,studArray[i].marks[0],studArray[i].marks[1],studArray[i].marks[2],studArray[i].marks[3],studArray[i].marks[4]);
    }
}
void displayStuds()//declaring second function
{
    struct student temp;
    for(int i=0; i<nStuds-1; i++)
    {
        for(int j=i+1; j<nStuds; j++)
        {
            if(strcmp(studArray[i].firstname,studArray[j].firstname)>0)//sorting first name lexicographically
            {
                temp=studArray[i];//copying all elements of studArray into temp
                studArray[i]=studArray[j];
                studArray[j]=temp;
            }
        }
    }
    printf("\nFirstname     Lastname     Address     mobnumber     Marks1     Marks2     Marks3     Marks4     Marks5");
    for(int i=0; i<nStuds; i++)
    {
        printf("\n%s     %s     %s     %d     %d     %d     %d     %d     %d",studArray[i].firstname,studArray[i].lastname,studArray[i].address,studArray[i].mobnum,studArray[i].marks[0],studArray[i].marks[1],studArray[i].marks[2],studArray[i].marks[3],studArray[i].marks[4]);
    }

}
void searchStuds()//declaring third function
{
    char target[10];
    int n;
    int check=0;//helper variable
    printf("\nProvide name for search:");
    scanf("%s",&target);
    strcpy(target,strupr(target));//converting user entered string to upper case to avoid case sensitivity
    for(int i=0; i<nStuds; i++)//matching the user entered string with structure details
    {
        if(strcmp(target,studArray[i].firstname)==0||strcmp(target,studArray[i].lastname)==0)
        {
            check=1;
            printf("\n%s     %s     %s     %d     %d     %d     %d     %d     %d",studArray[i].firstname,studArray[i].lastname,studArray[i].address,studArray[i].mobnum,studArray[i].marks[0],studArray[i].marks[1],studArray[i].marks[2],studArray[i].marks[3],studArray[i].marks[4]);
        }
    }
    if(check==0)
    {
        printf("\nNo student found");
    }
}
void editStudMarks()//declaring fourth function
{
    int num;
    FILE *fp;
    printf("\nProvide mobile number:");
    scanf("%d",&num);
    fp=fopen(FILENAME,"w");
    if(fp==NULL)
    {
        printf("error in opening file");
        exit(-1);
    }
    for(int i=0; i<nStuds; i++)
    {
        if(studArray[i].mobnum==num)//updating the details of student with user entered mobile number
        {
            printf("\n%s     %s     %s     %d     %d     %d     %d     %d     %d",studArray[i].firstname,studArray[i].lastname,studArray[i].address,studArray[i].mobnum,studArray[i].marks[0],studArray[i].marks[1],studArray[i].marks[2],studArray[i].marks[3],studArray[i].marks[4]);
            printf("\nEnter new marks for each subject:");
            scanf("%d%d%d%d%d",&studArray[i].marks[0],&studArray[i].marks[1],&studArray[i].marks[2],&studArray[i].marks[3],&studArray[i].marks[4]);
            printf("\nUpdated details are:");
            printf("\n%s     %s     %s     %d     %d     %d     %d     %d     %d",studArray[i].firstname,studArray[i].lastname,studArray[i].address,studArray[i].mobnum,studArray[i].marks[0],studArray[i].marks[1],studArray[i].marks[2],studArray[i].marks[3],studArray[i].marks[4]);
        }
    }
    for(int j=0; j<21; j++)//printing the updated details in file
    {
        fprintf(fp,"%s %s\t%s\t%d\t%d\t%d\t%d\t%d\t%d\n",studArray[j].firstname,studArray[j].lastname,studArray[j].address,studArray[j].mobnum,studArray[j].marks[0],studArray[j].marks[1],studArray[j].marks[2],studArray[j].marks[3],studArray[j].marks[4]);
    }
    fclose(fp);
}
void dispMeritList()//declaring fifth function
{
    struct student item;
    struct student temp;
    for(int i=0; i<nStuds; i++)//totaling the marks in five subjects
    {
        studArray[i].sum=studArray[i].marks[0]+studArray[i].marks[1]+studArray[i].marks[2]+studArray[i].marks[3]+studArray[i].marks[4];
    }
    for (int i=1; i<nStuds; i++)//using insertion sort to arrange the students in decreasing order of total marks
    {
        item=studArray[i];
        for (int j=i-1; j>=0; j--)
            if(item.sum>studArray[j].sum)
            {
                studArray[j+1]=studArray[j];
                studArray[j]=item;
            }
            else break;
    }
    for(int i=0; i<nStuds; i++)
    {
        for(int j=i+1; j<nStuds; j++)
        {
            if(studArray[i].sum==studArray[j].sum)//if total marks are same, then sorting students according to last name
            {
                if(strcmp(studArray[i].lastname,studArray[j].lastname)>0)
                {
                    temp=studArray[i];
                    studArray[i]=studArray[j];
                    studArray[j]=temp;
                }
            }
        }
    }
    printf("\nThe merit list is:");
    printf("\nFirstname     Lastname     Address     mobnumber     Marks1     Marks2     Marks3     Marks4     Marks5     Total");
    for(int i=0; i<nStuds; i++)//displaying the merit list
    {
        printf("\n%s     %s     %s     %d     %d     %d     %d     %d     %d     %d",studArray[i].firstname,studArray[i].lastname,studArray[i].address,studArray[i].mobnum,studArray[i].marks[0],studArray[i].marks[1],studArray[i].marks[2],studArray[i].marks[3],studArray[i].marks[4],studArray[i].sum);
    }
}
int main()
{
    int choice;
    int term;
    while(1)//infinite loop
    {
        printf("\n1.Create students");
        printf("\n2.Display students");
        printf("\n3.Search student");
        printf("\n4.Edit student");
        printf("\n5.Display merit list");
        printf("\n6.Exit");
        printf("\nEnter your choice:");
        scanf("%d",&choice);
        switch(choice)//calling function based on user entered choice
        {
        case 1:
            createStuds();
            break;
        case 2:
            displayStuds();
            break;
        case 3:
            searchStuds();
            break;
        case 4:
            editStudMarks();
            break;
        case 5:
            dispMeritList();
            break;
        case 6:
            return 0;
            break;
        }
    }
}
