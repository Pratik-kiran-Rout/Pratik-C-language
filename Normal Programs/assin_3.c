#include<stdio.h>
int main()
{
  int a,b,c;
  scanf("%d%d%d",&a,&b,&c);
  if((a>b) && (b<c))
  {
    printf("%d",b);
  }
  else if((c>b) && (b>a))
  {
    printf("%d",b);
  }
  else if((a>c) && (a<b))
  {
    printf("%d",a);
  }
  else if((a>b) && (a<c))
  {
    printf("%d",a);
  }
  else
  {
    printf("%d",c);
  }
  return 0;
}