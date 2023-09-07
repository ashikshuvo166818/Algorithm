//maximization
//thief want to profit highest
//thief can get a product one time
//thief can get product untill the bag is full
#include<stdio.h>
void input(double a[],int n)
{
    for(int i=0;i<n;i++)
    {
        scanf("%lf",&a[i]);
    }
}
void sort(double a[],double b[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1;j++) //n=5 hola n-1 porjonto colba ditiyotai n-2 porjonto colva
                                // 0,1,2,3 porjonto colla j+1=3+1 shas porjoonto sorting hoba
        {
            if(a[j]<a[j+1])
            {
                double temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                temp=b[j];
                b[j]=b[j+1];
                b[j+1]=temp;
            }

        }
    }
}

void show(double a[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%lf\t",a[i]);
    }
}
double knapsack(double a[],double b[],double c,int n)
{
    double total=0.0;
    int i=0;
    while(n>0)
    {
        if(c>=a[i])
        {
            total=total+a[i]*b[i];
            c=c-a[i];
        }
        else
        {
            total=total+(c*b[i]);
            break;
        }
        n--;
        i++;

    }
    return total;
}
int main()
{
    int n;
    printf("Enter elements size :");
    scanf("%d",&n);
    double weight[n],profit[n];
    printf("Enter wights list : ");
    input(weight,n);
    printf("Enter profits list : ");
    input(profit,n);
    double net_weight;
    printf("Enter bag's capability : ");
    scanf("%lf",&net_weight);
    double profitPerKg[n];
    for(int i=0;i<n;i++)
    {
        profitPerKg[i]=profit[i]/weight[i];
    }
    sort(profitPerKg,weight,n);
   double total= knapsack(weight,profitPerKg,net_weight,n);
    printf("%lf\t",total);
}