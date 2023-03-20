#include <iostream>
#include <utility>
#include <cmath>

int main(){
	int a = 10;
        int b = 20;
        int c = -34;
        float z = 0.3f;
        float w = 0.2f;

        //quadratic formula one
        float num1 = (-1*b + std::sqrt(std::pow(b, 2) - 4 * a * c)) / 2 * a;

        //quadratic formula two
        float num2 = (-1*b - std::sqrt(std::pow(b, 2) - 4 * a * c)) / 2 * a;

        std::cout << "Solution one: " << num1 << "\n";
        std::cout << "Solution two: " << num2 << "\n";
}
