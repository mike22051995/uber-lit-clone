#include<string>
#pragma once


using namespace std;


class Vehicle{
    public:
    virtual string getType() const=0;
    virtual double BaseFare() const=0;
    virtual ~Vehicle()=default;
};

