/*
=========================================================================================
Assignment : OPERATOR OVERLOADING (Extra Assignment)
Name : Gaurav Ghati
class : SE 10
Batch : F 10

Problem Statement :
Write a C++ program to perform String operations using Operator
Overloading

a) "=" String Equality Check
b) "<=" String Copy
c) "<<" Display String ( Using Friend Function )
d) "*" String concatenation (e.g. S1="PICT", S2="SCTR", S3=S1*S2 i.e. s3="PICTSCTR").

==========================================================================================
*/

#include<iostream>
#include<cstring>
using namespace std;

class String{
  char *arr;
  
  public:
  String();
  String(char *arr2);
  String getArr();
  int operator=(String b);        
  void operator<=(String b);
  friend ostream& operator<<(ostream &myout, String& b);
  void operator*(String b);
};

String String :: getArr(){
  return (arr);
}

String :: String(){
}

String :: String(char arr2[]){
   arr = arr2;
}

int String :: operator=(String b){       //return 0 if Equal else something else
   return strcmp(arr,b.arr);
}

void String :: operator<=(String b){
   strcpy(arr, b.arr);
}

void String :: operator*(String b){
   strcat(arr, b.arr);
}

ostream& operator<<(ostream &myout, String &b){
  myout<<(b.arr);
  return myout;
}

int main(){
  char *ptr1 = new char[50];
  ptr1 = "Hey\n";
  
  char *ptr2 = new char[50];
  ptr2 = "Hey\n";
  String s1(ptr1);
  String s2(ptr2);
  String s3;
  
  cout<<s1;
  cout<<s2;
  
  cout<<"String Equality:\n";
  cout<<(((s1 = s2) == 0 )? "They Are equal\n":"They are not equal\n");
  
  cout<<"Copy String 1 into String 2\n";
  s2<=s1;
  cout<<s2;
  
  cout<<"String concatenation s1, s2 in s3\n";
  s2*s1;
  cout<<s2; 
  
  return 0;
} 
