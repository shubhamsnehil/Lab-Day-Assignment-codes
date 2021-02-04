//Roll No.:20CY20031
//Name:Shubham Snehil
#include <stdio.h>
void check(char string[])
{
    int count=0;
    for(int i=0; string[i]!='\0'; i++)
    {
        if(string[i]=='a'&&string[i+3]=='b')
        {
            count++;
        }
    }
    printf("\n%d",count);
}
char* encode1(char s[])
{
   static char string[20];
    for(int i=0; s[i]!='\0'; i++)
    {
        string[i]=s[i];
        if(string[i]=='y')
        {
            string[i]='a';
        }
        else if(string[i]=='z')
        {
            string[i]='b';
        }
        else
        {
            string[i]+=2;
        }

    }
    return string;
}
char* encode2(char string[])
{
   static char s[40];
   int k=0;
   for(int i=0;string[i]!='\0';i++)
   {
       s[k]='a';
       s[k+1]=string[i];
       k+=2;
   }
   s[k]='\0';
   return s;
}

int main()
{
    char string[20];
    printf("Enter the string:");
    gets(string);
    for(int i=0; string[i]!='\0'; i++)
    {
        if(string[i]>=65&&string[i]<=90)
        {
            string[i]+=32;
        }
    }
    printf("User entered string is:%s\n",string);
    check(string);
    printf("\n%s",encode1(string));
    printf("\n%s",encode2(string));


}
