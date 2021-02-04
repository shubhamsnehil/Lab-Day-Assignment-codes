#include <stdio.h>
int main()
{
    int counts=0,countt=0,check=0,j;
    char s[15],t[15];
    printf("Enter a string:");
    gets(s);
    printf("Enter doosra string:");
    gets(t);
    for(counts=0;s[counts]!='\0';counts++);
     for(countt=0;t[countt]!='\0';countt++);
    for(int i=0;s[i]!='\0';i++)
    {
        for(j=0;t[j]!='\0';j++)
        {
            if(s[i]==t[j])
                break;
        }
        if(j>=countt)
        {
            check=1;
            break;
        }
    }
    if(check==0)
        printf("\nIT is ANAGRAM");
    else
        printf("\nIT is not ANAGRAM");
}
