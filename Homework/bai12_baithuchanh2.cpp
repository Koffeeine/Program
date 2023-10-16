#include<iostream>
using namespace std;

int main() {
    int hoursWorked;
    double hourlySalary, totalSalary;
    
    cout << "Nhap so gio da lam: ";
    cin >> hoursWorked;
    
    cout << "Nhap luong trong 1 gio: ";
    cin >> hourlySalary;
    
    if (hoursWorked > 40) {
        int overtimeHours = hoursWorked - 40;
        double overtimePay = overtimeHours * hourlySalary * 1.5;
        totalSalary = (40 * hourlySalary) + overtimePay;
    } else {
        totalSalary = hoursWorked * hourlySalary;
    }
    
    cout << "Tong luong: " << totalSalary << endl;
    
    return 0;
}

