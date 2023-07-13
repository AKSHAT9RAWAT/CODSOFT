#include <iostream>
#include <string>
#include <vector>
#include <limits>
using namespace std;
struct Student {
    std::string name;
    double grade;
};

int main() {
    vector<Student> students;
    string name;
    double grade;

    // Input the student data from the user
    while (true) {
        cout << "Enter student name (or 'display' to finish): ";
        getline(cin, name);

        if (name == "display")
            break;

        cout << "Enter the grade for " << name << ": ";
        cin >> grade;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');  // Clear input stream

        students.push_back({name, grade});
    }

    // Calculates average grade
    double sum = 0.0;
    double average = 0.0;
    double lowest = 100.0;
    double highest= 0.0;  // Assuming grades are between 0 and 100

    for (size_t i = 0; i < students.size(); ++i) {
        sum += students[i].grade;

        if (students[i].grade > highest)
            highest = students[i].grade;

        if (students[i].grade < lowest)
            lowest = students[i].grade;
    }

    if (!students.empty())
        average = sum / students.size();

    // Display average, highest, and lowest grades
    cout << "\nAverage grade: " << average <<endl;
    cout << "Highest grade: " << highest <<endl;
    cout << "Lowest grade: " << lowest <<endl;

    return 0;
}