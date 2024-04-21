#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    ifstream Files;
    string Datafile;
    Files.open("AdvancedProgramming.txt");

    // Read content from the file and store it in Datafile
    if (Files.is_open())
    {
        while (getline(Files, Datafile))
        {
            cout << "Content of the file:" << endl;
            cout << Datafile << endl
                 << endl;
        }
    }
    else
    {
        cout << "Unable to open file" << endl;
        return 1;
    }

    // Count vowels in the given string
    string DataFile = "This is the Advanced Computer Programming Module";
    int Vowels = 0;
    for (int i = 0; DataFile[i]; i++)
    {
        if (DataFile[i] == 'a' || DataFile[i] == 'e' || DataFile[i] == 'i' || DataFile[i] == 'o' || DataFile[i] == 'u' || DataFile[i] == 'A' || DataFile[i] == 'E' || DataFile[i] == 'I' || DataFile[i] == 'O' || DataFile[i] == 'U')
        {
            Vowels++;
        }
    }
    cout << "Total Vowels : " << Vowels << endl
         << endl;

    // Reverse the string and capitalize the second letter of each word
    reverse(DataFile.begin(), DataFile.end());
    for (size_t i = 0; i < DataFile.size(); ++i)
    {
        if (i == 0 || DataFile[i - 1] == ' ')
        {
            DataFile[i] = toupper(DataFile[i]);
        }
    }
    cout << "Reversed string with second letter capitalized:" << endl;
    cout << DataFile << endl;

    return 0;
}
