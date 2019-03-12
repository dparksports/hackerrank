
#include <string>

class Resource 
{
private:
    std::string name;

    Resource(const Resource& r);
    Resource& operator= (const Resource& r);

public:
    Resource();
    ~Resource();
    std::string getName() const;
};