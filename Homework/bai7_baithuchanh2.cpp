#include<iostream>
#include <cmath>
int main()
{
{
int g,h,m,s;
	printf("Nhap so giay:"); 
	scanf("%d",&g);
	s=g%60;	g=g/60;
	m=g%60;	g=g/60; 
	h=g;
	if(h<10)
		printf("0%d:",h);
	else
		printf("%d:",h);
	if(m<10)
		printf("0%d:",m);
	else
		printf("%d:",m);
	if(s<10)
		printf("0%d:",s);
	else
		printf("0%d:",s);
}


  return 0;
}
