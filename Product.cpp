#include<iostream>
#include<string>
#include <fstream>
using namespace std;
struct Product
{
	char Code[15];
	string ProductName;
	int Price;
	int Quantity;
};
void input(Product a[], int size);
void show(Product a[], int size);
int main(){
	int size;
	cout<<"Input amount of Product: "<<endl;
	cin>>size;	
	cin.ignore();
	Product a[size];
	input(a,size);
	show(a,size);
	ofstream File("Quantity10.txt");
	File<<"\nProducts with quantity >= 10: "<<endl;
	for(int i;i<size;i++){
		if(a[i].Quantity>=10){
			File<<"\nProduct Number: "<<i;
		    File<<"\nProduct Code: "<<a[i].Code;
		    File<<"\nProduct Name: "<<a[i].ProductName;
		    File<<"\nPrice: "<<a[i].Price;
		    File<<"\nQuantity: "<<a[i].Quantity;
		    File<<"\n------------------";
		}
	}
	File.close();
	string BText;
	ifstream RFile("Quantity10.txt");
	while (getline (RFile, BText)) {
    cout << BText<<endl;
  }

  RFile.close();

	return 0;
}
void input(Product a[], int size)
{
	for(int i;i<size;i++)
	{
		cout<<"\nInput product code: "<<endl;
		cin>>a[i].Code;
		cin.ignore();
		cout<<"Input Product Name: "<<endl;
		getline(cin,a[i].ProductName);
		cin.ignore();
		cout<<"Input Product Price: "<<endl;
		cin>>a[i].Price;
		cin.ignore();
		cout<<"Input Quantity: "<<endl;
		cin>>a[i].Quantity;
		cout<<"\n--------------------------------";
	}
}
void show(Product a[], int size)
{
	for(int i;i<size;i++)
	{
		cout<<"\nProduct Number: "<<i;
		cout<<"\nProduct Code: "<<a[i].Code;
		cout<<"\nProduct Name: "<<a[i].ProductName;
		cout<<"\nPrice: "<<a[i].Price;
		cout<<"\nQuantity: "<<a[i].Quantity;
		cout<<"\n--------------------------------";
	}
}
