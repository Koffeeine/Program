#include<iostream>
#include<cmath>
using namespace std;

int main() {
    float a,b,c;
    cout<<"Nhap 3 canh cua tam giac: "<<endl;
    cin>>a>>b>>c;

    if (pow(a, 2) + pow(b, 2) == pow(c, 2) || pow(a, 2) + pow(c, 2) == pow(b, 2) || pow(b, 2) + pow(c, 2) == pow(a, 2));
      {  cout<<"Tam giac vuong"<<endl;
       } else{cout<<"Tam giac khong vuong"<<endl;
        }
    return 0;
}
