#include <iostream>
#include <fstream>

using namespace std;

int main() {
    string name, age, username;

    cout << "Enter your name: " ;

    cin >> name;

    cout << "Enter your age: ";

    cin >> age;

    cout << "Enter your username: ";

    cin >> username;

    cout << "Your name is "
    << name << ", you are "
    << username;

    ofstream output_file("info_log.txt");

    if (output_file.is_open()){
        output_file << "Your name is "
        << name << ", you are "
        << username;
    }
    return 0;
}