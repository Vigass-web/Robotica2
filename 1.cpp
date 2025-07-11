#include <iostream>

int main() {
    short s = 10;
    int i = 20;
    long l = 30;
    long long ll = 40;
    float f = 3.14f;
    double d = 2.71828;
    long double ld = 1.6180339887;
    char c = 'A';
    bool b = true;
    wchar_t wc = L'$';

    std::cout << "short: " << s << std::endl;
    std::cout << "int: " << i << std::endl;
    std::cout << "long: " << l << std::endl;
    std::cout << "long long: " << ll << std::endl;
    std::cout << "float: " << f << std::endl;
    std::cout << "double: " << d << std::endl;
    std::cout << "long double: " << ld << std::endl;
    std::cout << "char: " << c << std::endl;
    std::cout << "bool: " << std::boolalpha << b << std::endl;
    std::cout << "wchar_t : " << wc << std::endl;

    return 0;
}
    
            
        
        
        
        

}