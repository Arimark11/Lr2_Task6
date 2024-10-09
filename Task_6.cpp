#include <iostream>
#include <cmath>

int main(){

    double D = 0,x= 0, A=0, K = 0, Z = 0, p = 0, C = 0, B = 0,z = 0;

    
    std::cout << " X - ";
    std::cin >> x;
    std::cout << " Z: ";
    std::cin >> Z;
    std::cout << " C ";
    std::cin >> C;
    std::cout << " K : ";
    std::cin >> K;
    std::cout << " p: ";
    std::cin >> p;
    std::cout << " z: ";
    std::cin >> z;
    std::cout << " D: ";
    std::cin >> D;

    A = sin(x) - z ;
    B = fabs(p-x);
    double Y  = pow((A+B),2) - ( K/C*D); 

    std::cout << "Result Y = " << Y;
    return 0;
}