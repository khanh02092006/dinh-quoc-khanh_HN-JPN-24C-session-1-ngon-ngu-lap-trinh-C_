#include<stdio.h>
#define PI 3.14
int main(){
	float r;
	float chuvi,dientich;
	printf ("nhap gia tri r");
	scanf ("%f",&r);
	chuvi=2*PI*r;
	dientich=PI*r*r;
	printf("chu vi hinh tron là :%.2f\n",chuvi);
	printf("dien tich hinh tron là :%.2f\n",dientich);
	return 0;
	}
