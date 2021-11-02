#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[4][4];
    printf("Welcome to TIC-TAC-TOE\n\n");
    printf("Enter 1 for 'X' and 0 for 'o'\n");
    int i,j,x=0,o=0;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    //checking Column wise...
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;i++)
        {
            if(a[i][j]==1)
            x=1;
            if(a[i][j]==0)
            o=1;
        }
    }
    //checking row wise...
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;i++)
        {
            if(a[j][i]==1)
            x=1;
            if(a[j][i]==0)
            o=1;
        }
    }
    //checking major diaognal wise...
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            if(i==j)
            {
                if(a[i][j]==1)
                x=1;
                if(a[i][j]==0)
                o=1;
            }
        }
    }
    //checking minor diaognal wise...
    for(i=3;i>0;i--)
    {
        for(j=3;j>0;j--)
        {
            if(i==j)
            {
                if(a[i][j]==1)
                x=1;
                if(a[i][j]==0)
                o=1;
            }
        }
    }
    if(x==1)
    printf("Player1 X wins!\n");
    else
    printf("Player1 X looses!\n");
    if(o==1)
    printf("Player2 o wins!\n");
    else
    printf("Player2 o looses!\n");
    return 0;
}
