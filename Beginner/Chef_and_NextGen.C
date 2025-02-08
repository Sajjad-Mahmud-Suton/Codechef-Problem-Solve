#include<stdio.h>
int main()
{
    int n,A,B,X,Y;
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        scanf("%d %d %d %d",&A,&B,&X,&Y);
        if(X*Y >= A*B)        
        {
            printf("YES\n");
        }
        else 
        {
            printf("NO\n");
        }
    }
}