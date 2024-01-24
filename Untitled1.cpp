#include <iostream>
using namespace std;
void tb(int tong,double avg,int a[],int n);
int main(){
	int n;
	double avg=0;
	int tong=0,kt=0;
	cout<<"nhap so luong so nguyen to"<<endl;
	cin>>n;
	int a[n];
	for (int i=0; i<n; i++){
		do{
			kt=0;
			cout<<"nhap so a"<<i<<endl;
			cin>>a[i];
			for (int j=2;j<=a[i]/2;j++){
				if(a[i]%j==0){
					kt=1;
				}	
			}
			if (kt==1){cout<<"vui long nhap lai so a"<<i<<endl;
			}
		}while(kt==1);	
	}
	tb(tong,avg,a,n);
}
void tb(int tong,double avg,int a[],int n){
	for (int i=0;i<n;i++){
		tong=tong+a[i];
	}
	avg=tong/n;
	cout<<"so trung binh la:"<<avg<<endl;
}
