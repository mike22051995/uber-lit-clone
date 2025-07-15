#pragma once
#include<vector>
#include<climits>
#include"Driver.hpp"
#include "Rider.hpp"
#include "Ride.hpp"
#include "location.hpp"
using namespace std;
class BookingServices{
    vector<Driver>drivers;
    public:
    void RegisterDriver(const Driver& d){
        drivers.push_back(d);
    }
    Driver* FindNearestDriver(Location riderloc){
        double minDistance=INT_MAX;
        Driver* nearest=nullptr;
        for(auto &driver:drivers){
            double distance=calculatedistance(riderloc, driver.getLocation());
            if(distance<minDistance){
                minDistance=distance;
                nearest=&driver;
            }

        }
        return nearest;
    }
    Ride* BookRide(const Rider &rider,Location dest){
        Driver* driver=FindNearestDriver(rider.getLocation());
        if(!driver){
            cout<<"nearby drivers are not available"<<endl;
            return nullptr;
        }
        Ride * ride=new Ride(*driver,rider,rider.getLocation(),dest);
        return ride;
    }
    private:
    double calculatedistance(Location a,Location b){
        return sqrt(pow(a.xcor-b.xcor,2)+pow(a.ycor-b.ycor,2));

    }
};