#include <iostream>

int main() {
    int a = 10, b = 20;
    
    std::swap(a, b);
    
    std::cout << "a: " << a << ", b: " << b; // Output: a: 20, b: 10
    return 0;
}
