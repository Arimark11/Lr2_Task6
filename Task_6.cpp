#include <iostream>
#include <cmath>

int main(){

    double D = 0,x= 0, A=0, K = 0, Z = 0, k = 0, C = 0, B = 0,z = 0;

    
    std::cout << " X - ";
    std::cin >> x;
    std::cout << " C ";
    std::cin >> C;
    std::cout << " k: ";
    std::cin >> k;
    std::cout << " z: ";
    std::cin >> z;
    std::cout << " D: ";
    std::cin >> D;

    A = log(x) - k ;
    B = sqrt(z);
    double Y  = pow(D,2) + (pow(C,2) / (0.75 *A)) + B; 

    std::cout << "Result Y = " << Y;
    return 0;
}