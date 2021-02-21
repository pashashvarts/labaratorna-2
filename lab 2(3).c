#include <stdio.h>//pidkluchenya bibliotek
#include<locale.h>
#include<math.h>
int main (void) {
int b;
int y;
int x;
int z;
printf("\n vkashitb y =");
scanf("%d",&y);
printf("\n vkashitb x =");
scanf("%d",&x);
printf("\n vkashitb z =");
scanf("%d",&z);
b = (1+cos(y-2))/((pow(x,4)/2)+pow(sin(z),2));
printf("\t b\n");
printf("\t%d\n",b);
return 0;
}
