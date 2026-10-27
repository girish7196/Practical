#include <iostream>
#include <exception>
using namespace std;

class MyException : public exception {
public:
    const char* what() const noexcept override {
        return "Attempted to divide by zero!\n";
    }
};

int main() {
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;

    try {
        if (y == 0) {
            throw MyException();
        }
        cout << "Result: " << x / y << endl;
    } 
    catch (const exception& e) {
        cout << e.what();
    }

    return 0;
}
