//Write a program in  C find prime number or not
#include<stdio.h>
int main ()
{
    int n,i,f;
    f=0;
    printf("Enter a nunber ");
    scanf("%d",&n);
    i=2;
    while (i<n)
    {
        if (n%i==0)/* code */
        {
            f=1;
            break;
        }
        i++;
    }
    if(f==1)
    printf("\n not a prime number ");
    else
    printf("\n prime number");    
}
