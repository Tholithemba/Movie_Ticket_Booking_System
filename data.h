#ifndef DATA_H
#define DATA_H

using std::string;

class data{
	
	public:
		data();
		void readData();
		void menuHeading();
		void viewMenu();
		
	private:
		string Movie_id;
		string Name;
		string Format;
		string Show_Date;
		string Show_Time;
		string tempPrice;
		double Price;
		string tempSeat;
		int Seat;
		int fixedWidth_1 = 10;
		int fixedWidth_2 = 15;
	
};

#include "data.cpp"
#endif
