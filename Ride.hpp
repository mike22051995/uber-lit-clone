#include<string>
#include<iostream>
#include<cmath>
#include "location.hpp"
#include"Driver.hpp"
#include"Rider.hpp"
using namespace std;
class Ride{
    Driver driver;
    Rider rider;
    Location source;
    Location destination;
    double distance;
    public:
    Ride( const Driver & d,const Rider& r, Location src, Location dest):driver(d),rider(r),source(src),destination(dest){
        distance=calculateDistance(src,dest);
    }
    private:
    double calculateDistance(Location a, Location b){
        return distance=sqrt(pow(a.xcor-b.xcor,2)+pow(a.ycor-b.ycor,2));
    }
    void printdetails(){
        cout<<"Ride is booked by "<<rider.getName()<<endl;
        cout<<"..allocated driver:="<<driver.getName()<<endl;
        cout<<" total travelling distance "<<distance<<endl;

    }
};