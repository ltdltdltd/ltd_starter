#pragma once

class MyClass {
private:
    int myValue;
public:
    MyClass(int value);
    int getValue() const;
    void setValue(int value);
    int add(int other) const;
    int multiply(int other) const;
};
