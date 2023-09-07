#include<stdio.h>
int main()
{
  int a,b,c,d=0;
  printf("Enter array size : ");
  scanf("%d",&a);
  int ash[a];
  printf("Enter array elements  : ");
  for(b=0;b<a;b++)
    {
      scanf("%d",&ash[b]);
    }
  printf("Enter the searching number  : ");
  scanf("%d",&c);
  for(b=0;b<a;b++)
    {
      if(c==ash[b])
      {
        d=b+1;
        break;
      }
    }
    if(d==0)
    {
      printf("%d's not found\n",c);
    }
  else
    {
      printf("%d's position is %d\n",c,d);
    }
  return 0;
}
