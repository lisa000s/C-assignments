#include <iostream>

using namespace std;

int main() {
    int circle_radius, square_area;
    double pi = 3.14159, circle_area, difference_area;

    //prompt for radius
    cout << "Enter an integer for the radius:" << endl;

    //store input into variable
    cin >> circle_radius;

    //calculate area of the circle
    circle_area = pi * circle_radius * circle_radius;
    cout << "The area of the circle is: " << circle_area << endl;
    //printf("The area of the circle is: %f \n", circle_area);

    //calculate area of the square containing circle
    square_area = (2 * circle_radius) * (2 * circle_radius);
    cout << "The area of the square is: " << square_area << endl;
    //printf("The area of the square is: %d \n", square_area);

    //calculate the difference
    difference_area = square_area - circle_area;
    cout << "The difference is: " << difference_area << endl;
    //printf("The difference is: %f \n", difference_area);

    return 0;
}