#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    std::cout << "Size of char: " << sizeof(char) << " bytes" << endl;
    std::cout << "Size of int: " << sizeof(int) << " bytes" << endl;
    std::cout << "Size of float: " << sizeof(float) << " bytes" << endl;
    std::cout << "Size of double: " << sizeof(double) << " bytes" << endl;
    std::cout << "Size of long double: " << sizeof(long double) << " bytes" << endl;
    std::cout << "Size of string: " << sizeof(bool) << " bytes" << endl;
    std::cout << "Size of bool: " << sizeof(bool) << " bytes" << endl;
    std::cout << "Size of unsigned short: " << sizeof(unsigned short) << " bytes" << endl;
    std::cout << "Size of unsigned int: " << sizeof(unsigned int) << " bytes" << endl;
    std::cout << "Size of unsinged long: " << sizeof(unsigned long) << " bytes" << endl;
    std::cout << "Size of unsigned long long: " << sizeof(unsigned long long) << " bytes \n" << endl;

    bool a1 = true;
    bool b1 = false;
    std::cout << "a && b = " << (a1 && b1) << ";" << endl;
    std::cout << "a | b = " << (a1 | b1) << ";" << endl;
    std::cout << "a || b = " << (a1 || b1) << "\n" << endl;

    bool a = 1;
    bool b = 1;
    std::cout << "Implikacia: " << a << "," << b << ": " << (!a || b) << ";" << endl;
    std::cout << "XOR: " << a << "," << b << ": " << (a ^ b) << ";" << endl;
    std::cout << "Konunkciya: " << a << "," << b << ": " << (a && b) << ";" << endl;
    std::cout << "Const 1: " << a << "," << b << ": " << 1 << ";" << endl;
    std::cout << "Strelka Pirsa: " << a << "," << b << ": " << !(a || b) << ";" << endl;
    std::cout << "Shtrix Sheffera: " << a << "," << b << ": " << !(a && b) << ";" << endl;
    std::cout << "Zapret a: " << a << "," << b << ": " << (!a && b) << "\n" << endl;

    // char key1;
    // char key2;
    // std::cout << "Input upper symbol: ";
    // std::cin >> key1;
    // std::cout << "Input lower symbol: ";
    // std::cin >> key2;
    // std::cout << "ASCII code: " << key1 << ": " << static_cast<int>(key1) << endl;
    // std::cout << "ASCII code: " << key2 << ": " << static_cast<int>(key2) << "\n" << endl;

    char x = 'A';
    int i = 42;
    float f = 3.14f;
    double d = 2.71828;
    long double ld = 1.2345;
    string s = "Hello"; //-----------string-------------
    bool bb = true;
    unsigned short us = 10;
    unsigned int ui = 100;
    unsigned long ul = 1000;
    unsigned long long ull = 10000;
    std::cout << "x type: " << typeid(x).name() << endl;
    std::cout << "i type: " << typeid(i).name() << endl;
    std::cout << "f type: " << typeid(f).name() << endl;
    std::cout << "d type: " << typeid(d).name() << endl;
    std::cout << "ld type: " << typeid(ld).name() << endl;
    std::cout << "s type: " << typeid(s).name() << endl; // ---------error---------
    std::cout << "bb type: " << typeid(bb).name() << endl;
    std::cout << "us type: " << typeid(us).name() << endl;
    std::cout << "ui type: " << typeid(ui).name() << endl;
    std::cout << "ul type: " << typeid(ul).name() << endl;
    std::cout << "ull type: " << typeid(ull).name() << endl;

    float ff = 0.1f;
    double dd = 0.1;

    std::cout << fixed << setprecision(20);
    cout << "float = " << ff << endl;
    cout << "double =  " << dd << endl;

    return 0;
}