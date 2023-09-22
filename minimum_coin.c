//Find out minimum coin and coins combination for make amount using unlimited coin

#include<stdio.h>
int minimum_coin(int coin[],int amount,int n)
{
    int table[n+1][amount+1];
    for (int i = 0; i <=n; i++) {
        for (int j = 0; j <=amount; j++) {
            if(i==0)
            {
                table[i][j]=j;
            }
            else if(j<coin[i-1])
            {
                table[i][j]=table[i-1][j];
            }
            else
            {
                table[i][j]=1+table[i][j-coin[i-1]];
                if(table[i][j]>table[i-1][j])
                {
                    table[i][j]=table[i-1][j];
                }
                else
                {
                    table[i][j]=table[i][j];
                }
            }
        }
    }
    int i=n,j=amount; //i means types of coin number j=make amount
    printf("\ncoins combination for minimum coin make amount :");
    while(i>0 && j>0)
    {
        if(table[i][j]==table[i-1][j])
        {
            i--;
        }
        else
        {
            printf("%d\t",coin[i-1]);
            j=j-coin[i-1];
        }
    }
    return table[n][amount];
}
int main()
{
    int n;
    printf("Enter number of coins : ");
    scanf("%d",&n);
    int coin[n];
    printf("\nEnter coins : ");
    for (int i = 0; i < n; i++) {
        scanf("%d",&coin[i]);
    }
    int amount;
    printf("\nEnter amount : ");
    scanf("%d",&amount);
    int y=minimum_coin(coin,amount,n);
    printf("\nMake amount %d minimum coin need : %d\n",amount,y);
}