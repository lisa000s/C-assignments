//
// Created by VASILISA on 7/14/16.
//

#include <iostream>


using namespace std;

int formula(int a, int e, int n) {
    {
        int remainder;
        int x = 1;

        while (e != 0) {
            remainder = e % 2;
            e = e / 2;

            if (remainder == 1)
                x = (x * a) % n;
            a = (a * a) % n;
        }
        return x;
    }
}

void pointers(int a, int x, int b, int y, int n, int *out1, int *out2) {
    *out1 = formula(a, x, n);
    *out2 = formula(b, y, n);
}

int main() {
    int a, x, b, y, n;
    cout << "Enter a,x,b,y,n" << endl;
    cin >> a >> x >> b >> y >> n;
    int *out1 = new int;
    int *out2 = new int;

    pointers(a, x, b, y, n, out1, out2);


    cout << "a to the power of x mod n is equal to " << *out1 << endl;
    cout << "b to the power of y mod n is equal to " << *out2 << endl;

    return 0;
}