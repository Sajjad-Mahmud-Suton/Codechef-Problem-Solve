#include<stdio.h>
int main()
{
    int n,X,Y;
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        scanf("%d %d",&X,&Y);
        if(2*Y>=X)
        {
            printf("YES\n");
        }
        else 
        {
            printf("NO\n");
        }
    }
}