#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n,i,j,v,arr[4];
    scanf("%d", &n);
    for(i=1;i<2*n;++i)
    {
        for(j=1;j<2*n;++j)
        {
            int a =(i<j ?i:j);
            int b  = ((2*n-i)<a ?(n*2-i):a) ;
            v = ((2*n-j)<b ?(n*2-j):b );
            printf("%d ",(n-v+1));
        }printf("\n");
    }
  	// Complete the code to print the pattern.
    return 0;
}
