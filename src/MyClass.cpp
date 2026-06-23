#include "MyClass.h"

MyClass::MyClass(int value) : myValue(value) {}

int MyClass::getValue() const {
    return myValue;
}

void MyClass::setValue(int value) {
    myValue = value;
}

int MyClass::add(int other) const {
    return myValue + other;
}

int MyClass::multiply(int other) const {
    return myValue * other;
}
