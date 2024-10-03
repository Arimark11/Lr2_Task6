#include <iostream>
#include <cmath>

int main(){

    double D = 0,x= 0, A = 0, B=0, Y=0, K = 0, p = 0, C = 0;
    double const e = 2.7; 

    std::cout << " p - ";
    std::cin >>  p;
    std::cout << " X - ";
    std::cin >> x;
    std::cout << " K";
    std::cin >> K;
    std::cout << " D";
    std::cin >> D;
    std::cout << " C ";
    std::cin >> C;

    A = x + sin(p);
    B = pow(e,K);
    Y = 1 + ( pow(K,2) / (2 * A* B) ) - B + D*C;

    std::cout << "Result Y = " << Y;
    return 0;
}