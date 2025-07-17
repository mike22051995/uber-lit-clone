#include<string>
#pragma once
#include"Car.hpp"
#include"autov.hpp"
#include <cstdlib>
#include"bike.hpp"
using namespace std;

class VehicleFactory{
    public:
    static Vehicle* getVehicle(){
        int r=rand()%3;
        if(r==0) return new Car();
        else if(r==1) return new Bike();
        else{
            return new autov();
        }
    }
};