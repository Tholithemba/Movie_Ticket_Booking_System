#ifndef THEATRE_H
#define THEATRE_H
#include<string>

class theatre{
 private:
 	int th_id;
 	string th_name;
 	string lacation;
 	int seat_id;
 	string seat_name;
 	int no_of_seats;
 	
 public:
 	theatre();
 	void setTheatreName();
 	string getTheatreName();
 	void setLocation();
 	string getLocation();
 	void setSeatName();
 	string getSeatName();
};

#include "theatre.cpp"
#endif
