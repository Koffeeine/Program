#include<iostream>
#include <cmath>
int main()
{
	{
	int n;
	printf("Nhap N = ");
	scanf("%d",&n);

	for(int i=2;i<=n;i++)
	{
		int kt=1;
		for(int j=2;j<=sqrt(i);j++)
			if(i%j==0)
			{
				kt=0;
				break;
			}
		if(kt)	
			printf("%d ",i);
	}	

}

  return 0;
}
