#include<iostream>
#include <cmath>
int main()
{
{
int thang, nam;
	printf("Nhap thang: ");
	scanf("%d",&thang);
	
	if(thang<1||thang>12) 
	{
		printf("Yeu cau nhap lai");
		return 0;
	}
	printf("Nhap nam: ");
	scanf("%d",&nam);
	if(thang==2)
	{
		if(nam%4==0)
			printf("Thang 2 co 29 ngay");
		else
			printf("Thang 2 co 28 ngay");
	}
	else if(thang==4||thang==6||thang==9||thang==11)
		printf("Thang %d co 30 ngay",thang);
	else
		printf("Thang %d co 31 ngay",thang);

}	

  return 0;
}
