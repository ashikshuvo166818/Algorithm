//
// Created by ashik on 9/7/2023.
//Merge Sort
#include<stdio.h>
void input(int ash[],int n)
{
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ash[i]);
    }
}
void show(int ash[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d\t",ash[i]);
    }
}
void conquer(int ash[],int low,int mid,int high)
{
    int i=low,j=mid+1,k=0;
    int newarr[high-low+1];

    while(i<=mid && j<=high)
    {
        if(ash[i]<=ash[j])
        {
            newarr[k]=ash[i];
            i++,k++;
        }
        else if(ash[i]>=ash[j])
        {
            newarr[k]=ash[j];
            j++,k++;
        }
    }
    if(i>mid)
    {
        while(j<=high)
        {

            newarr[k]=ash[j];
            j++,k++;
        }
    }
    else if(j>high)
    {
        while(i<=mid)
        {

            newarr[k]=ash[i];
            i++,k++;
        }
    }
    for(int u=low,h=0;u<=high;u++,h++)
    {
        ash[u]=newarr[h];

    }
}
void divide(int ash[],int low,int high)
{
    if(low<high)
    {
        int mid=low+(high-low)/2;
        divide(ash,low,mid);
        divide(ash,mid+1,high);
        conquer(ash,low,mid,high);
    }
}
int main()
{
    int n;
    printf("Enter array size : ");
    scanf("%d",&n);
    printf("Enter numbers : ");
    int ash[n];
    input(ash,n);
    printf("After Ascending : ");
    divide(ash,0,n-1);
    show(ash,n);
}
