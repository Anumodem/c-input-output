#include <stdio.h>
#include <math.h>
int main()
{    int U,V;
    float pair;
    scanf("%d %d",&U,&V);
//if (U%2==0 ||V%2==0{
    pair=((U*V)/(float)2);//}
//else{ pair=((U*V)+1)/2 }
//printf("%.4lf\n",pair);
printf("%.0lf",ceil(pair));
	return 0;}
