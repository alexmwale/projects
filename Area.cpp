#include <iostream>
#include <cmath>

using namespace std;

int AreaOfSquare(int side);
int AreaOfRectangle(int Length, int Width);
int AreaOfTriangle(int base, int height);

void MyMenu();

int main()
{
    int SelectionValue;
    do
    {
        MyMenu();
        cout << " Enter Selection" << endl;

        cin >> SelectionValue;

        if (SelectionValue == 1)
        {
            cout << " Enter value of the side of the Square" << endl;
            int side;
            cin >> side;
            cout << " Area of the Square is " << AreaOfSquare(side) << endl;
        }
        else if (SelectionValue == 2)
        {
            int Length, Width;
            cout << "Enter the length of the rectangle: ";
            cin >> Length;
            cout << "Enter the width of the rectangle: ";
            cin >> Width;
            cout << "Area of the rectangle: " << AreaOfRectangle(Length, Width) << endl;
        }
        else if (SelectionValue == 3)
        {
            int base, height;
            cout << "Enter the base length of the triangle: ";
            cin >> base;
            cout << "Enter the height of the triangle: ";
            cin >> height;
            cout << "Area of the triangle: " << AreaOfTriangle(base, height) << endl;
        }
        else if (SelectionValue == 4)
        {
            cout << "Program is exiting..." << endl;
            cout << "Program  has been exited succefully!!" << endl;
        }
        else
        {
            cout << "Your input was: " << SelectionValue << " which is an invalid input" << endl;
            cout << "Please enter a valid input" << endl;
        }

    }

    while (SelectionValue != 4);

    return 0;
}

int AreaOfSquare(int side)
{

    return side * side;
}
int AreaOfRectangle(int Length, int Width)
{

    return Length * Width;
}

int AreaOfTriangle(int base, int height)
{

    return 0.5 * base * height;
}

void MyMenu()
{

    cout << "Please Select the area of the shape to calculate" << endl;
    cout << "1. Square" << endl;
    cout << "2. Rectangle" << endl;
    cout << "3. Triangle" << endl;
    cout << "4. Quit Program" << endl;
}