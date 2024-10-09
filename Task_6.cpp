#include <iostream>
#include <cmath>

int main(){

    double D = 0,x= 0, A=0, K = 0, h = 0, p = 0, C = 0, B = 0;

    
    std::cout << " X - ";
    std::cin >> x;
    std::cout << " D: ";
    std::cin >> D;
    std::cout << " C ";
    std::cin >> C;
    std::cout << " K : ";
    std::cin >> K;
    std::cout << " h: ";
    std::cin >> h;
    std::cout << " P: ";
    std::cin >> p;
    
    A = x - p;
    B = log(h);
    double Y  = 0.78*B + (pow(A,3) / K*C*D); 

    std::cout << "Result Y = " << Y;
    return 0;
}