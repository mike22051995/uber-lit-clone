#include<string>
#include"Vehicle.hpp"
#pragma once
using namespace std;

class autov:public Vehicle{
    public:
    string getType()const override {return "auto";}
    double BaseFare() const override{return 20.0;}

};