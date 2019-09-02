/*
=========================================================================================
Assignment : INHERITANCE
Name : Gaurav Ghati
class : SE 10
Batch : F 10
Problem Statement :

Design a base class with name, date of birth, blood group and another base class
consisting of the data members such as height and weight.
Design one more base class consisting of the insurance policy number and contact
address. The derived class contains the data members’ telephone numbers and
driving license number.
Write a menu driven program to carry out the following things:

1) Build a master table
2) Display Record
3) Insert a record
4) Delete record
5) Edit record
6) Search for a record
==========================================================================================
*/


#include<iostream>
using namespace std;


class BioData{
   char name[20];
   char blood[5];
   char dob[10];            # date of Birth

   public:
   BioData(char, char, char);
   char* getName();
   char* getBlood();
   char* getDOB();
   void setName(char*);
   void setBlood(char*);
   void dob(char*);
};

void BioData :: setName(char* name){
  char
}

class Physical{
   int height;
   int weight;

   public:
   Physical(int height, int weight);
   int getHeight();
   int getWeight();
   void setHeight(int);
   void setWeight(int);
};

class BankDetails(){
   int insNumber;
   char address[100];

   public:
   BankDetails(int, char);
   int getInsNumber();
   char* getAddress();
   void setInsNumber(int);
   void setAddress(char*);
};

class Human: private BioData, private Physical, private ankDetails{
   private:
   int telNumber;
   int DLnumber;

   int getTelNumber();
   int getDLnumber();
   void setTelNumber();
   void setDLnumber();

   public:
   Human() : ;
   void displayRec();
   void insertRec();
   void modifyRec();
   void delRecord();
};

int main(){

}
