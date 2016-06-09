//
// Created by VASILISA on 6/7/16.
//

#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;
//using namespace std;

/*
 double function1(int x1, int x2, int y1, int y2);

double function2(int x1, int x3, int y1, int y3);

double function3(int x2, int x3, int y2, int y3);

int main() {
    cout << "Hello, I am going to compute distance between two points. " << endl << endl;
    //first point
    cout << "Enter two integers as the coordinates for the first point:" << endl;
    int x1, y1;
    cin >> x1 >> y1;
    //second point
    cout << "Enter two integers as the coordinates for the second point:" << endl;
    int x2, y2;
    cin >> x2 >> y2;
    //third point
    cout << "Enter two integers as the coordinates for the third point:" << endl;
    int x3, y3;
    cin >> x3 >> y3;
    //function1
    cout << "The distance between Points 1 and 2 is: " << function1(x2, x1, y2, y1) << endl;
    //function2
    cout << "The distance between Points 1 and 3 is: " << function2(x3, x1, y3, y1) << endl;
    //function3
    cout << "The distance between Points 2 and 3 is: " << function3(x3, x2, y3, y2) << endl;
    return 0;
};

double function1(int x1, int x2, int y1, int y2) {

    double distance1;
    distance1 = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    return distance1;
};

double function2(int x1, int x3, int y1, int y3) {
    double distance2;
    distance2 = sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));
    return distance2;
};

double function3(int x2, int x3, int y2, int y3) {
    double distance3;
    distance3 = sqrt((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2));
    return distance3;
};
*/


double function(int x1, int x2, int y1, int y2) {
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    return distance;
};

void print_distance(int x1, int x2, int y1, int y2, int x3, int y3) {
    cout << "The distance between Points 1 and 2 is: " << function(x2, x1, y2, y1) << endl;
    cout << "The distance between Points 1 and 3 is: " << function(x3, x1, y3, y1) << endl;
    cout << "The distance between Points 2 and 3 is: " << function(x3, x2, y3, y2) << endl;
};

int main() {

    //first point
    cout << "Enter two integers as the coordinates for the first point:" << endl;
    int x1, y1;
    cin >> x1 >> y1;
    //second point
    cout << "Enter two integers as the coordinates for the second point:" << endl;
    int x2, y2;
    cin >> x2 >> y2;
    //third point
    int x3, y3;
    cout << "Enter two integers as the coordinates for the third point:" << endl;
    cin >> x3 >> y3;

    print_distance(x1, x2, y1, y2, x3, y3);
    return 0;
};



