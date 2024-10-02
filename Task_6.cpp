#include <iostream>
#include <cmath>

int main(){

    double D = 0,A = 0,x = 0,b=0,S=0;

    std::cout << " X - ";
    std::cin >> x;
    std::cout << " D - ";
    std::cin >> D;

    b = x+D;
    A = D*x/b;

    S = (pow(A,2) + b * cos(x))/ pow(D,3) + (A+D-b);

    std::cout << "Result S = " << S;
    return 0;
}