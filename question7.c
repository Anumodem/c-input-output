#include <stdio.h>
#include <math.h>
int main()
{
    int unitconsumed,costperunit,totalbillamount;
    scanf("%d\n%d",&unitconsumed,&costperunit);
    totalbillamount=pow(unitconsumed,costperunit);
    printf("%d",totalbillamount);
    return 0;
}
