/* Weather Report
 * Roll No. : 23223
 * Batch : F10
 * Date :


  * Problem Defination :
	 Create a class named WeatherReport that holds a dialy weather report with data members day_of_month, highTemp,
	 lowTemp, amountRain, amountSnowfall. Use different types of constructors to initialize the object. Also include
	 a function that prompts the user and sets values for each field so that you can overide the default values.
	 Write a menu driven program in c++ with option to enter data and generate monthly report that displays average
	 of each attribute (The constructor initialize the fields with default values : 99 for day_of_month, 999 for highTemp
   -999 for lowTemp, and 0 for amountRain and amountSnowfall)
 */

#include<iostream>
using namespace std;

class WeatherReport {
	 int dayOfMonth;
	 int highTemp;
	 int lowTemp;
	 int amountRain;
	 int amountSnowfall;

   public:
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
		 void printRow(int);
		 void displayArr(WeatherReport[]);
};

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

void WeatherReport :: printRow(int i){
	cout<<(i+1)<<"\t\t"<<dayOfMonth<<"\t\t"<<highTemp<<"\t\t"<<lowTemp<<"\t\t"<<amountRain<<"\t\t"<<amountSnowfall<<"\n";
}

void printMenu(){
	cout<<"1. Update values "<<"\n";
	cout<<"2. Exit"<<"\n";
}

void WeatherReport :: displayArr(WeatherReport mon[20]){
	 int sum[4] = {0,0,0,0};
	 float avg[4] = {0.0 , 0.0 , 0.0, 0.0};
	 cout<<"S.No. \t dayOfMonth \t highTemp \t lowTemp \t amountRain \t amountSnowfall\n";
	 cout<<"---------------------------------------------------------------------------------------------------\n";
	 for(int i=0; i<20; i++){
		  mon[i].printRow(i);
			sum[0] += mon[i].highTemp;
			sum[1] += mon[i].lowTemp;
			sum[2] += mon[i].amountRain;
			sum[3] += mon[i].amountSnowfall;
	 }
	 cout<<"----------------------------------------------------------------------------------------------------\n";
	 for(int i=0; i<4; i++){
		 avg[i] = (float)sum[i]/20;
	 }
	 cout<<"Average      \t\t\t"<<avg[0]<<"\t\t"<<avg[1]<<"\t\t"<<avg[2]<<"\t\t"<<avg[3]<<"\n";
	 cout<<"----------------------------------------------------------------------------------------------------\n";
}

int main(){

	 WeatherReport month[20];
	 int number, day;
	 month[0].displayArr(month);
	 int entry = 1;


	 while(entry==1){
		 printMenu();
		 cout<<"Enter Choice : "<<"\n";
		 cin>>number;
		 switch(number){
		   case 1 : cout<<"Enter updating day : \n";
			          cin>>day;
								month[day-1].update();
								month[day-1].displayArr(month);
								break;

			 case 2: entry = 0;
		 }
	 }
	 return 0;
}
