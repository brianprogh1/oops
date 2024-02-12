#include <iostream>
using namespace std;

class Number {
private:
    int value;

public:
    Number() : value(0) {}

    Number(int val) : value(val) {}

    Number operator-() {
        Number result(-value);
        return result;
    }

    void display() {
        cout << "Value: " << value << endl;
    }
};

int main() {
    Number num1(10);
    Number num2 = -num1;

    cout << "Original Number: ";
    num1.display();

    cout << "After Unary Minus Operator: ";
    num2.display();

    return 0;
}
