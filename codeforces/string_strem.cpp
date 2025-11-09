#include <iostream>
#include <sstream>
using namespace std;

int main()
{
    string s = "reversed string should not";
    stringstream ss(s);

    string word;

    cout << "Initial position: " << ss.tellg() << endl;

    // 1st extraction
    ss >> word;
    cout << "Word 1: " << word << " | Position after reading: " << ss.tellg() << endl;

    // 2nd extraction
    ss >> word;
    cout << "Word 2: " << word << " | Position after reading: " << ss.tellg() << endl;

    // 3rd extraction
    ss >> word;
    cout << "Word 3: " << word << " | Position after reading: " << ss.tellg() << endl;

    // 4th extraction
    ss >> word;
    cout << "Word 4: " << word << " | Position after reading: " << ss.tellg() << endl;

    return 0;
}
