// pivot is the last element


#include<stdio.h>
void array(int ash[],int n)
{
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ash[i]);
    }
}
void swap(int ash[],int a,int b)
{
    int temp=ash[a];
    ash[a]=ash[b];
    ash[b]=temp;
}
int partition(int ash[],int low,int high)
{
    int pivot=ash[high];
    int i=low-1;
    int j=low;
    while(j<high)
    {
        if(ash[j]<pivot)
        {
            i++;
            swap(ash,i,j);
        }
        j++;
    }
    swap(ash,i+1,high);
    return i+1;
}
void quicksort(int ash[],int low,int high)
{
    if(low<high)
    {
        int position=partition(ash,low,high);
        quicksort(ash,low,position-1);
        quicksort(ash,position+1,high);
    }
}
void show(int ash[],int n)
{
    for(int t=0;t<n;t++)
    {
        printf("%d\t",ash[t]);
    }
}
int main()
{
    int n;
    printf("Enter array size : ");
    scanf("%d",&n);
    int ash[n];
    array(ash,n);
    printf("Before ascending : ");
    show(ash,n);
    quicksort(ash,0,n-1);
    printf("\nAfter ascending : ");
    show(ash,n);
}
