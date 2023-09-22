#include<stdio.h>
int total_number_of_ways(int coin[],int amount,int n)
{
    int table[n+1][amount+1]; //table[a][b] a=row,b=column here add 1 with row and column beacause here has 0 coin and 0 amount
    for (int i = 0; i <=n; i++) {
        for (int j = 0; j <=amount ; j++) {
            if(j==0)
            {
                table[i][j]=1;
            }
            else if(i==0)
            {
                table[i][j]=0;
            }
            else if(j<coin[i-1]) //here coin[i-1] because 0 coin is add there for coin number n+1  but origanl coin n
                                //that's why we write coin[i-1]
            {
                table[i][j]=table[i-1][j];
            }
            else
            {
                table[i][j]=table[i-1][j]+table[i][j-coin[i-1]];
            }
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
    printf("\nEnter the coins : ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&coin[i]);
    }
    int amount;
    printf("\nEnter the amount : ");
    scanf("%d",&amount);
    int y=total_number_of_ways(coin,amount,n);
    printf("Total number of ways to match %d amount is %d\n",amount,y);
}