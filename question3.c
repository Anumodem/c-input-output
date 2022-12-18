#include <stdio.h>
int main()
{
  int length,width,height,surfacearea;
  scanf("%d\n%d\n%d\n",&length,&width,&height);
  surfacearea= 2*(length*width+width*height+height*length);
  printf("%d",surfacearea);
  
  return 0;
}
