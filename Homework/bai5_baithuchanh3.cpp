#include<iostream>
#include <cmath>
int main()
{
	{
	int cho,ga;
	for(cho=1;cho<25;cho++)
    	for(ga=1;ga<36;ga++)
        	if((ga+cho==36)&&(ga*2+cho*4==100))
			printf("Ga = %d, Cho = %d \n",ga, cho);

}

  return 0;
}
