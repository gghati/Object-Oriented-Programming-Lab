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

#define MAX 30

class Book{
  char *title;
  char *author;
  char *publisher;
  static int ava_stoke;
  int prize;
  int bookNo;
  
  public : 

  Book(){
    title = new char[20];
    author = new char[20];
    publisher = new char[20];
    ava_stoke = new int;    
    prize = new int;
    bookNo = new int;
  }

  void addBook();
  void purchaseBook();
  void updateBook();
  void displayBook();

  ~Book(){
    delete title;
    delete author;
    delete publisher;  
  }
  
  friend class Library;
};


class Library{
   
   Book books[MAX];

   public:
   void search(Book books[MAX], int n);
   void displayArr(Book books[MAX], int n);
   void getBook(int index);
} 


void Library :: displayArr(Book books[MAX], int n){
  cout<<"\n---------------------------------------------------------------------------------------------------------------------------";
  cout<<"\nTitle"<<setw(10)<<"Author"<<setw(10)<<"Publisher"<<setw(10)<<"Avaiable stock"<<setw(10)<<"Prize"<<setw(10)<<"BookNo";
  cout<<"---------------------------------------------------------------------------------------------------------------------------";
  for(i=0; i<n; i++)   cout<<books[i].title<<setw(10)<<books[i].author<<setw(10)<<books[i].publisher<<setw(10)<<books[i].ava_stock<<setw(10)<<books[i].prize<<setw(10)<<books [i].bookNo<<"\n";
  cout<<"\n---------------------------------------------------------------------------------------------------------------------------";
}

int Library :: search(Book books[MAX], int n){  
  int subChoice, found;
  cout<<"\n1. Search by book name";
  cout<<"\n2. Search by author of book";
  cout<<"\n3. Search by Book Number";
  cin>>subChoice;
  for(i=0;i<n;i++){
     switch(subChoice){
        case 1:  char *name;
              cout<<"Enter Book Title: ";
              cin>>name;
              if(book[i].title==name){
                cout<<"Book Found!";
                books[i].displayBook();
                return i;
              }
              break;
             
        case 2:  char *auName;
               cin>>auName;
               if(book[i].author==auName){
                  cout<<"Book Found!";
                  books[i].displayBook(); 
                  return i;
               }
               break;
              
       case 3:  int BookID;
               cin>>BookID;
               if(book[i].bookNo==BookID){
                  cout<<"Book Found!";
                  books[i].displayBook();
                  return i;
               }
               break;
     }
  }
  if(found==0){
    cout<<"Book Not Found!";
  }
}

static int Book :: ava_stoke = 0;

void Book::addBook(){                              //DONE
  cout<<"\nEnter Title of the Book:";
  cin>>title;
  cout<<"\nEnter Author of the Book:";
  cin>>author;
  cout<<"\nEnter publisher of the Book:";
  cin>>pulisher;
  cout<<"\nEnter Prize of the Book:";
  cin>>prize;
  cout<<"\nEnter available stock of the Book:";
  cin>>ava_stoke;
  cout<<"\nEnter book Number fo the Book:";
  cin>>bookNo;
}

void Book :: purchaseBook(){
  int quan = 0;
  cout<<"Enter Number of books you want to purchase"
  
}

void Book :: diaplayBook(){
  cout<<title<<setw(10)<<author<<setw(10)<<publisher<<setw(10)<<ava_stock<<setw(10)<<prize<<setw(10)<<bookNo<<"\n";
}


int main(){
   int i, num;
   Book books[20];
   int exit = 0;
   displayMenu();
   
   do{
     cout<<"ENTER CHOICE:\n";
     cin>>num;
     switch(num){
       case 1: add(); noBook++;  
               break;
               
       case 2: update();
               break;
               
       case 3: search();
               break;
               
       case 4: purchase();
               break;  
               
       case 5: displayMenu();
               break;
               
       case 6: exit = 1; 
               break;
                 
       default: cout<<"Enter valid choice";
                break;  
     }
   }while(exit==0);
   return 0;
}

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
