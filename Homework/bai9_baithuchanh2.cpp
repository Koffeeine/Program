#include<iostream>
using namespace std;

int main() {
    float x,y;
	char p;
	printf("Nhap P = ");	
	scanf("%c",&p);
	
	printf("Nhap x, y");	
	scanf("%f%f",&x,&y);
	switch(p)
	{
		case '+':
			printf("x + y = %2.2f",(x + y));
			break;
		case '-':
			printf("x - y = %2.2f",x - y);
			break;
		case '*':
			printf("x * y = %2.2f",x * y);
			break;
		case '/':
			if(y!=0) printf("x / y = %2.2f",x / y);
			else printf("Khong chia duoc");
			break;					
		default:
			printf("Khong phai phep toan"); 			

    }
    return 0;
}
