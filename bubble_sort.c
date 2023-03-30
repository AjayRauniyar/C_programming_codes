//	Write a program to sort ‘n’ elements of an array using bubble sort technique 
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[100], n, i, j, swap; 
    printf("\nEnter number of elements\n");
    scanf("%d", &n); 
    printf("\n Enter %d Numbers:", n); 
    for(i = 1; i <= n; i++)
        scanf("%d", &a[i]); 
    for(i = 1 ; i < n ; i++)
    {
        for(j = 1 ; j <= n-i; j++)
        {
            if(a[j] > a[j+1]) 
            {
                swap=a[j];
                a[j]=a[j+1];
                a[j+1]=swap;
            }
        }
    } 
    printf("Sorted Array:\n"); 
    for(i = 1; i <= n; i++)
        printf("\t%d", a[i]);
    return 0;
}
