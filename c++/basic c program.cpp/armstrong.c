#include<stdio.h>
int main()
{
    int n,r,sum=0,temp;
    printf("Enter the number=");
    scanf("%d",&n);
    temp=n;
    while(
    {
        r=n%10;
        sum=sum+(r*r*r);
        n=n/10;

    }
    if(temp==sum)
        printf("armstrong number");
    else
        printf("not armstrong number");
        return 0;


}
