/*
==================================================================================
Assignment : Weather Report
Name : Gaurav Ghati
class : SE 10
Batch : F 10
Problem Statement : Create a class named WeatherReport that holds a dialy weather report with data members day_of_month, highTemp, lowTemp, amountRain, amountSnowfall. Use different types of constructors to initialize the object. Also include a function that prompts the user and sets values for each field so that you can overide the default values. Write a menu driven program in c++ with option to enter data and generate monthly report that displays average of each attribute (The constructor initialize the fields with default values : 99 for day_of_month, 999 for highTemp, -999 for lowTemp, and 0 for amountRain and amountSnowfall)
==================================================================================
*/

#include<iostream>
#include <iomanip>
using namespace std;

int i=0;

class WeatherReport {
	 int dayOfMonth;
	 int highTemp;
	 int lowTemp;
	 int amountRain;
	 int amountSnowfall;

   public:

		 static double sum[4];
		 int n = 0;

		 WeatherReport(){
			 dayOfMonth = 99;
			 highTemp = 999;
			 lowTemp = -999;
			 amountRain = 0;
			 amountSnowfall = 0;
		 }

		 WeatherReport(int dom, int ht, int lt){
			 dayOfMonth = dom;
			 highTemp = ht;
			 lowTemp = lt;
		 }

		 WeatherReport(int dom, int ht, int lt, int ar, int as){
			  dayOfMonth = dom;
				highTemp = ht;
				lowTemp = lt;
				amountRain = ar;
				amountSnowfall = as;
		 }
		 void update();
		 void report();
		 void displayRow(int);
		 static void avg();
};

double WeatherReport :: sum[4];

void WeatherReport :: displayRow(int i){
	cout<<setw(3)<<i+1<<setw(20)<<dayOfMonth<<setw(20)<<highTemp<<setw(20)<<lowTemp<<setw(20)<<amountRain<<setw(20)<<amountSnowfall<<"\n";
}

void WeatherReport :: update(){
	cout<<"Enter Day of Month : ";
	cin>>dayOfMonth;
	cout<<"High Temperature : ";
	cin>>highTemp;
	cout<<"Low Temperature : ";
	cin>>lowTemp;
	cout<<"Amount Rain : ";
	cin>>amountRain;
	cout<<"Amount SnowFall : ";
	cin>>amountSnowfall;
}

void WeatherReport :: report(){
	sum[0] += highTemp;
	sum[1] += lowTemp;
	sum[2] += amountRain;
	sum[3] += amountSnowfall;
}

void WeatherReport :: avg(){
	for(i=0;i<5;i++){
		sum[i] = sum[i]/30;
	}
	cout<<setw(7)<<"Average"<<setw(36)<<sum[0]<<setw(20)<<sum[1]<<setw(20)<<sum[2]<<setw(20)<<sum[3]<<"\n";
	cout<<"----------------------------------------------------------------------------------------------------------------\n";
}

void printMenu(){
	cout<<"1. Update values "<<"\n";
	cout<<"2. Exit"<<"\n";
}

void displayReport(WeatherReport mon[30]){
	 cout<<setw(60)<<"Monthly Report \n";
	 cout<<"---------------------------------------------------------------------------------------------------------------\n";
	 cout<<setw(7)<<"S.No. "<<setw(20)<<" dayOfMonth "<<setw(20)<<" highTemp "<<setw(20)<<" lowTemp "<<setw(20)<<" amountRain "<<setw(20)<<" amountSnowfall\n";
	 cout<<"---------------------------------------------------------------------------------------------------------------\n";
	 for(int i=0; i<30; i++){
		  mon[i].displayRow(i);
			mon[i].report();
	 }
	 cout<<"----------------------------------------------------------------------------------------------------------------\n";
	 mon[29].avg();
 }

int main(){

	 WeatherReport month[30];
	 int choice, day;
	 displayReport(month);
	 int entry = 1;

	 while(entry==1){
		 printMenu();
		 cout<<"Enter Choice : "<<"\n";
		 cin>>choice;
		 switch(choice){
		   case 1 : cout<<"Enter updating day : \n";
			          cin>>day;
								month[day-1].update();
								displayReport(month);
								break;

			 case 2: entry = 0;
		 }
	 }
	 return 0;
}
