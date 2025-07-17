#include<string>
#pragma once

#include "Vehicle.hpp"
#include "location.hpp"

using namespace std;
class Driver{
    public:
    string name;
    Vehicle* vehicle;

    Location location;
    Driver(const string& name, Location loc, Vehicle* v): name(name), location(loc),vehicle(v){}
    string getName()const {return name;}
    Location getLocation() const {return location;}
    Vehicle* getVehicle() const{return vehicle;}
  
    
};



