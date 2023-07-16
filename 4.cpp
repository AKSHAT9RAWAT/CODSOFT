#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
    string word;
    string fname;
    int count = 0;

    cout << "Enter filename: ";
    cin >> fname;

    ifstream fin(fname);
    if (!fin) {
        cout << fname << " file doesn't exist" << endl;
        return 0;
    }

    cout << "\nContents of the file: \n\n";

    while (fin >> word) {
        ++count;
        cout << word << '\n';
    }

    fin.close();

    cout << "\nNumber of words in the file: " << count << endl;

    return 0;
}