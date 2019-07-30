/*
==================================================================================
Assignment : DYNAMIC MEMORY ALLOCATION USING NEW AND DELETE OPERATOR
Name : Gaurav Ghati
class : SE 10
Batch : F 10
Problem Statement : A Book shop maintains the inventory of books that are being sold at the shop. The list includes details such as title, author, publisher, price and available stock. Write a program in C++ which will have a class called books with suitable member
i)   Add
ii)  Update
iii) Search a book
iv)  Purchase a book
     (update the stock and display the total cost)
v)   Record number of successful/unsuccessful transactions
     (use static data members to keep count of transactions)
==================================================================================
*/

#include<iostream>
#include<iomanip>
using namespace std;

#define MAX 50

class Book{
  char *title;
  char *author;
  char *publish;
  static int ava_stoke;
  int prize;
  int bookNo;

  public :

  Book();
  void addBook();
  void purchaseBook();
  void updateBook();
  void displayBook();
  // ~Book();

};


class Library{

   Book books[MAX];

   public:
   int search(int n);
   void displayArr(int n);
   Book get(int index);
};

void displayMenu(){                                            //DONE
  cout<<"<<---------In Collection------------>>\n";
  cout<<" 1.  Add book \n";
  cout<<" 2.  Update Book \n";
  cout<<" 3.  search Book \n";
  cout<<" 4.  purchase Book \n";
  cout<<" 5.  Display Collection \n";
  cout<<" 6.  Display Menu \n";
  cout<<" 7.  Exit \n";
}

Book :: Book(){
    title = new char[20];
    author = new char[20];
    publish = new char[20];
    prize;
    bookNo;
}

int Book :: ava_stoke = 0;
int i = 0;

void Book :: purchaseBook(){               //DONE
  ava_stoke--;
  cout<<"Book Purchased";
}

void Book::addBook(){                              //DONE
  cout<<"\nEnter Title of the Book:";
  cin>>title;
  cout<<"\nEnter Author of the Book:";
  cin>>author;
  cout<<"\nEnter publisher of the Book:";
  cin>>publish;
  cout<<"\nEnter Prize of the Book:";
  cin>>prize;
  cout<<"\nEnter available stock of the Book:";
  cin>>ava_stoke;
  cout<<"\nEnter book Number fo the Book:";
  cin>>bookNo;
}

void Book :: displayBook(){
  cout<<"\n"<<title<<setw(10)<<(author)<<setw(10)<<(publish)<<setw(10)<<ava_stoke<<setw(10)<<prize<<setw(10)<<bookNo<<"\n";  //DONE
}

void Book :: updateBook(){
   cout<<"\nWhich field you want to Update:\n1) Title\n2) Author\n3) Publisher\n4) Prize\n";
   int ch = 0;
   cin>>ch;
   switch(ch){
     case 1: cout<<"\nEnter Title:";
             cin>>title;
     case 2: cout<<"\nEnter Author:";
             cin>>author;
     case 3: cout<<"\nEnter Publisher:";
             cin>>publish;
     case 4: cout<<"\nEnter Prize:";
             cin>>prize;
   }
}

// Book :: ~Book(){        //DONE
//     delete title;
//     delete author;
//     delete publish;
// }

void Library :: displayArr(int n){        //DONE
  cout<<"\n--------------------------------------------------------------------------";
  cout<<"\nTitle"<<setw(10)<<"Author"<<setw(10)<<"Publisher"<<setw(10)<<"Avaiable stock"<<setw(10)<<"Prize"<<setw(10)<<"BookNo";
  cout<<"\n-------------------------------------------------------------------------";
  for(i=0; i<n; i++){
     books[i].displayBook();
  }
  cout<<"\n----------------------------------------------------------------------------";
}

int Library :: search(int n){   //DONE
  int subChoice, found;
  cout<<"\n1. Search by book name";
  cout<<"\n2. Search by author of book";
  cout<<"\n3. Search by Book Number";
  cin>>subChoice;
  for(i=0;i<n;i++){
     switch(subChoice){
        case 1:  char *name;
              cout<<"\nEnter Book Title: ";
              cin>>name;
              if(books[i].title==name){
                cout<<"\nBook Found!";
                books[i].displayBook();
                return i;
              }
              break;

        case 2:char *auName;
               cin>>auName;
               if(books[i].author==auName){
                  cout<<"\nBook Found!";
                  books[i].displayBook();
                  return i;
               }
               break;

       case 3:  int BookID;
               cin>>BookID;
               if(books[i].bookNo==BookID){
                  cout<<"\nBook Found!";
                  books[i].displayBook();
                  return i;
               }
               break;
     }
  }
  if(found==0){
    cout<<"\nBook Not Found!";
  }
}

Book Library :: get(int i){            //DONE
   return books[i];
}

int main(){
   int ch;
   int var = 0;
   static int num = 0;      //here num is total number of book present
   Library lib;
   int exit = 0;
   displayMenu();
   do{
     cout<<"\nENTER CHOICE:";
     cin>>ch;
     switch(ch){
       case 1: lib.get(num).addBook();
               num++;
               break;

       case 2: var = lib.search(num);
               lib.get(var).updateBook();
               break;

       case 3: lib.search(num);
               break;

       case 4: var = lib.search(num);
               lib.get(var).purchaseBook();
               break;

       case 5: lib.displayArr(num);
               break;

       case 6: displayMenu();
               break;

       case 7: exit = 1;
               break;

       default: cout<<"Enter valid choice";
                break;
     }
   }while(exit==0);
   return 0;
}
