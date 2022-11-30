#include <stdio.h>
int main()
{
  int a,b,sum=0;
  printf("enter the numbers a and b\n");
  scanf("%d%d",&a,&b);


  while(a<=b)
  {
    if(a%2==0)
    {
    sum=sum+a;
    }
    a++;
  }
   printf("%d is the sum of all even natural numbers numbers",sum);

return 0;
}