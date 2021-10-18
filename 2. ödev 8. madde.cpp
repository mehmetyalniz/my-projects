

#include <stdio.h>
#include <math.h>

#define pi 3.14

int main()

{
float x;

printf("Aciyi derece cinsinden giriniz...: "); scanf("%f",&x);

printf("sin %f = %f \n",x,sin(x*pi/180)); // fonk icindeki ifade girilen aciyi radyana cevirir

printf("cos %f = %f",x,cos(x*pi/180));


return 0;

}
