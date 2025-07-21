#include<iostream>

#include"Driver.hpp"
#include"Ride.hpp"
#include "location.hpp"
#include "Rider.hpp"
#include "BookingServices.hpp"
#include"VehicleFactory.hpp"
using namespace std;



int main(){
    BookingServices services;
    services.RegisterDriver(Driver("driver1",Location(2,3),VehicleFactory::getVehicle()));
    services.RegisterDriver(Driver("driver2",Location(0,2),VehicleFactory::getVehicle()));
   
    Rider rider("Mukesh",Location(4,6));
    Location destination(20,10);
    cout<<"__________BOOKING THE RIDE___________"<<endl;
    Ride* ride=services.BookRide(rider,destination);
    if(ride){
        
        ride->completed();
        ride->printdetails();
    }
    else{
        cout<<"no driver is found"<<endl;
    }
    delete ride;
    return 0;




}