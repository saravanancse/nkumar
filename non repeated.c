#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,n,ch[10],f;
    printf("enter the value of n:");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        scanf("%d",&ch[i]);
    }
for(i=1;i<n;i++)
{
    f=1;
    for(j=1;j<n;j++)
    {
        if((ch[i]==ch[j])&&(i!=j))
        {
            f=0;
        }
    }
    if(f)
    {
        printf("%d",ch[i]);
    }
}
return 0;
}
