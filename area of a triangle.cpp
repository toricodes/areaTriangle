#include <iostream>

using namespace std;

int main()
{

    int base;
    cout << "Enter the base of a triangle: " << endl;
    cin >> base;
    cout << "The base of a triangle is: " << base << endl;

    int height;
    cout << "Enter a height of a triangle: " << endl;
    cin >> height;
    cout << "The height of a triangle is: " << height << endl;

    int Area;
    Area = base * height / 2;

    cout << "The area of this triangle is: " << Area << endl;

}
