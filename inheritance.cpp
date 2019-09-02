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
   BioData(char*, char*, char*);
   char* getName();
   char* getBlood();
   char* getDOB();
   void setName(char*);
   void setBlood(char*);
   void setDOB(char*);
};

BioData :: BioData(char* name, char* blood, char* dob){
   this->name = name;
   this->blood = blood;
   this->dob = dob;
}

char* BioData :: getName(){
   return name;
}

char* BioData :: getBlood(){
   return blood;
}

char* BioData :: getDOB(){
   return dob;
}

void BioData :: setName(char* name){
  this -> name = name;
}


void BioData :: setBlood(char* blood){
  this -> blood = blood;
}

void BioData :: setDOB(char* dob){
  this -> dob = dob;
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

Physical :: Physical(int height, int weight){
   this -> height = height;
   this -> weight = weight;
}

int Physical :: getHeight(){
   return height;
}

int Physical :: getWeight(){
   return weight;
}

void Physical :: setHeight(int height){
   this->height = height;
}

void Physical :: setWeight(int weight){
   this->weight = weight
}

class BankDetails(){
   int insNumber;
   char address[100];

   public:
   BankDetails(int, char*);
   int getInsNumber();
   char* getAddress();
   void setInsNumber(int);
   void setAddress(char*);
};

BankDetails :: BankDetails(int insNumber, char* address){
   this -> insNumber = insNumber;
   this -> address = address;
}

void BankDetails :: setInsNumber(int insNumber){
   this->insNumber = insNumber;
}

void BankDetails :: setAddress(char* address){
   this->address = address;
}

int getInsNumber(){
   return insNumber;
}

char* getAddress(){
   return address;
}

class Human: private BioData, private Physical, private BankDetails{
   private:
   int telnumber;
   int DLnumber;

   int getTelnumber();
   int getDLnumber();
   void setTelnumber(int);
   void setDLnumber(int);

   public:
   Human(int, int, char*, char*, char*, int, int, int, char*) : 
          BioData(char*, char*, char*), Physical(int, int), BankDetails(int, char*);
   void displayRec();
   void insertRec();
   void modifyRec();
   void delRecord();
};

Human :: Human(int telnumber, int DLnumber, char* name, char* blood, char* dob, int height, int weight, int insNumber, char* address) : 
BioData(char* name, char* blood, char* dob), Physical(int height, int weight), BankDetails(int insNumber, char* address){
   this->telnumber = telnumber;
   this->DLnumber = DLnumber;
}

int Human: getTelNumber(){
   return telnumber;
}

int Human: getDLnumber(){
   return DLnumber;
}

void setTelNumber(int telnumber){
   this -> telnumber = telnumber;
}

void setDLnumber(int DLnumber){
   this -> DLnumber = DLnumber;
}

void Human: displayRec(){
   
}

void Human: insertRec(){

}

void Human: modifyRec(){

}

void Human: delRecord(){

}

int main(){

}
