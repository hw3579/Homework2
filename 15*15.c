#include<stdio.h>

 int main()

{

 int x,y,z,a,b;

 for(x=1;x<=9;x++)

 {a=5+10*x;

  for(y=1;y<=x;y++) 

    {b=5+10*y;

   z=a*b;

   printf("%d*%d=%d  ",a,b,z);

  }

  printf("\n");

 }

}
