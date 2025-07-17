#include"Vehicle.hpp"
#pragma once

using namespace std;
class Car:public Vehicle{
    public:
    string getType()const override{return "Car"; }
    double BaseFare()const override { return 50.0;}
    
};