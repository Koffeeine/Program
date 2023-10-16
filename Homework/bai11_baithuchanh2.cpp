#include<iostream>
#include <cmath>
int main()
{
{
float toan,ly, hoa,tong;
	printf("Nhap diem Toan, ly hoa:");
	scanf("%f %f %f",&toan,&ly,&hoa);
	tong = toan + ly + hoa;
	if ((tong>=15) && (toan>=4) && (ly>=4) && (hoa>=4))
	{
		printf("\nThi dau");
		if(toan>=5 && ly>=5 && hoa>=5)
			printf("\nHoc deu cac mon");
		else	
			printf("\nHoc chua deu cac mon");
	}else
		printf("\nThi chua dat");	


}	

  return 0;
}
