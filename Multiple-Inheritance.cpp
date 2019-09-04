/*
=========================================================================================
Assignment : MULTIPLE INHERITANCE
Name : Gaurav Ghati
class : SE 10
Batch : F 10

Problem Statement :
Create employee bio-data using following classes
   1) Personal record
   2) Professional record
   3) Academic record
Assume appropriate data members and member function to accept required
data & print bio-data. Create bio-data using multiple inheritance using C++.
==========================================================================================
*/

#include<iostream>
using namespace std;

class Personal{
	protected:
	char name[20];
	char dob[10];
	char blood[5];
};

class Professional{
	protected:
	double experience;
	int noOfSkills;
};

class Academic{
	protected:
	int percent;
};

class Resume : private Personal, public Professional, public Academic{
	public:
	void acceptData();
	void display();
};

void Resume :: acceptData(){
	cout<<"\nEnter Name : ";
	cin>>name;
	cout<<"\nEnter Date of Birth : ";
	cin>>dob;
	cout<<"\nEnter blood group : ";
	cin>>blood;
	cout<<"\nEnter years of experience : ";
	cin>>experience;
	cout<<"\nEnter Number of Skills : ";
	cin>>noOfSkills;
	cout<<"\nEnter Degree Percentage : ";
	cin>>percent;
}

void Resume :: display(){
	
}

int main(){
	
}
