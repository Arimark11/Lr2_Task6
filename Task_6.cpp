#include <iostream>
#include <cmath>

int main(){

    double D = 0,x= 0, B=0, A=0, K = 0, m = 0, C = 0, n = 0;

    std::cout << " A - ";
    std::cin >>  A;
    std::cout << " X - ";
    std::cin >> x;
    std::cout << " K";
    std::cin >> K;
    std::cout << " D";
    std::cin >> D;
    std::cout << " n ";
    std::cin >> n;
    std::cout << " m : ";
    std::cin >> m ;

    A = fabs(n+m);
    D = tan(x);
    double Y = 1.29 + (K/A) + pow(D,2);

    std::cout << "Result Y = " << Y;
    return 0;
}