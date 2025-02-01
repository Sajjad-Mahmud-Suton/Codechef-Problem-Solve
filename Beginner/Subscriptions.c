#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
    int N,X;

    for(int i=1; i<=T; i++)
    {
        scanf("%d %d",&N, &X);
        if(N<=6)
        printf("%d\n",X);
        else
        {
            int a = N/6;
            if(N%6 != 0)
            printf("%d\n",(a+1)*X);
            else
            printf("%d\n",a*X);
            
        }
    }
}