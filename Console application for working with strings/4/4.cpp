#include <iostream>
#include <string>

using namespace std;

int main() {
    string name;
    cout << "enter your name here -->";
    getline(cin, name);
    cout << "your name is -->" << name << endl;
    cout << "it`s correct? (yes/no)\n";

    string answer;
    string error;

    cin >> answer;

    if (answer != "yes" && answer != "no") {
        answer = error;
        cout << "Invalid Input. Please enter only 'yes' or 'no'!";
        cin >> answer;
    }
    if (answer == "yes") {
        cout << "Great!\n";
    }
    else {
        cout << "I'm sorry.\n";
    }

    return 0;
}
