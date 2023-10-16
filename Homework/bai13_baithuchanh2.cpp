#include<iostream>
#include <cmath>
int main()
{
{
	int a, b, c, cv;
	float p, dt;
	printf("Nhap do dai ba canh a, b, c: ");
	scanf("%d%d%d",&a,&b,&c);
	if((a+b>c)&&(a+c>b)&&(c+b>a))
	{
		p=(a+b+c)/2;
		cv=a+b+c;
		dt=sqrt(p*(p-a)*(p-b)*(p-c));	
		printf("Chu vi: %5d, Dien tich: %5.2f",cv,dt);
}
}	

  return 0;
}
