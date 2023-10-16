#include <iostream>

int main() {
    int n;
    const int So_le_trong_mot_dong = 15; 
	// Change this as required
    int count = 0;
    
  std::cout << "Enter n= ";
   std::cin >> n;
    
    for (int i = 1; i <= n; i += 2) {
        std::cout << i << " ";
        count++;
        if (count == So_le_trong_mot_dong) {
            std::cout << std::endl;
            count = 0;
        }
    }
    
    return 0;
}
