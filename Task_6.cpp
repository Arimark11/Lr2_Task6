#include <iostream>
#include <cmath>

int main(){

    double D = 0,x= 0, B=0, q=0, K = 0, p = 0, C = 0, n = 0;

    std::cout << " p - ";
    std::cin >>  p;
    std::cout << " X - ";
    std::cin >> x;
    std::cout << " K";
    std::cin >> K;
    std::cout << " D";
    std::cin >> D;
    std::cout << " B ";
    std::cin >> B;
    std::cout << " N: ";
    std::cin >> n ;

    C = p-n;
    B = cos(x);
    q = B*B / (K*D) + B * C *C *C;

    std::cout << "Result Q = " << q;
    return 0;
}