#include<stdio.h>
#include<conio.h>
long int power(int a,int b)
{
long int s=1;
int i;
if(b==0)
{
 return 0;
}
for(i=1;i<=b;i++)
{
 s=s*a;
}
 return s;
}

int main()
{
long int p;
int c,d;
printf("Enter any two number :\n");
scanf("%d%d",&c,&d);2
p=power(c,d);
printf("\n power is %d",p);
return 0;
}
