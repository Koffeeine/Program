#include<iostream>
#include<cmath>
int main()
{
{
	for(int x=1;x<=20;x++)
		for(int y=1;y<=33;y++)		
			for(int z=3;z<=100;z+=3)		
				if ((x+y+z==100)&&(x*5+y*3+z/3==100)){
				std::cout<<"So trau dung la: "<<x<<" ";
				std::cout<<"So trau nam la: "<<y<<" ";
				std::cout<<"So trau gia la: "<<z<<" ";
			}
}
  return 0;
}
