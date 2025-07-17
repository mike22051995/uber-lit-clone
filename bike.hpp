#include<string>
#include"Vehicle.hpp"
#pragma once
using namespace std;

class Bike:public Vehicle{
    public:
    string getType() const override{return "BIKE";}
    double BaseFare() const override{return 30.0;}

};
