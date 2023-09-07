//Selection Sort

#include <stdio.h>
void array(int ash[],int n)
{
  for(int i=0;i<n;i++)
    {
      scanf("%d",&ash[i]);
    }
}
void sort(int ash[],int n)
{
  for(int i=0;i<n-1;i++)
    {
      int min=i;
      for(int j=i+1;j<n;j++)
        {
          if(ash[min]>ash[j])
          {
            min=j;
          }
        }
      int temp=ash[i];
      ash[i]=ash[min];
      ash[min]=temp;
    }
}
void sort2(int ash[],int n)
{
  for(int i=0;i<n-1;i++)
    {
      int max=i;
      for(int j=i+1;j<n;j++)
        {
          if(ash[max]<ash[j])
          {
            max=j;
          }
        }
      int temp=ash[i];
      ash[i]=ash[max];
      ash[max]=temp;
    }
}

void show(int ash[],int n)
{
  for(int a=0;a<n;a++)
    {
      printf("%d\t",ash[a]);
    }
}
int main() {
 int n;
  printf("Enter array size : ");
  scanf("%d",&n);
  int ash[n];
  array(ash,n);
  sort(ash,n);
  printf("After Ascending : \n");
  show(ash,n);
  sort2(ash,n);
  printf("\nAfter Descending : \n");
  show(ash,n);
}
