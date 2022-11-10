#include<iostream>

int main(){
	std::cout<<"Welcome to Movie Ticket Booking System \n"<<"\n";
	
	std::cout<<"Menu\n"<<"1. Book Ticket\n"<<"2. Show My Ticket\n"
			 <<"3. Check Seat\n"<<"4. Add new Movie\n"
			 <<"5. Edit Movie\n"<<"6. Delete Movie\n"
			 <<"7. Show Movie List\n"<<"8. Exit\n";
	
	
	int opt;
	std::cout<<"Make one selection listed above: ";
	std::cin>>opt;
	
	std::cout<<"you have selected: "<<opt<<"\n";
	
	return 0;
}
