#include<string>
#pragma once
#include<iostream>
#include<cmath>
#include "location.hpp"
#include"Driver.hpp"
#include"Rider.hpp"
using namespace std;
class Ride{
    Driver* driver;
    Rider rider;
    Location source;
    Location destination;
    double distance;
    double fare=0;
    string status="in progress";
   
    public:
    Ride( Driver* d,const Rider& r, Location src, Location dest):driver(d),rider(r),source(src),destination(dest){
        distance=calculateDistance(src,dest);
        fare=fare+(driver->getVehicle()->BaseFare())+15*distance;
    
        
    }
    private:
    double calculateDistance(Location a, Location b){
        return distance=sqrt(pow(a.xcor-b.xcor,2)+pow(a.ycor-b.ycor,2));
    }
    public:
    void completed(){
        status="completed";
        
    }

    public:
    void printdetails(){
        cout<<"Ride is booked by "<<rider.getName()<<endl;
        cout<<"..allocated driver:="<<driver->getName()<<endl;
        cout<<"your vehicle type is "<<driver->getVehicle()->getType()<<endl;
        cout<<" total travelling distance "<<distance<<endl;
        cout<<status<<endl;
        cout<<"please pay the driver a total of :INR:"<<fare<<endl;

    }
};