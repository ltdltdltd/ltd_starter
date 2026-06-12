#include <iostream>
#include "MyClass.h"

int add(int a, int b) {
    return a + b;
}

int multiply(int a, int b) {
    return a * b;
}

int main() {
    std::cout << "Hello, World!" << std::endl;

    // Demonstrate add and multiply functions
    int a = 10, b = 3;
    std::cout << "add(" << a << ", " << b << ") = " << add(a, b) << std::endl;
    std::cout << "multiply(" << a << ", " << b << ") = " << multiply(a, b) << std::endl;

    int count = 5;

    for (int i = 0; i < count; i++)
    {
        std::cout << "I say: Hello!" << count << std::endl;
    }

    MyClass obj(42);
    std::cout << "MyClass value: " << obj.getValue() << std::endl;

    return 0;
}
