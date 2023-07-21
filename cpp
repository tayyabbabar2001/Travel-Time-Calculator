#include <iostream>
using namespace std; 

int main(){
	float distance, speed, signals, breakers, time, total, trasignal, spebreakers;
	// total variable is trasignal + spebreakers time added
	// trasignal variable is total signals * 2, output is assigned to trasignal variable
	// spebreakers variable is total breakers  * 1, output is assigned to spebreaker variable
	
	cout<<"Enter distance: ";
	cin >>distance;
	cout<<"Enter Average speed: ";
	cin >>speed;
	cout<<"No. of traffic signals: ";
	cin >>signals;
	cout<<"No. of speed breakers: ";
	cin >>breakers;
	
	time= distance / speed;
	trasignal= signals * 2;
	spebreakers= breakers * 1;
	total= trasignal + spebreakers;
	
	cout<<"The total time taken to reach the destination is "<<time<<" Hrs "<< total<<" Mins";
		
}
