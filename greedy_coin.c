//
// Created by ashik on 9/23/2023.
//
#include<stdio.h>
void greedy_coin(int coin[],int amount,int n)
{
    int count=0;
    int i=0;
    while(n>0)
    {
        while(amount>=coin[i])
        {
            count++;
            amount=amount-coin[i];
        }
        i++;
        n--;
    }
    printf("Minimum COin need : %d",count);
}
void sorting(int coin[],int n)
{
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-1; ++j) {
            if(coin[j]<coin[j+1])
            {
                int temp=coin[j];
                coin[j]=coin[j+1];
                coin[j+1]=temp;
            }
        }
    }
}
int main()
{
    int n;
    printf("Enter the number of coin : ");
    scanf("%d",&n);
    int coin[n];
    printf("Enter coins : ");
    for (int i = 0; i < n; ++i) {
        scanf("%d",&coin[i]);
    }
   sorting(coin,n);
    int amount;
    printf("Enter amount which you want to match using coin :");
    scanf("%d",&amount);
    greedy_coin(coin,amount,n);
}
