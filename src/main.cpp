#include <iostream>
#include "main.hpp"

void MyClass::sayHello() {
    std::cout << "Hello from MyClass!" << std::endl;
}

int main() {
    MyClass obj;
    obj.sayHello();
    return 0;
}