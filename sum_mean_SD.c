#include<stdio.h>
#include<math.h>
#include<conio.h>5
int main(){
    float a[10],*ptr,mean,std,sum=0,sumStd=0;
    int n,i;
    printf("Enter the no of the elements \n");
    scanf("%d",&n);
    printf("Enter the array element \n");
    for(i=0;i<n;i++){
        scanf("%f",&a[i]);
    }
    ptr=a;
    for(i=0;i<n;i++){
        sum=sum+*ptr;
        ptr++;
    }
    mean=sum/n;
    ptr=a;
    for(i=0;i<n;i++)
    {
        sumStd=sumStd+pow((*ptr-mean),2);
        ptr++;
    
    }
    std=sqrt(sumStd/n);
    printf("Sum =%.3f \t ",sum );
    printf("Mean=%.3f \t",mean);
    printf("Standard deviation=%.3f",std);
    return 0;

}
