#include<iostream>
#include<iomanip>

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

  void add();
  void purchase();
  void search();
  void update();
  void display(); 

  ~Book(){
    delete title;
    delete author;
    delete publisher;  
  }
};

void Book::add(){
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

int Book :: search(){  
  int subChoice;
  cout<<"\n1. Search by book name";
  cout<<"\n2. Search by author of book";
  cout<<"\n3. Search by Book Number";
  cin>>subChoice;
  switch(subChoice){
    case 1:  char *name;
             cin>>name;
             if(title==name){
                cout<<"\nBook found with Title Name:"<<title;
                cout<<"\nAuthor: "<<author;                
                cout<<"\nPublisher: "<<publisher;
                cout<<"\nPrize: "<<prize;
                cout<<"\nAvailable stock: "<<ava_stoke;
                cout<<"\nBook Number: "<<bookNo;
                return 1;
             }
             break;
             
    case 2:  char *auName;
             cin>>auName;
             if(author==auName){
                cout<<"\nBook found with Author Name:"<<title;
                cout<<"\nTitle: "<<title;               
                cout<<"\nPublisher: "<<publisher;
                cout<<"\nPrize: "<<prize;
                cout<<"\nAvailable stock: "<<ava_stoke;
                cout<<"\nBook Number: "<<bookNo;
                return 2;
             }
             break;
              
    case 3:  int BookID;
             cin>>BookID;
             if(bookNo==BookID){
                cout<<"\nBook found with Book ID:"<<BookID;
                cout<<"\nTitle:"<<title;
                cout<<"\nAuthor:"<<author;                
                cout<<"\nPublisher: "<<publisher<<;
                cout<<"\nPrize: "<<prize;
                cout<<"\nAvailable stock: "<<ava_stoke;
                return 3;
             }
             break;
  }
  return 0;
}

void Book :: purchase(){
  int quan = 0;
  cout<<"Enter Number of books you want to purchase"
  
}

void Book :: diaplayRow(){
  cout<<title<<setw(10)<<author<<setw(10)<<publisher<<setw(10)<<ava_stock<<setw(10)<<prize<<setw(10)<<bookNo<<"\n";
}

void Book :: update(){
  
  int subchoice = search();
  switch(subChoice){
    
    case 1:  char *name;
             cin>>name;
             if(title==name){
                cout<<"\nBOOK FOUND WITH THIS TITLE"
                cout<<"\nUpdate Author of the Book :";
                cin>>author;
                cout<<"\nUpdate publisher of the Book :";
                cin>>pulisher;
                cout<<"\nUpdate Prize of the Book :";
                cin>>prize;
                cout<<"\nUpdate available stock of the Book :";
                cin>>ava_stoke;
                cout<<"\nUpdate book Number fo the Book :";
                cin>>bookNo;
             }
             break;
             
    case 2:  char *auName;
             cin>>auName;
             if(author==auName){
                cout<<"\nBOOK FOUND WITH THIS AUTHOR"
                cout<<"\nUpdate title of the Book :";
                cin>>title;
                cout<<"\nUpdate publisher of the Book :";
                cin>>pulisher;
                cout<<"\nUpdate Prize of the Book :";
                cin>>prize;
                cout<<"\nUpdate available stock of the Book :";
                cin>>ava_stoke;
                cout<<"\nUpdate book Number fo the Book :";
                cin>>bookNo;
             }
             break;
              
    case 3:  int BookID;
             cin>>BookID;
             if(bookNo==BookID){
                cout<<"\nBOOK FOUND WITH THIS BOOK ID"
                cout<<"\nUpdate Author of the Book :";
                cin>>author;
                cout<<"\nUpdate publisher of the Book :";
                cin>>pulisher;
                cout<<"\nUpdate Prize of the Book :";
                cin>>prize;
                cout<<"\nUpdate available stock of the Book :";
                cin>>ava_stoke;
                cout<<"\nUpdate book Number fo the Book :";
                cin>>bookNo;
            }
             break; 
      default: cout<<"\nBOOK NOT FOUND";                 
   }            
}

void diaplayColl(Book books[20], int val){
  cout<<"\n---------------------------------------------------------------------------------------------------------------------------";
  cout<<"\nTitle"<<setw(10)<<"Author"<<setw(10)<<"Publisher"<<setw(10)<<"Avaiable stock"<<setw(10)<<"Prize"<<setw(10)<<"BookNo";
  cout<<"---------------------------------------------------------------------------------------------------------------------------";
  for(i=0; i<val; i++)  
  cout<<books[i].title<<setw(10)<<books[i].author<<setw(10)<<books[i].publisher<<setw(10)<<books[i].ava_stock<<setw(10)<<books[i].prize<<setw(10)<<books [i].bookNo<<"\n";
  cout<<"\n---------------------------------------------------------------------------------------------------------------------------";
}

void displayMenu(){  
  cout<<"<<---------In Collection------------>>\n";
  cout<<" 1.  Add book \n";
  cout<<" 2.  Update Book \n";
  cout<<" 3.  search Book \n";
  cout<<" 4.  purchase Book \n";
  cout<<" 5.  Display Collection \n";
  cout<<" 6.  Display Menu \n";
  cout<<" 7.  Exit \n";
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
               diaplayColl(Book books[20], noBook);  
               break;
               
       case 2: update();
               diaplayColl(Book books[20]);
               break;
               
       case 3: search();
               diaplayColl(Book books[20], noBook);
               break;
               
       case 4: purchase();
               diaplayColl(Book books[20], noBook);
               break;  
               
       case 5: displayMenu();
               diaplayColl(Book books[20], noBook);
               break;
               
       case 6: exit = 1; 
               break;
                 
       default: cout<<"Enter valid choice";
                break;  
     }
   }while(exit==0);
   return 0;
}
