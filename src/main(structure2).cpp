#include <iostream>
using namespace std;

struct Person
{
    char name[40];
    int age;
    float salary;
};

Person getData(Person);
void displayData(Person);

int main()
{
    Person p;

    p = getData(p);
    displayData(p);

    return 0;
}

Person getData(Person p)
{
    cout << "Enter your name\n";
    cin.get(p.name, 50);

    cout << "Enter your age\n";
    cin >> p.age;

    cout << "Enter your salary\n";
    cin >> p.salary;

    return p;
}

void displayData(Person p)
{
    cout << "\nyour name is " << p.name;
    cout << "\nyour age is " << p.age;
    cout << "\nyour salary is " << p.salary << "\n";
}