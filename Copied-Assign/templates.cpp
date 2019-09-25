


#include <iostream>
using namespace std;

template <class T> class Matrix
{
private:
	T **matrix;
	int row;
	int col;
public:
	Matrix()
	{
		row=0;
		col=0;
		matrix=NULL;
	}
	Matrix(int row,int col)
	{
		this->row=row;
		this->col=col;
		matrix=new T*[row];
		for(int i =0;i<row;i++)
			matrix[i]=new T[col];
	}
	void display()
	{
		if(row!=0 && col!=0)
		{
			for(int i = 0; i < row; i++)
			{
				for(int j = 0; j < col; j++)
					cout<<matrix[i][j]<<" ";
				cout<<"\n";
			}
		}
		else
		{
			cout<<"Matrix is Empty\n";
		}
	}
	void insert()
	{
		if(row != 0 && col != 0)
		{
			for(int i = 0; i < row; i++)
			{
				for(int j = 0; j < col; j++)
				{
					cout<<"Enter Row ["<<i<<"] Column ["<<j<<"] :";
					cin>>matrix[i][j];
				}
			}
		}
		else
		{
			cout<<"Cannot Enter Any Elements in 0,0 Order Matrix\n";
		}
	}
	friend Matrix operator +(Matrix m1,Matrix m2)
	{
		if(m1.row == m2.row && m1.col == m2.col)
		{
			Matrix <T>ans(m1.row,m1.col);
			for(int i=0; i<m1.row; i++)
			{
				for (int j = 0; j < m1.col; j++)
				{
					ans.matrix[i][j]=m1.matrix[i][j]+m2.matrix[i][j];
				}
			}
			return ans;
		}
		else
		{
			Matrix <T>ans(0,0);
			cout<<"Unable to Add \n";
			return ans;
		}
	}
};

int main()
{
	int row,col;
	cout<<"Enter number of rows:";
	cin>>row;
	cout<<"Enter Number of columns:";
	cin>>col;
	Matrix <int>m1(row,col);
	m1.insert();	
	cout<<"\n";
	cout<<"Enter number of rows:";
	cin>>row;
	cout<<"Enter Number of columns:";
	cin>>col;
	Matrix <int>m2(row,col);	
	m2.insert();
	cout<<"\n";
	Matrix <int>ans=m1+m2;
	ans.display();
	return 0;
}
