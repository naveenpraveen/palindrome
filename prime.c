#include <stdio.h>
int main()
{
    int n,count=0,i;
    scanf("%d",&n);
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        count++;
    }
    if(count>0)
    printf("no");
    else
    printf("yes");
    return 0;
}
