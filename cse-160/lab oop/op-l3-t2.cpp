#include <bits/stdc++.h>
using namespace std;

class Complex {
private:
    double rl, img;
    const int id;
    static int count;

public:
    Complex(double r = 0, double i = 0) : rl(r), img(i), id(++count) {}
    ~Complex() { --count; }
    double magnitude() const {
        return sqrt(rl * rl + img * img);
    }
    void display() const {
        cout << "ID: " << id << " | " << rl;
        if (img >= 0) cout << " + " << img << "i";
        else cout << " - " << -img << "i";
        cout << endl;
    }
    Complex operator+(const Complex& c) const {
        return Complex(rl + c.rl, img + c.img);
    }
    Complex operator-(const Complex& c) const {
        return Complex(rl - c.rl, img - c.img);
    }
    Complex operator*(const Complex& c) const {
        double rlPart = rl * c.rl - img * c.img;
        double imgPart = rl * c.img + img * c.rl;
        return Complex(rlPart, imgPart);
    }
    Complex operator/(const Complex& c) const {
        double denom = c.rl * c.rl + c.img * c.img;
        if (denom == 0) {
            throw runtime_error("Division by zero in complex number division");
        }
        double rlPart = (rl * c.rl + img * c.img) / denom;
        double imgPart = (img * c.rl - rl * c.img) / denom;
        return Complex(rlPart, imgPart);
    }
    Complex& operator=(const Complex& c) {
        rl = c.rl;
        img = c.img;
        return *this;
    }
    ostream& operator<<(ostream& os) const {
        os << rl;
        if (img >= 0) os << " + " << img << "i";
        else os << " - " << -img << "i";
        return os;
    }
    void setReal(double r) {
        rl = r;
    }
    void setImag(double i) {
        img = i;
    }
    static Complex min(const Complex& c1, const Complex& c2) {
        return c1.magnitude() <= c2.magnitude() ? c1 : c2;
    }
    static int getCount() {
        return count;
    }
};

int Complex::count = 0;

istream& operator>>(istream& is, Complex& c) {
    double r, i;
    is >> r >> i;
    c.setReal(r);
    c.setImag(i);
    return is;
}

int main() {
    try {
        Complex c1(4, 5), c2(2, 3);
        cout << "Complex Number 1: ";
        c1.display();
        cout << "Complex Number 2: ";
        c2.display();
        cout << "Using << operator: c1 = ";
        c1.operator<<(cout) << ", c2 = ";
        c2.operator<<(cout) << endl;
        Complex result;
        result = c1 + c2;
        cout << "Addition: ";
        result.operator<<(cout) << endl;
        result = c1 - c2;
        cout << "Subtraction: ";
        result.operator<<(cout) << endl;
        result = c1 * c2;
        cout << "Multiplication: ";
        result.operator<<(cout) << endl;
        result = c1 / c2;
        cout << "Division: ";
        result.operator<<(cout) << endl;
        Complex minResult = Complex::min(c1, c2);
        cout << "Complex number with minimum magnitude: ";
        minResult.display();
        cout << "Total Complex objects created: " << Complex::getCount() << endl;
        cout << "Enter a complex number (real imaginary): ";
        Complex c3;
        cin >> c3;
        cout << "You entered: ";
        c3.operator<<(cout) << endl;
    }
    catch (const runtime_error& e) {
        cout << "Error: " << e.what() << endl;
    }
    return 0;
}