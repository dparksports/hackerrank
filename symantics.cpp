
#include <string>
#include <memory>
#include <cmath>
#include <numeric>
#include <complex>
#include <chrono>
#include <ctime>
#include <random>
#include <regex>
#include <iostream>
#include <exception>
#include "person.h"

//using namespace std;

int main()
{
    Person a = Person("Tony", 987);
    std::cout << a << std::endl;

    try
    {
        Person v;
        std::cout << v << std::endl;

        v = Person("Ephemeral", 123);
        std::cout << v << std::endl;

        Person &r = v;
        Person *p = &r;

        std::unique_ptr<Person> uptr = std::make_unique<Person>("UniquePtr", 234);
        std::cout << uptr.get() << std::endl;
        std::shared_ptr<Person> sptr = std::make_shared<Person>("SharedPtr", 345);
        std::cout << sptr.get() << std::endl;

        throw std::runtime_error("runtime exception");
        std::cout << r << std::endl;
    }
    catch (std::bad_exception &e)
    {
        std::cerr << "Caught " << e.what() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cerr << "Caught " << e.what() << std::endl;
    }
    return 0;
}