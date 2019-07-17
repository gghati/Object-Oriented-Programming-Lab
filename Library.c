#include<iostream>

class Book{
  
  char *title;
  char *author;
  char *publisher;
  int ava_stoke;
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
  cout<<"Enter Title of the Book:\n";
  cin>>title;
  cout<<"Enter Author of the Book :\n";
  cin>>author;
  cout<<"Enter publisher of the Book :\n";
  cin>>pulisher;
  cout<<"Enter Prize of the Book :\n";
  cin>>prize;
  cout<<"Enter available stock of the Book :\n";
  cin>>ava_stoke;
  cout<<"Enter book Number fo the Book :\n";
  cin>>bookNo;
}


int search(){  
  int subChoice;
  cout<<"1. Search by book name \n";
  cout<<"2. Search by author of book\n";
  cout<<"3. Search by Book Number\n";
  cin>>subChoice;
  switch(subChoice){
    
    case 1:  char *name;
             cin>>name;
             if(title==name){
                cout<<"Update Author of the Book :\n";
                cin>>author;
                cout<<"Update publisher of the Book :\n";
                cin>>pulisher;
                cout<<"Update Prize of the Book :\n";
                cin>>prize;
                cout<<"Update available stock of the Book :\n";
                cin>>ava_stoke;
                cout<<"Update book Number fo the Book :\n";
                cin>>bookNo;
             }
             break;
             
    case 2:  char *auName;
             cin>>auName;
             if(author==auName){
                cout<<"Update title of the Book :\n";
                cin>>title;
                cout<<"Update publisher of the Book :\n";
                cin>>pulisher;
                cout<<"Update Prize of the Book :\n";
                cin>>prize;
                cout<<"Update available stock of the Book :\n";
                cin>>ava_stoke;
                cout<<"Update book Number fo the Book :\n";
                cin>>bookNo;
             }
             break;
              
    case 3:  int BookID;
             cin>>BookID;
             if(bookNo==BookID){
                cout<<"Update Author of the Book :\n";
                cin>>author;
                cout<<"Update publisher of the Book :\n";
                cin>>pulisher;
                cout<<"Update Prize of the Book :\n";
                cin>>prize;
                cout<<"Update available stock of the Book :\n";
                cin>>ava_stoke;
                cout<<"Update book Number fo the Book :\n";
                cin>>bookNo;
             }
             break;   
             
     default: cout<<"Enter valid choice\n";
              break;                       
  }
}

void purchase(){
  
}


void Book :: diaplayRow(){
  
}

void Book :: update(){
  cout<<"For Updating:";
  search();
  
  
}

void diaplayColl(){
  
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

   do{
     
     int noBook = 0;
     displayMenu();
     cout<<"Enter Choice:\n";
     cin>>num;
   
     switch(num){
       case 1: add();
               noBook++;
               break;
              
       case 2: update(); break;
      
       case 3: search(); break;
      
       case 4: purchase(); break;
       
       case 5: displayColl(); break;
      
       case 6: displayMenu(); break;
      
       case 7: exit = 1;   
       
       default: cout<<"Enter valid choice";
                break;  
     }
   
   }while(exit==0);
   
   return 0;

}
