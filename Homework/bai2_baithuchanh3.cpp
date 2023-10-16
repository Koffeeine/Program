#include<iostream>
using namespace std;

int main()
{
    int n, sum=0;

    cout<<"Nhap so: ";
    cin>>n;

    for(int i=1; i<=n; i+=2)   // loop through odd numbers less than or equal to n
    {
        sum += i;  // add the current number to the sum
    }

    cout<<"Tong cac so le nho hon hay bang n: "<<n<<" is: "<<sum<<endl;

    return 0;
}

