#include <iostream>
#include <cmath>

int main(){

    double D = 0,x= 0, A=0, K = 0, e = 2.7, d = 0, C = 0, B = 0;

    
    std::cout << " X - ";
    std::cin >> x;
    std::cout << " d: ";
    std::cin >> d;
    std::cout << " C ";
    std::cin >> C;
    std::cout << " K : ";
    std::cin >> K;

    A = log10(x);
    B = x + pow(e,d);
    double Y  = (A+B) - ( pow(C,2) / K); 

    std::cout << "Result Y = " << Y;
    return 0;
}