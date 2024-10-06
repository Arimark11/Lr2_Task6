#include <iostream>
#include <cmath>

int main(){

    double D = 0,x= 0, B=0, A=0, K = 0, Y = 0, C = 0, Z = 0;

    std::cout << " A - ";
    std::cin >>  A;
    std::cout << " X - ";
    std::cin >> x;
    std::cout << " Y";
    std::cin >> Y;
    std::cout << " D";
    std::cin >> D;
    std::cout << " C ";
    std::cin >> C;
    std::cout << " Z: ";
    std::cin >> Z ;

    A = x-Y;
    B = sqrt(Z);
    double T  = cos(x) + (A*A /(K-C*D)) - B;

    std::cout << "Result T = " << T;
    return 0;
}