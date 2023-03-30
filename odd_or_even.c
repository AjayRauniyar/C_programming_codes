#include<stdio.h>
#include<conio.h>
int main()
{
int n,r;
printf("Enter a number:");
scanf("%d",&n);
r=n%2;
if(r==0)
{
printf("%d is Even number. \nThank You ",n);
}
else
{
printf("%d is Odd number.\nThank You",n);
}
return 0;
}
