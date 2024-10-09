#include <iostream>
#include <cmath>

int main(){

    double D = 0,x= 0, A=0, K = 0, y = 0, C = 0;

    std::cout << " X - ";
    std::cin >> x;
    std::cout << " Y";
    std::cin >> y;
    std::cout << " C ";
    std::cin >> C;
    std::cout << " K : ";
    std::cin >> K;

    A = x+y;
    D = fabs(C-A);
    double S  = 10.1 + (A/C) + (D / pow(K,2)); 

    std::cout << "Result T = " << S;
    return 0;
}