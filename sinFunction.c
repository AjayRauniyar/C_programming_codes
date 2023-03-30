#include<stdio.h>
#include<math.h>
#define PI 3.142
int main(){
int degree,i;
float sum=0,x,num,den,term=0;
printf("input the degree value\n");
scanf("%d",&degree);
i=2;
x=degree*(PI/180);
num=x;
den=1;
do{
term=num/den;
num=-num*x*x;
den=den*i*(i+1);
sum=sum+term;
i=i+2;
}
while(fabs(term)>=0.00001);
printf("the value of sine degree %d is %.3f\n",degree,sum);
printf("the value of sine function of %d is %.3f\n",degree,sin(x));
return 0;
}