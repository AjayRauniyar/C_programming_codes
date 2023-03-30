/*      1 
      1 2 1
    1 2 3 2 1
  1 2 3 4 3 2 1
1 2 3 4 5 4 3 2 1
*/

#include <stdio.h>
int main(){
   
   int i,j, k,l,n;
   printf("Enter the number of rows of pattern :");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
    for(k=1;k<=n-i;k++)
      printf("  ");
    for(j=1;j<=i;j++)
     printf("%d ",j);
    for(l=i-1;l>=1;l--)
     printf("%d ",l);
    printf("\n"); 
   }

   return 0;
}
