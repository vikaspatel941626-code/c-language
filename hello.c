#include<stdio.h>
int main()
{
    int i,1;
    int sum=0;
    printf("enter a positive ineteger");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        sum+=i;
    }
    printf("sum of the first %d number is:%d\n",n,sum);
    return 0;
}