//	Write a program to search for a given key element in an array of ‘n’ elements using binary search technique 

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[50],i,n,low, mid, high,key;
    printf("\n enter count of total number of elements to an array");
    scanf("%d",&n);
    printf("\n enter a sorted list");
    for(i=1;i<=n;i++)
        scanf("%d",&a[i]);
   printf("\n enter key element to search");
    scanf("%d",&key);
    low=0;
    high=n-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(a[mid]==key)
        {   printf("\n key found at %d location",mid); exit(0);
        }
        if(key>a[mid])
            low=mid+1;
        if(key<a[mid])
            high=mid-1;
    }
    printf("\n key element not found");
    return 0;
}

