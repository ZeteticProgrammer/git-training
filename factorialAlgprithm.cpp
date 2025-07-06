#include <iostream>
#include <cstdlib>

int factorial(int x){
    if (x == 0) {
        return 1;
    }
    return ( x * factorial(x - 1));
}

int main(){
    //revert commit test 
    std::cout << "Enter a number: ";
    int x = 0;
    std::cin >> x;
    std::cout << "factorial of " << x << " is: " << factorial(x) << std::endl;
    system("pause");
    return 0;
}