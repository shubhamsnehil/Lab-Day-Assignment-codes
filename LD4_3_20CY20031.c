//Roll No.:20CY20031
//Name:Shubham Snehil
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x[100],n,sn=-1,ln=-1,k=1,i;
    char c;
    printf("\nEnter numbers:");
    scanf("%d%c",&n,&c);
    if(n<0)
        {
            return 0;
        }
    x[0]=n;
    while(c!='\n')
{
        scanf("%d%c",&n,&c);
        if(n<0)
        {
            return 0;
        }
        x[k]=n;
        k++;
}

     for(i=0;i<k;i++)
     {
          if(x[i]>ln)
        {
            ln=x[i];
        }
     }
      for(i=0;i<k;i++)
     {
          if(x[i]>sn&&x[i]<ln)
        {
            sn=x[i];
        }
     }
      printf("\nLargest Number:%d",ln);
        if(sn!=-1)
        {
          printf("\nSecond largest:%d",sn);
    }
    else
        printf("\nSecond Largest:value not yet entered");


return 0;
}
