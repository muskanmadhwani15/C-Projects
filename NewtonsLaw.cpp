//Muskan
// 202232
// sept 21 
// CMPT275

#include <iostream>
using namespace std;

int main() {
	
	//name your identifiers along with the correct data type 
	double mass1;
	double mass2;
	double distance; 
	double force; 
	
	//Type what the computer would ask 
	cout << "what is the first value of mass?";
	//Type the identifier so the user has to input the value
	cin >> mass1;
	
	cout << "what is the second value of mass?";
	cin >> mass2;
	
	cout << "what is the distance between the bodies";
	cin >> distance;
	
	//write the formula for force 
	force = (6.67428e-11)*((mass1*mass2)/(distance*distance));
		
	cout << "The force between the bodies is  " << force << endl; 

	
	return 0; 
	
	}
