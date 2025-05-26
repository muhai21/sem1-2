#include <iostream>
using namespace std;

class Complex {
private:
    double rl, img;
    const int id; // constant data member
    static int count; // static data member

public:
    Complex(double r=0, double i=0) : rl(r), img(i), id(++count) {}

    // Constant member function
    void display() const {
        cout << "ID: " << id << " | " << rl << " + " << img << "i" << endl;
    }

    // Constant member functions, passing const references
    Complex add(const Complex& c) const {
        return Complex(rl + c.rl, img + c.img);
    }

    Complex subtract(const Complex& c) const {
        return Complex(rl - c.rl, img - c.img);
    }

    Complex multiply(const Complex& c) const {
        double rlPart = rl * c.rl - img * c.img;
        double imgPart = rl * c.img + img * c.rl;
        return Complex(rlPart, imgPart);
    }

    Complex divide(const Complex& c) const {
        double denom = c.rl * c.rl + c.img * c.img;
        if (denom == 0) {
            cout << "Error: Division by zero." << endl;
            return Complex();
        }
        double rlPart = (rl * c.rl + img * c.img) / denom;
        double imgPart = (img * c.rl - rl * c.img) / denom;
        return Complex(rlPart, imgPart);
    }

    // Static member function
    static int getCount() {
        return count;
    }
};

// Static data member initialization
int Complex::count = 0;

int main() {
    const Complex c1(4, 5), c2(2, 3);

    cout << "Complex Number 1: ";
    c1.display();
    cout << "Complex Number 2: ";
    c2.display();

    Complex result;

    cout << "Division: ";
    result.display();

    return 0;
}
