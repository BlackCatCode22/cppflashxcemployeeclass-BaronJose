#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    int age;
    string jobTitle;
public:
    Employee(string n, int a, string j) {
        name = n;
        age = a;
        jobTitle = j;
    }
    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Job Title: " << jobTitle << endl;
    }
};

int main() {
    Employee emp1("John Doe", 30, "Manager");
    Employee emp2("Jane Smith", 25, "Assistant");

    emp1.displayInfo();
    emp2.displayInfo();

    return 0;
}
