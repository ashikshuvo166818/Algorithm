//Bubble sort for ascending and descending order
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
  for(int i=0;i<n-1;i++)  //n-1 because we know that bubble sort total need
                         //pass n-1 if total number n. that means if number
                        // 5 then need pass 4; passes are 0,1,2,3 total 4
                       // here condition i<n-1 and i<=n-2 both are right
    {
      for(int j=0;j<n-1;j++) // here j<n-1 and j<=n-2 boths are right
                            //if n=4,then it wil be max n=2 beacause
                           // ash[j=2]>ash[j+1=3] after n is not possible
                          //because if n=3 ash[j] then ash[j+1=4] that
                         //element is not on the array
        {
          if(ash[j]>ash[j+1])
          {
            int temp=ash[j];
            ash[j]=ash[j+1];
            ash[j+1]=temp;
          }
        }
    }
}
void sort2(int ash[],int n)
{
  for(int i=0;i<n-1;i++)
    {
      for(int j=0;j<n-1;j++)
        {
          if(ash[j]<ash[j+1])
          {
            int temp=ash[j];
            ash[j]=ash[j+1];
            ash[j+1]=temp;
          }
        }
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
