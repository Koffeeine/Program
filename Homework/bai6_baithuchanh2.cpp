#include<iostream>
using namespace std;

int main() {
    int a,b,c,d,max;
    cout<<"Nhap a b c d:";
   cin>>a>>b>>c>>d;
    max = a;
    if(b > max)
    {
        max = b;
    }
    if(c > max)
    {
        max = c;
    }
    if(d > max)
    {
        max = d;
    }
    cout<<"So lon nhat la:"<<max;
    return 0;
}
