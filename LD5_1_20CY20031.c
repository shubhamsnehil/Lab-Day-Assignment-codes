//Roll no.:20CY20031
//Name:Shubham Snehil
#include <stdio.h>
int main()
{
    char noun[20];//for reading noun
    int count;//for counting number of letters for extracting last and second last character
    printf("\nEnter the noun:");
    scanf("%s",&noun);
    printf("\nThe entered noun is:%s",noun);
    for(count=0;noun[count]!='\0';count++);//for counting
    if(noun[count-1]=='y')
    {
        noun[count-1]='i';//for adding 'ies' to last of the string
        noun[count]='e';
        noun[count+1]='s';
        noun[count+2]='\0';//for terminating the string
    }
    else if((noun[count-1]=='s')||(noun[count-1]=='h'&&(noun[count-2]=='s'||noun[count-2]=='c')))//for checking 's','sh','ch' in string
    {
      noun[count]='e';//same logic as previous case (without replacing any last character)
      noun[count+1]='s';
      noun[count+2]='\0';
    }
    else
    {
       noun[count]='s';
       noun[count+1]='\0';
    }
      printf("\nThe plural noun is:%s",noun);
      return 0;
}
