#include <string>
#include <iostream>
//using namespace iostream::cout;
//using namespace std::string;

class Bob {
private:
    std::string first;
    std::string last;

public:
    Bob()=default;
    Bob(std::string first, std::string last)
    : 
        first(first),
        last(last)
    {

    }

    const std::string& name() const {
        return last;
    }

    const std::string& mutableName() const {
        return first;
    }
/*
    int someNumber() const {
        return 0;
    }
*/
    void inspect() const {

    }
    void mutate() {

    }
};

void update(const Bob& person) {
//    person.mutableName() = "new name";
}

void f(Bob& updateBob, const Bob& readBob) {
    updateBob.inspect();
    updateBob.mutate();

    readBob.inspect();
    //readBob.mutate();
}
void alias(const int *x1, int *x2) {
    int a = *x1;
    *x2 = 7;
    int b = *x1;

    if (a != b) {
        std::cout << "a=" << a << " b=" << b << std::endl;        
    } 
}


int main() {
    const Bob a;
    Bob b;
    Bob c;

    Bob* p;
    Bob& r = b;
    r = c;

//    const Bob** q = &p;

 //   *q = &a;
    p->mutate();

    int x = 31415156;
    alias(&x, &x);

    return 0;
}