#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n,i;
   printf("Enter the number of elements in te first array \n");
   scanf("%d",&n);
   int a[n];
   printf("Enter %d elements",a[n]);
   for(i=0;i<n;i++)
   {
   scanf("%d\n",&a[i]);
   }

    return 0;
}
