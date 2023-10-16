#include<iostream>
#include <cmath>
int main()
{
{
	for(int x=1;x<=20;x++)
		for(int y=1;y<=33;y++)		
			for(int z=3;z<=100;z+=3)		
				if ((x+y+z==100)&&(x*5+y*3+z/3==100))				
					printf("x = %10d, y = %10d, z = %10d \n",x,y,z);			
}
  return 0;
}
