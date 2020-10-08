#include<stdio.h>

int main()
{
  int a,b,c,m;
  int max(int x,int y,int z);
  scanf("%d,%d,%d",&a,&b,&c);
  m=max(a,b,c);
  printf("max=%d\n",m);
  return 0;
}
int max(int x,int y,int z)
{
  int m;
  if(x>y,x>z)m=x;
  else if(y>x,y>z)m=y;
  else m=z;
  return(m);
}
