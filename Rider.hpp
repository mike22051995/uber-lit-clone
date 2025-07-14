#include<string>
#include "location.hpp"
#pragma once
using namespace std;
class Rider{
    public:
    string name;
    Location location;
    Rider(const string& name,Location loc):name(name),location(loc){}
    string getName() const {return name; }
    Location getLocation()const {return location;}
};

