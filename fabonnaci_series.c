#include<stdio.h>
#include<conio.h>
int main()
{
int i,n,n1=0,n2=1,n3;
printf("Enter the number:");
scanf("%d",&n);
printf("The fibonnaci series :\t");
printf("%d \t",n2);
for(i=3;i<=n;i++)
{
n3=n1+n2;
printf("%d \t",n3);
n1=n2;
n2=n3;
}
return 0;
}

