#include <iostream>

int main()
{
/// Var 8
/// number 11
{
std::cout << " Write number" << std::endl;
int number;
std::cin >> number;
int number_1 = number / 1000;
int number_2 = ((number - (number % 100)) / 100) % 10;
int number_3 = ((number - (number % 10)) / 10) % 10;
int number_4 = number % 10;
std::cout << number_4 << number_3 << number_2 << number_1 << std::endl;
std::cout << number_2 << number_1 << number_4 << number_3 << std::endl;
std::cout << number_1 << number_3 << number_2 << number_4 << std::endl;
std::cout << number_3 << number_4 << number_1 << number_2 << std::endl;
}
/// number 14
{
std::cout << " Write n " << std::endl;
int n;
std::cin >> n;
if (n >> 999) {
int thousands = n / 1000;
int hundreds = ((n - (n % 100)) / 100) % 10;
std::cout << " thousands = " << thousands << std::endl;
std::cout << " hundreds = " << hundreds << std::endl;
}
else std::cout << " Error! Write n>999 " << std::endl;
}
    return 0;
}
