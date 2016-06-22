//
// Created by VASILISA on 6/14/16.
//
#include <iostream>

using namespace std;


bool valid_input(int a, int b, int c) {
    if (100 > a > b > c > 0) {
        return 1;
    }
    else {
        return 0;
    }

};

char threshold_score(int a, int b, int c, int g) {
    char grade = 100 - g;
    if (valid_input(a, b, c) == 1) {
        return grade;
    }
    else {
        cout << "N" << endl;
    }

    if (g >= 90) {
        cout << "Grade A" << endl;
    }
    else if (g >= 80) {
        cout << "Grade B" << endl;
    }
    else if (g >= 70) {
        cout << "Grade C" << endl;
    }
    else {
        cout << "Grade F" << endl;
    }
}

int main() {
    cout << "Enter the values of threshold for A,B,C, and F" << endl;
    int a, b, c;
    cin >> a >> b >> c;
    cout << "What is your numerical score?" << endl;
    int g;
    cin >> g;
    if (valid_input(a, b, c) == 1) {
        cout << "Your final grade is:  " << threshold_score(a, b, c, g) << endl;
    }
    else {
        cout << "The threshold is not valid." << endl;
    }
    return 0;
}
