#include <iostream>
#include <stdexcept>
using namespace std;

int gcd_int(int a, int b) {
    a = abs(a);
    b = abs(b);
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int extended_euclid(int a, int b, int &x, int &y) {
    if (b == 0) {
        x = 1;
        y = 0;
        return a;
    }

    int x1, y1;
    int g = extended_euclid(b, a % b, x1, y1);
    x = y1;
    y = x1 - (a / b) * y1;
    return g;
}

int mod_inverse(int a, int m) {
    if (m <= 0) {
        throw invalid_argument("m must be greater than 0");
    }

    int x, y;
    int g = extended_euclid((a % m + m) % m, m, x, y);

    if (g != 1) {
        return -1; // khong ton tai nghich dao modulo
    }

    return (x % m + m) % m;
}

int main() {
    int a, m;
    cout << "Enter a and m: ";
    cin >> a >> m;

    try {
        int inv = mod_inverse(a, m);
        if (inv == -1) {
            cout << "Modular inverse does not exist." << '\n';
        } else {
            cout << "Modular inverse: " << inv << '\n';
        }
    } catch (const exception &e) {
        cout << "Error: " << e.what() << '\n';
    }

    return 0;
}
