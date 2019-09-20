#include<stdio.h>
#include<math.h>
int main()
{

	float surface,r,h,VolCan,CansAmount;
  VolCan=2;
	printf("enter radius: ");//showing message
	scanf("%f",&r);//scanf use for asking value of a variable
	printf("enter height: ");
	scanf("%f",&h);
	surface =(22*r*h*2+2*22*r*r)/7;//calculating outer surface and 22/7=Pi
  printf("surface: %f\n",surface);
  CansAmount = surface/VolCan;
  printf("Number of can that we need for painting is : %f\n",CansAmount);

	return 0;
}
