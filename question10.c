#include <stdio.h>
int main()
{
    int alvqntoffood,messcnt,dividedqnt,remfood;
    int a,b;
    scanf("%d%d%d%d",&alvqntoffood,&messcnt,&dividedqnt,&remfood);
    a=alvqntoffood/messcnt;
    b=alvqntoffood%messcnt;
    printf("%d %d",a,b);
    return 0;
    
}
