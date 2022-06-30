
#include<stdio.h>

int main()
{
 int num,count=0,a,b;
 printf("Insira um número ");
 scanf("%d",&num);
  for( int a=num-1;a>=1;a--)
  {
   for(int b=2;b<a;b++)
      {
       if(a%b==0)
       count++;
       }
       if(count==0)
       {
      if(a==1)
       {
       printf("Não tem primo anterior");
       break;
     }
      printf(" O numero primo anterior é %d\n",a);
       break;
       }
       count=0;
}
return 0;
}