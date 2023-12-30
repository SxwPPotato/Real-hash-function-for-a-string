#include <iostream>
#include <string>
#include <math.h>

int real_string_hash(std::string& str, int& p, int& n) {
    int hash = 0;
    for (int i = 0; i < str.size(); ++i) {
        hash += static_cast<int> (str[i]) * pow(p,i);
    }
    hash = hash % n;
    return hash;
}

int main()
{
    setlocale(LC_ALL, "russian");
    std::string str;
    int p;
    int n;
    std::cout << "Введите p: ";
    std::cin >> p;
    std::cout << "Введите n: ";
    std::cin >> n;
    do {
        std::cout << "\nВведите строку: ";
        std::cin >> str;
        std::cout << "\nНаивный хэш строки " << str << " = " << real_string_hash(str, p , n) << "\n";
    } while (str != "exit");
}
