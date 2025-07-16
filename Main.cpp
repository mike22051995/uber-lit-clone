#include<iostream>
#include"Driver.hpp"
#include"Ride.hpp"
#include "location.hpp"
#include "Rider.hpp"
#include "BookingServices.hpp"
using namespace std;



int main(){
    BookingServices services;
    services.RegisterDriver(Driver("driver1",Location(2,3)));
    services.RegisterDriver(Driver("driver2",Location(0,2)));
    services.RegisterDriver(Driver("driver3",Location(2,5)));
    services.RegisterDriver(Driver("driver4",Location(6,1)));
    Rider rider("Mukesh",Location(10,10));
    Location destination(20,30);
    Ride* ride=services.BookRide(rider,destination);
    if(ride){
        ride->printdetails();
    }
    delete ride;
    return 0;




}