#include <iostream>
#include "MyClass.h"

int main() {
    std::cout << "Hello, World!" << std::endl;

    // Demonstrate MyClass with add and multiply member functions
    MyClass obj(10);
    int b = 3;
    std::cout << "add(" << obj.getValue() << ", " << b << ") = " << obj.add(b) << std::endl;
    std::cout << "multiply(" << obj.getValue() << ", " << b << ") = " << obj.multiply(b) << std::endl;

    int count = 5;

    for (int i = 0; i < count; i++)
    {
        std::cout << "I say: Hello!" << count << std::endl;
    }

    obj.setValue(42);
    std::cout << "MyClass value: " << obj.getValue() << std::endl;

    return 0;
}
