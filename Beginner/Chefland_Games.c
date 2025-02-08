#include<stdio.h>
int main()
{
    int n,T1,T2,T3,T4;
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        scanf("%d %d %d %d",&T1,&T2,&T3,&T4);
        if(T1==1|| T2==1|| T3==1|| T4==1)
        {
            printf("OUT\n");
        }
        else 
        {
            printf("IN\n");
        }
    }
}