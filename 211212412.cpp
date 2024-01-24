#include <iostream>
using namespace std;
int main()
{
	int n;
	do
	{
		cout<<"Nhap so phan tu n: "<<endl;
	    cin>>n;   
	}
	while(1>n or n>100);
	int a[n];
	for(int i=0;i<n;i++){
		cout<<"Nhap phan tu a"<<i<<endl;
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		cout<<"Phan tu a "<<i<<" la: "<<a[i]<<endl;
	}
return 0;
}
	
