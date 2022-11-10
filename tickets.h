#ifndef TICKETS_H
#define TICKETS_H

class tickets{

 private:
 	int tickets_no;
 	string date;
 	int hall_no;
 	double price;
 	
 public:
 	void setTicketsNo();
 	int getTicketsNo();
 	void setDate();
 	string getDate();
 	void setHallNo();
 	int getHallNo();
 	void setPrice();
 	double getPrice();
};


#include "tickets.cpp"
#endif
