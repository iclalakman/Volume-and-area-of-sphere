#include <stdio.h>
#include <math.h>
#define pi 3.14
int main() {
   int radius;
   float volume,area;

   printf("Enter radius: ");
   scanf("%d",&radius);

   volume = (4*pi*pow(radius,3))/3;
   area = 4*pi*pow(radius,2);

   printf("Volume is %3.2f\n",volume);
   printf("Area is %3.2f",area);

    return 0;
}
