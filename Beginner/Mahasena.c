
#include<stdio.h>
int main()
{

    int T,odd=0,even=0;
    scanf("%d",&T);
    for (int i=1; i<=T; i++)
        {
        int X;
        scanf("%d", &X);

        if(X%2 == 0)
            even++;
        else
            odd++;
    }
     if (even>odd)
        printf("READY FOR BATTLE\n");
    else
        printf("NOT READY\n");

}

