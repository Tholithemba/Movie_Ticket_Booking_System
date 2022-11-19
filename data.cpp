#include<fstream>
#include<iostream>
#include "data.h"
#include<iomanip>

using std::cout;
using std::string;
using std::ifstream;
using std::setw;


data::data(){
	menuHeading();
}

void data::menuHeading(){
	cout<<"-----------------------------------------"<<
		  "------------------------------------------\n";
	cout.setf(std::ios::left);
	cout.width(fixedWidth_1);
	cout<<"| Movie ID";
	cout.width(fixedWidth_2);
	cout<<"| Name";
	cout.width(fixedWidth_1);
	cout<<"| Format";
	cout.width(fixedWidth_2);
	cout<<"| Show Date";
	cout.width(fixedWidth_2);
	cout<<"| Show Time";
	cout.width(fixedWidth_1);
	cout<<"| Price";
	cout.width(fixedWidth_1);
	cout<<"| Seat |"<<std::endl;
		
	cout<<"-----------------------------------------"<<
		  "------------------------------------------\n";
}

void data::readData(){
	ifstream datafile;
	datafile.open("data.txt");
	if(datafile.is_open()){
		string getdata;
		while(getline(datafile,getdata)){
			std::stringstream ss(getdata);
			getline(ss,Movie_id,',');
			getline(ss,Name,',');
			getline(ss,Format,',');
			getline(ss,Show_Date,',');
			getline(ss,Show_Time,',');
			getline(ss,tempPrice,',');
			Price = stoi(tempPrice);
			getline(ss,tempSeat,',');
			Seat = stoi(tempSeat);
			viewMenu();
		}
	
		datafile.close();
		
	}
	
	cout<<"-----------------------------------------"<<
		  "------------------------------------------\n";
}

void data::viewMenu(){

	cout.setf(std::ios::left);
	cout.width(fixedWidth_1);
	cout<<"| "+Movie_id;
	cout.width(fixedWidth_2);
	cout<<"| "+Name;
	cout.width(fixedWidth_1);
	cout<<"| "+Format;
	cout.width(fixedWidth_2);
	cout<<"| "+Show_Date;
	cout.width(fixedWidth_2);
	cout<<"| "+Show_Time;
	cout.width(fixedWidth_1);
	cout<<"| R"+tempPrice;
	cout.width(7);
	cout<<"| "+tempSeat<<"|"<<std::endl;

}

