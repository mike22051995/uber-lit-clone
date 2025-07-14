#include<string>
#pragma once
#include"location.hpp"

using namespace std;
class Driver{
    public:
    string name;
    Location location;
    Driver(const string& name, Location loc): name(name), location(loc){}
    string getName()const {return name;}
    Location getLocation() const {return location;}
};



