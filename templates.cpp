/*
=========================================================================================
Assignment : GENERIC PROGRMMING : TEMPLATES
Name : Gaurav Ghati
class : SE 10
Batch : F 10

Problem Statement :

Write a program in C++ using function/class template to read two matrices of
different data types such as integers and floating point values and perform simple
1arithmetic operations on these matrices separately and display it.and imaginary part. 
Provide default and parameterized constructors. 
Write a program to perform arithmetic operations of two complex numbers using operator overloading.

i. Addition and subtraction using friend functions.
ii. Multiplication and division using member functions.

==========================================================================================
*/

#include<iostream>
using namespace std;

template<class T> class Matrix{
	private:
		T **mat;
		int row;
		int col;
	public:
		Matrix();
		Matrix(int row, int col);
		void insert(int row, int col);
		void display();
		friend Matrix operator+(Matrix a, Matrix b);
		friend Matrix operator*(Matrix a, Matrix b);
};

template <class T>
void Matrix :: insert(int row, int col){
	this->row = row;
	this->col = col;
	for(int i=0; i<row; i++){
		for(j=0; j<col; j++){
			cout<<"Enter Element["<< i <<"]"<<"["<< j <<"] : ";
			cin>>mat[i][j];
		}
	}
}

template <class T>
void Matrix :: display(){
	for(int i=0; i<row; i++){
		for(j=0; j<col; j++){
			cout<<mat[i][j]<<" ";
		}
		cout<<"\n";
	}	
}
 
 
friend Matrix operator+(Matrix a, Matrix b){
	Matrix c;
	if(a.row == b.row && a.col == b.col){
		for(int i=0; i<row; i++){
			for(j=0; j<col; j++){
				c[i][j] = a[i][j] + b[i][j];
			}
		}
	} else { 
		cout<<"Can't Add\n";
	}
		
	return c;
}


friend Matrix operator*(Matrix a, Matrix b){
	Matrix c;
	if(a.col==b.row){
		for(int i=0; i<a.row; i++){
			for(j=0; j<a.col; j++){
				for(int k=0; k<a.col; k++){
					c[i][j] += a[i][k] * b[k][j];
				}
			}
		}	
	} else {
		cout<<"Can't be multiplied with each other\n";
	}
	return c;
}

int main(){
	int r1, r2, c1, c2;
	cout<<"\nEnter no. of rows in first Matrix: ";
	cin>>r1;
	cout<<"\nEnter no. of col in first Matrix: ";
	cin>>c1;
	cout<<"\nEnter no. of rows in Sec Matrix: ";
	cin>>r2;
	cout<<"\nEnter no. of col in Sec Matrix: ";
	cin>>c2;
	
	Matrix a(r1, c1);
	a.insert(r1, c1);
	cout<<"\nMATRIX A :";
	a.display();

	Matrix b();
	b.insert(r2, c2);
	cout<<"\nMATRIX B :";
	b.display();	
	
	cout<<"\nAddition is: "
	Matrix c = a + b;
	c.display();
	
	cout<<"\n";
	c = a * b;
	c.display();
	
	return 0;					
}


