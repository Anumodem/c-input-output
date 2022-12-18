#include <stdio.h>
int main()
{ int n;
    int totalsquare;
    scanf("%d",&n);
    totalsquare=(n*(n+1)/2)*(2*n+1)/3;
    printf("%d",totalsquare);
	return 0;
}
