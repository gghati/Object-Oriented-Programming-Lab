/*
=======================================================================
Assignment : EXCEPTION HANDLING
Name : Gaurav Ghati
class : SE 10
Batch : F 10

Problem Statement :
Write a program in C++ which includes the code for following operations :
i. A function to read two double type numbers from keyboard
ii. A function to calculate the division of these two numbers
iii. A try block to detect and throw an exception if the condition
“divide-by-zero”occurs
iv. Appropriate catch block to handle the exceptions thrown
=======================================================================
*/

#include<iostream>
using namespace std;

class Div
{
	private :	double dividend,divisor;
	
	public  :	void getData()
			{
				cout<<"\nEnter Dividend : ";
				cin>>dividend;
				cout<<"Enter Divisor  : ";
				cin>>divisor;
			}
			
			void showData()
			{
				cout<<"\nDividend = "<<dividend;
				cout<<"\nDivisor  = "<<divisor<<endl;
			}
	
			double div()
			{
				if(divisor==0)
					throw(divisor);
				else
					return(dividend/divisor);
			}
};

int main()
{
	Div D;
	int ch;
	double d;

	do
	{	cout<<"\nMenu :\n1. Enter Values.\n2. Show Values.\n3. Compute Division\n4. Exit\nEnter your choice : ";
		cin>>ch;
		switch(ch)
		{
			case 1:	cout<<"\nGET DATA :";
				D.getData();
				break;

			case 2: cout<<"\nSHOW DATA :";
				D.showData();
				break;

			case 3:	try
				{
					d = D.div();
					cout<<"\nDivision = "<<d<<endl;
				}
				catch(double e)
				{
					cout<<"\nCannot Divide Number by ZERO..!!\n";
				}
				break;

			case 4:	break;

			default:cout<<"\nEnter valid choice (1-4)...!!!\n";
		}
	}while(ch!=4);
	return 0;
}

/*

Menu :
1. Enter Values.
2. Show Values.
3. Compute Division
4. Exit
Enter your choice : 1

GET DATA :
Enter Dividend : 0
Enter Divisor  : 0

Menu :
1. Enter Values.
2. Show Values.
3. Compute Division
4. Exit
Enter your choice : 2

SHOW DATA :
Dividend = 0
Divisor  = 0

Menu :
1. Enter Values.
2. Show Values.
3. Compute Division
4. Exit
Enter your choice : 3

Cannot Divide Number by ZERO..!!

Menu :
1. Enter Values.
2. Show Values.
3. Compute Division
4. Exit
Enter your choice : 1

GET DATA :
Enter Dividend : 4
Enter Divisor  : 8

Menu :
1. Enter Values.
2. Show Values.
3. Compute Division
4. Exit
Enter your choice : 3

Division = 0.5

Menu :
1. Enter Values.
2. Show Values.
3. Compute Division
4. Exit
Enter your choice : 4

*/
