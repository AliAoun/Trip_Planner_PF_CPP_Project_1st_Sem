/*

PF Lab Project Info:
Project Name: Trip Planner
Total 5 Members: 
1. Ali Aoun      (20101001-038) Yellow
2. Sikander      (20101001-023) Yellow
3. Zeeshan       (20101001-025) Yellow
4. Hammad        (20101001-166) Yellow
5. Farhan        (20101001-009) Yellow

*/


#include <iostream>
#include <string>
#include <fstream>

using namespace std;
//functions
void dis();
void trip();
void reg();
void login();
void details();
void services();


//global vars
string name, pass, uName, email, gender, logname, logpass,valname, valpass;
int phone, choice, cg;

int main() {
	againA:;
	dis();
	//menu
	cout<<"Enter choice (1 or 2):"<<endl;
	cout<<"1.Register\t\t2.Login"<<endl;
	cin>>choice;
	
	if (choice==1) {
		reg();
		dis();
		cout<<"You are successfully registered"<<endl;
		cout<<"Please login now!"<<endl;
		system("pause");
		login();
	}
	else if(choice==2){
		login();
		
	}
	else {
		//invalid input
		cout<<"Please enter a valid choice!"<<endl;
		system("pause");
		goto againA;
	}
	
	return 0;
	
}

void dis() {
	system("cls");
	cout<<"===================================================="<<endl;
	cout<<"\t"<<uName<<", Welcome to Trip Planner"<<"\t"<<endl;
	cout<<"===================================================="<<endl;
	cout<<"\n";
}

void trip() {
	int charges=0;
	
	string loc, tripDest, confirm;
	int dest;
	dis();
	cout<<"Please tell us where you live:"<<endl;
	cin>>loc;
	cout<<"Currently we offer trips to following locations:"<<endl;
	cout<<"1. Murree & Ayubia\n2. Abottabad & Nathia Galli\n3. Neelum Valley\n4. Toli Peer\n5. Swat\n6. Kumrat\n7. Chitral\n8. Naran & Kaghan"<<endl;
	cin>>dest;
	switch (dest) {
		case 1: {
			cout<<"You have selected location number "<<dest<<" for your trip. You will be charged Rs.3000/- per person."<<endl;
			cout<<"Please confirm your trip location by entering (Y) or if you want to change you can press (N)"<<endl;
			cin>>confirm;
			if(confirm=="y" || confirm=="Y") {
				cout<<"Confirmed!"<<endl;
				dest=1;
				charges=3000;
				ofstream l;
			  	string filename=uName;
				filename += "_location.txt";
			  	l.open( filename.c_str() );
			  	l <<uName<<" "<<dest<<" "<<charges<<endl;
			  	l.close();
			  	
			  	
			  	
				details();
			}
			else {
				trip();
			}
			break;
		}
		case 2: {
			cout<<"You have selected location number "<<dest<<" for your trip. You will be charged Rs.4000/- per person."<<endl;
			cout<<"Please confirm your trip location by entering (Y) or if you want to change you can press (N)"<<endl;
			cin>>confirm;
			if(confirm=="y" || confirm=="Y") {
				cout<<"Confirmed!"<<endl;
				dest=2;
				charges=4000;
				ofstream l;
			  	string filename=uName;
				filename += "_location.txt";
			  	l.open( filename.c_str() );
			  	l <<uName<<" "<<dest<<" "<<charges<<endl;
			  	l.close();
			  	
				details();
			}
			else {
				trip();
			}
			break;
		}
		case 3: {
			cout<<"You have selected location number "<<dest<<" for your trip. You will be charged Rs.12000/- per person."<<endl;
			cout<<"Please confirm your trip location by entering (Y) or if you want to change you can press (N)"<<endl;
			cin>>confirm;
			if(confirm=="y" || confirm=="Y") {
				cout<<"Confirmed!"<<endl;
				dest=3;
				charges=12000;
				ofstream l;
			  	string filename=uName;
				filename += "_location.txt";
			  	l.open( filename.c_str() );
			  	l <<uName<<" "<<dest<<" "<<charges<<endl;
			  	l.close();
			  	
				details();
			}
			else {
				trip();
			}
			break;
		}
		case 4: {
			cout<<"You have selected location number "<<dest<<" for your trip. You will be charged Rs.6500/- per person."<<endl;
			cout<<"Please confirm your trip location by entering (Y) or if you want to change you can press (N)"<<endl;
			cin>>confirm;
			if(confirm=="y" || confirm=="Y") {
				cout<<"Confirmed!"<<endl;
				dest=4;
				charges=6500;
				ofstream l;
			  	string filename=uName;
				filename += "_location.txt";
			  	l.open( filename.c_str() );
			  	l <<uName<<" "<<dest<<" "<<charges<<endl;
			  	l.close();
			  	
				details();
			}
			else {
				trip();
			}
			break;
		}
		case 5: {
			cout<<"You have selected location number "<<dest<<" for your trip. You will be charged Rs.9000/- per person."<<endl;
			cout<<"Please confirm your trip location by entering (Y) or if you want to change you can press (N)"<<endl;
			cin>>confirm;
			if(confirm=="y" || confirm=="Y") {
				cout<<"Confirmed!"<<endl;
				dest=5;
				charges=9000;
				ofstream l;
			  	string filename=uName;
				filename += "_location.txt";
			  	l.open( filename.c_str() );
			  	l <<uName<<" "<<dest<<" "<<charges<<endl;
			  	l.close();
			  	
				details();
			}
			else {
				trip();
			}
			break;
		}
		case 6: {
			cout<<"You have selected location number "<<dest<<" for your trip. You will be charged Rs.14000/- per person."<<endl;
			cout<<"Please confirm your trip location by entering (Y) or if you want to change you can press (N)"<<endl;
			cin>>confirm;
			if(confirm=="y" || confirm=="Y") {
				cout<<"Confirmed!"<<endl;
				dest=6;
				charges=14000;
				ofstream l;
			  	string filename=uName;
				filename += "_location.txt";
			  	l.open( filename.c_str() );
			  	l <<uName<<" "<<dest<<" "<<charges<<endl;
			  	l.close();
			  	
				details();
			}
			else {
				trip();
			}
			break;
		}
		case 7: {
			cout<<"You have selected location number "<<dest<<" for your trip. You will be charged Rs.15000/- per person."<<endl;
			cout<<"Please confirm your trip location by entering (Y) or if you want to change you can press (N)"<<endl;
			cin>>confirm;
			if(confirm=="y" || confirm=="Y") {
				cout<<"Confirmed!"<<endl;
				dest=7;
				charges=15000;
				ofstream l;
			  	string filename=uName;
				filename += "_location.txt";
			  	l.open( filename.c_str() );
			  	l <<uName<<" "<<dest<<" "<<charges<<endl;
			  	l.close();
			  	
				details();
			}
			else {
				trip();
			}
			break;
		}
		case 8: {
			cout<<"You have selected location number "<<dest<<" for your trip. You will be charged Rs.20000/- per person."<<endl;
			cout<<"Please confirm your trip location by entering (Y) or if you want to change you can press (N)"<<endl;
			cin>>confirm;
			if(confirm=="y" || confirm=="Y") {
				cout<<"Confirmed!"<<endl;
				dest=8;
				charges=20000;
				ofstream l;
			  	string filename=uName;
				filename += "_location.txt";
			  	l.open( filename.c_str() );
			  	l <<uName<<" "<<dest<<" "<<charges<<endl;
			  	l.close();
			  	
			  	
				details();
			}
			else {
				trip();
			}
			break;
		}
		default: {
			trip();
			break;
		}
		
	}
	
}

void reg() {
	//register
	cout<<"NEW REGISTRATION : "<<endl;
	ofstream info;
	cout<<"Enter username (without spaces): "<<endl;
	cin>>uName;
	cout<<"Enter password (without spaces): "<<endl;
	cin>>pass;
	cout<<"Enter name: "<<endl;
	cin.ignore();
	getline(cin,name);
	cout<<"Enter email: "<<endl;
	cin>>email;
	again1:;
	cout<<"Choose gender (1 or 2): "<<endl;
	cout<<"1. Male\t 2. Female"<<endl;
	cin>>cg;
	if(cg==1) {
		gender="Male";
	}
	else if(cg==2) {
		gender="Female";
	}
	else {
		cout<<"Invalid choice selected. Please select again."<<endl;
		goto again1;
	}
	cout<<"Enter phone number: "<<endl;
	cin>>phone;
	

	string filename=uName;
	filename += "_info.txt";
  	info.open( filename.c_str() );
	
  	info<<uName<<" "<<pass<<" "<<name<<" "<<email<<" "<<gender<<" "<<phone<<endl;
  	info.close();
  	
	cout<<"Registration complete!"<<endl;
	
}

void login() {
	//	login
	cout<<"Enter username (without spaces):"<<endl;
	cin>>logname;
	cout<<"Enter password (without spaces):"<<endl;
	cin>>logpass;

	string filename=logname;

	ifstream input((logname+"_info.txt").c_str());

	if(!input) {
		cout<<"User doesn't exist. Please register your account first!"<<endl;
		system("pause");
		main();
	}
	
	if (input >> uName && input >> pass && uName == logname && pass == logpass) { 
		cout<<"Login successful"<<endl;
		trip();
		
	}
	else {
		cout<<"Username or Password doesn't exist. Please try again."<<endl;
		system("pause");
		main();
	}
	
	input.close();
}

void details() {
	int seats, dest, charges, newcharges;
	dis();
	
	string filename=logname;
	ifstream input((logname+"_location.txt").c_str());
	input>>uName>>dest>>charges;
	newcharges=charges;
	input.close();
	cout<<"Charges are:"<<newcharges<<endl;
	
	cout<<"Dear, "<<name<<" you have sucesfully selected your destination. Please complete the trip request by answering below question: "<<endl;
	cout<<"How many seats do you want to book (16 max): "<<endl;
	cin>>seats;
	if(seats>0 && seats<=16) {
		charges=newcharges*seats;
		ofstream f;
	  	string filename=uName;
		filename += "_details.txt";
	  	f.open( filename.c_str() );
	  	f <<uName<<" "<<seats<<" "<<charges<<endl;
	  	f.close();
	  	
	}
	else {
		details();
	}
	
	services();
	
}

void services() {
	int serv;
	int charges, seats, sercharges;
	
	string filename=logname;
	ifstream input((logname+"_details.txt").c_str());
	input>>uName>>seats>>charges;
	sercharges=charges;
	input.close();
	cout<<"Charges without services : "<<sercharges<<endl;
	
	again3:;
	cout<<"We offer more services do you want to avail them? Enter 1 for yes and 0 for No: "<<endl;
	cin>>serv;
	if(serv==1) {
		again2:;
		dis();
		int avail;
		cout<<"Select the service you want to avail - Choose b/w (1-4): "<<endl;
		cout<<"1. Photography (Rs. 500/-)\n2. Accomodation (Rs. 800/- per person)\n3. Breakfast, Lunch & Dinner (Rs. 1500/- per person)\n4. Travel Guide (Rs. 1000/-)\n5. Back"<<endl;
		cin>>avail;
		switch(avail) {
			case 1: {
				cout<<"Photography has been added to your services!"<<endl;
				charges=charges+500;
				cout<<"New Charges with services are : "<<charges<<endl;
				
				/////////////////////////////////////
				
				
				ofstream f;
			  	string filename=uName;
				filename += "_services.txt";
			  	f.open( filename.c_str() );
			  	f <<uName<<" "<<seats<<" "<<charges<<endl;
			  	f.close();
				
				
				/////////////////////////////////////
				break;
			}
			case 2: {
				cout<<"Accomodation has been added to your services!"<<endl;
				charges=charges+800;
				cout<<"New Charges with services are : "<<charges<<endl;
				/////////////////////////////////////
				
				
				ofstream f;
			  	string filename=uName;
				filename += "_services.txt";
			  	f.open( filename.c_str() );
			  	f <<uName<<" "<<seats<<" "<<charges<<endl;
			  	f.close();
				
				
				/////////////////////////////////////
				break;
			}
			case 3: {
				cout<<"Breakfast, Lunch & Dinner has been added to your services!"<<endl;
				charges=charges+1500;
				cout<<"New Charges with services are : "<<charges<<endl;
				/////////////////////////////////////
				
				
				ofstream f;
			  	string filename=uName;
				filename += "_services.txt";
			  	f.open( filename.c_str() );
			  	f <<uName<<" "<<seats<<" "<<charges<<endl;
			  	f.close();
				
				
				/////////////////////////////////////
				break;
			}
			case 4: {
				cout<<"Travel Guide has been added to your services!"<<endl;
				charges=charges+1000;
				cout<<"New Charges with services are : "<<charges<<endl;
				/////////////////////////////////////
				
				
				ofstream f;
			  	string filename=uName;
				filename += "_services.txt";
			  	f.open( filename.c_str() );
			  	f <<uName<<" "<<seats<<" "<<charges<<endl;
			  	f.close();
				
				
				/////////////////////////////////////
				break;
			}
			case 5: {
				goto again3;
				break;
			}
			default: {
				cout<<"Please Enter Correct Information - Only Choose b/w (1-4) "<<endl;
				system("pause");
				goto again2;
				break;
			}
		}
		goto again3;
	} else {
		dis();
		cout<<"Thanks for choosing our service."<<endl;
		cout<<"Right now we offer our service to Islamabad, Karachi & Lahore. You have to reach to our station by yourself."<<endl;
		cout<<"You can contact on our number for help or information. +92-312-3456789 and +92-398-7654321"<<endl;
		cout<<"Total bill = Rs. "<<charges<<" /-"<<endl;
		ofstream c;
	  	string filename=uName;
		filename += "_charges.txt";
	  	c.open( filename.c_str() );
	  	c <<uName<<" final charges are "<<charges<<endl;
	  	c.close();
	}
	
}

