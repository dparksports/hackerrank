
#include <iostream>
#include "resource.h"

using namespace std;

Resource::Resource()
{
    cout << __PRETTY_FUNCTION__ << ":ctor name:" << name << endl;
}

Resource::Resource(const Resource &r)
{
    cout << __PRETTY_FUNCTION__ << ":copy ctor name:" << name << endl;
}

Resource::~Resource()
{
    cout << __PRETTY_FUNCTION__ << ":dtor name:" << name << endl;
}

std::string Resource::getName() const
{
    return name;
}
