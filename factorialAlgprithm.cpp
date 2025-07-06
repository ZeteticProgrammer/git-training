#include <iostream>

int factorial(int x){
    if (x == 0) {
        return 1;
    }
    return ( x * factorial(x - 1));
}

int main(){
    std::cout << "Enter a number: ";
    int x = 0;
    std::cin >> x;
    "\n";
    std::cout << "factorial of " << x << " is: " << factorial(x);
    std::cin.get();
    return 0;
}