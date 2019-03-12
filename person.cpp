#include <iostream>
#include "person.h"
using namespace std;

Person::Person()
    : name("default"),
      number(20190211)
{
    cout << __PRETTY_FUNCTION__
         << ": ctor number:" << number
         << ": ctor name:" << name
         << endl;
}

Person::~Person()
{
    cout << __PRETTY_FUNCTION__
         << ": dtor number:" << number
         << ": dtor name:" << name
         << endl;
}

Person::Person(std::string n, int rnumber)
    : name(n),
      number(rnumber)
{
    cout << __PRETTY_FUNCTION__
         << ": number:" << number
         << ": name:" << name
         << endl;
}

Person::Person(const Person &r)
    : name(r.name)
{
    cout << __PRETTY_FUNCTION__
         << ":copy ctor number:" << number
         << ":copy ctor name:" << name
         << endl;
}

Person &Person::operator=(const Person &r)
{
    cout << __PRETTY_FUNCTION__
         << ": number:" << number
         << ": r.name:" << r.name
         << ": r.number:" << r.number
         << endl;
    name = r.name;
    return *this;
}

std::string Person::getName() const
{
    return name;
}

int Person::getNumber() const
{
    return number;
}