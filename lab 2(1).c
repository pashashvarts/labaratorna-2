#include <stdio.h>//pidkluchenya bibliotek
#include<locale.h>
#include<math.h>
int main (void) {
int a;//perche chiclo
int c;//druge chiclo
int d;//dobutok
float o;//octacha vid dilenya
int s;//cila chactuna dilenya
printf("\n vkachitb perche chiclo a=");
scanf("%d",&a);
printf("\n vkachitb druge chiclo c=");
scanf("%d",&c);
d = a*c;
o = c%a;
s = c/a;
printf("\t d \t o \t s \n");
printf("\t%d\t%f\t%d\n", d,o,s);
return 0;
}
