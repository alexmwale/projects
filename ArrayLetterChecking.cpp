#include <iostream>
#include <string>

using namespace std;

int main()
{

    string MyArrayList[] = {"B123", "C234", "A345", "C15", "B177", "G3003", "C235", "B179"};

    // To get size of an array
    int SizeOfMyArrayList = sizeof(MyArrayList) / sizeof(MyArrayList[0]);

    // iterate through each elemet in the array
    for (int value = 0; value < SizeOfMyArrayList; value++)
    {

        if (MyArrayList[value][0] == 'B')
        {
            // Check if the current  elements start with B
            cout << MyArrayList[value] << endl;
        }
    }
    return 0;
}