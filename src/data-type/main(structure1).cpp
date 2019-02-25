#include <iostream>
using namespace std;

struct Person
{
    char name[40];
    int age;
    float salary;
};

void displayData(Person);

int main()
{
    Person p;
    cout << "\nenter your name:\n ";
    cin.get(p.name, 40);
    cout << "enter your age: \n";
    cin >> p.age;
    cout << "enter your salary: \n";
    cin >> p.salary;

    displayData(p);

    return 0;
}

void displayData(Person p)
{
    cout << "\nYour name is " << p.name << "\n";
    cout << "Your age is " << p.age << "\n";
    cout << "Your salary is " << p.salary << "\n";
}