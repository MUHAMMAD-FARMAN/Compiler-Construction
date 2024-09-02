#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
    cout << "Character Stream Example" << endl;
    // Check if the file name is provided as an argument
    if (argc != 2)
    {
        cerr << "Usage: " << argv[0] << " <filename>" << endl;
        return 1;
    }

    // Open the file
    ifstream file(argv[1]);

    // Check if the file is successfully opened
    if (!file.is_open())
    {
        cerr << "Could not open the file: " << argv[1] << endl;
        return 1;
    }

    // Read and print the file content
    string line;
    while (getline(file, line))
    {
        cout << line << endl;
    }

    // Close the file
    file.close();

    return 0;
}
