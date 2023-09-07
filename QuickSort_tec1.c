// Here pivot zero index and i pointer point zero index
// j pointer point last that means n-1 index.

#include<stdio.h>
void array(int ash[],int n);
void show(int ash[],int n);
int quick_sort(int ash[],int low,int high);
int partition(int ash[],int a,int b);
int main()
{
    int n;
    printf("Enter array size : ");
    scanf("%d",&n);
    int ash[n];
    array(ash,n);
    quick_sort(ash,0,n-1);
    show(ash,n);
}
void swap(int ash[],int a,int b)
{
    int temp=ash[a];
    ash[a]=ash[b];
    ash[b]=temp;
}

void array(int ash[],int n)
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
int quick_sort(int ash[],int low,int high)
{
    int mi;
    if(low<high)
    {
        mi=partition(ash,low,high);
        quick_sort(ash,low,mi-1);
        quick_sort(ash,mi+1,high);
    }
    return mi;
}
int partition(int ash[],int a,int b)
{
    int pivot=ash[a];
    int i=a;
    int j=b;
    while(i<=j)
    {
        while(i <= j && ash[i] <= pivot)
        {
            i++;
        }
        while(i <= j && ash[j] > pivot)
        {
            j--;
        }
        if(i<j)
        {
            swap(ash,i,j);
        }
    }
    swap(ash,a,j);
    return j;
}
