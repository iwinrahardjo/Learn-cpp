#include <iostream>
using namespace std;

struct Person
{
    char name[40];
    int age;
    float salary;
};

int main()
{
    Person p1;
    cout << "enter your name:\n ";
    cin.get(p1.name, 40);
    cout << "enter your age: \n";
    cin >> p1.age;
    cout << "enter your salary: \n";
    cin >> p1.salary;

    cout << "\nyour name is " << p1.name << ".\n";
    cout << "your age is " << p1.age << ".\n";
    cout << "your salary is " << p1.salary << ".\n";

    return 0;
}