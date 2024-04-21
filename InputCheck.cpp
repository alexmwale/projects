#include <iostream>

using namespace std;
int main()
{
    int intvalue;

    while (true)
    {
        cout << "Please enter an integer value between 5 and 10: " << endl;
        cin >> intvalue;

        if (cin.fail())
        {
            cin.clear(); // Clear the error state
            cout << "Invalid input. Please enter an integer value." << endl;
            break;
        }
        else if (intvalue < 5 || intvalue > 10)
        {
            cout << "You have entered " << intvalue << ". Please enter an integer value between 5 and 10." << endl;
        }
        else
        {
            break; // Exit the loop if the input is valid
        }
    }

    cout << "Your input value (" << intvalue << ") has been accepted." << endl;

    return 0;
}
