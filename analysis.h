#include <string>
#include <memory>

class IAnalysis
{
    std::string _type;
    public:
    IAnalysis(std::string type) : _type(std::move(type)) {};
        std::string type() const;
        virtual IAnalysis* clone() const= 0;
        virtual double multiplier() const = 0;
};

class Static : public IAnalysis
{
    public:
        Static() : IAnalysis("static") {};
        virtual double multiplier() const;
        virtual IAnalysis* clone() const;
};

class Ritz : public IAnalysis
{
    public:
        Ritz() : IAnalysis("ritz") {};
        virtual double multiplier() const;
        virtual IAnalysis* clone() const;
};

class TimeHistory : public IAnalysis
{
    public:
        TimeHistory() : IAnalysis("static") {};
        virtual double multiplier() const;
        virtual IAnalysis* clone() const;
};
