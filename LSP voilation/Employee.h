#include <iostream>
#include <string>

class IEmployee
{
    public:
    virtual std::string Name() = 0;
    virtual std::string ReportsTo() = 0;
    virtual void GiveRaise() = 0;
};

class Developer : public IEmployee
{
    public:
    std::string Name() override;
    std::string ReportsTo() override;
    void GiveRaise() override;
};

class Manager : public IEmployee
{
    public:
    std::string Name() override;
    std::string ReportsTo() override;
    void GiveRaise() override;
};

class CEO : public IEmployee
{
    public:
    std::string Name() override;
    std::string ReportsTo() override;
    void GiveRaise() override;
};