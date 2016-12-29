#include <stdio.h>
#include <conio.h>
int main()
{
    int  n,i,small=9999,sec_small=1111,a[10];
    printf("enter the value of n:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]<small)
        {
            small=a[i];
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]!=small)
        {
            if(a[i]<sec_small)
            {
                sec_small=a[i];
            }}


    }

        printf("%d",small);
        printf("%d",sec_small);

    return 0;
}
