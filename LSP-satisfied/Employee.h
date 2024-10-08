#include <string>

class IEmployee
{
    public:
    virtual std::string Name() = 0;
};

class IManaged
{
    public:
    virtual std::string ReportsTo() = 0;
};

class IManage
{
    public:
    virtual void GiveRaise() = 0;
};

class Manager : public IManaged, public IEmployee, public IManage
{
    public:
    std::string Name() override;
    std::string ReportsTo() override;
    void GiveRaise() override;
};

class CEO : public IEmployee, public IManage
{
    public:
    std::string Name() override;
    void GiveRaise() override;
};

class Developer : public IEmployee, public IManaged
{
    public:
    std::string Name() override;
    std::string ReportsTo() override;
};