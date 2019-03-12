#include <string>
#include <istream>

class Person
{
private:
  std::string name;
  int number;

  friend std::ostream &operator<<(std::ostream &os, Person &v)
  {
    return os
           << ":number:" << v.number
           << ":name:" << v.name;
  }

public:
  Person();
  Person(std::string n, int rnumber);
  ~Person();
  Person(const Person &r);
  Person &operator=(const Person &r);
  std::string getName() const;
  int getNumber() const;
};
