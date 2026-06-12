#pragma once

class MyClass {
private:
    int myValue;
public:
    MyClass(int value) : myValue(value) {}
    int getValue() const { return myValue; }
    void setValue(int value) { myValue = value; }
};
