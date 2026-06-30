#include<iostream>
#include<string>
using namespace std;

const int MAX=100;

int bookId[MAX];
string title[MAX];
string author[MAX];
bool issued[MAX];

int total=0;

void addBook(){

    cout<<"Book ID: ";
    cin>>bookId[total];

    cin.ignore();

    cout<<"Title: ";
    getline(cin,title[total]);

    cout<<"Author: ";
    getline(cin,author[total]);

    issued[total]=false;

    total++;

    cout<<"Book Added\n";
}

void displayBooks(){

    if(total==0){
        cout<<"No Books\n";
        return;
    }

    cout<<"\nID\tTitle\tAuthor\tStatus\n";

    for(int i=0;i<total;i++){

        cout<<bookId[i]<<"\t"<<title[i]<<"\t"<<author[i]<<"\t";

        if(issued[i])
            cout<<"Issued";
        else
            cout<<"Available";

        cout<<endl;
    }
}

void searchBook(){

    int id;

    cout<<"Enter Book ID: ";
    cin>>id;

    for(int i=0;i<total;i++){

        if(bookId[i]==id){

            cout<<title[i]<<endl;
            cout<<author[i]<<endl;

            return;
        }
    }

    cout<<"Book Not Found\n";
}

void issueBook(){

    int id;

    cout<<"Enter Book ID: ";
    cin>>id;

    for(int i=0;i<total;i++){

        if(bookId[i]==id){

            if(!issued[i]){
                issued[i]=true;
                cout<<"Book Issued\n";
            }
            else
                cout<<"Already Issued\n";

            return;
        }
    }

    cout<<"Book Not Found\n";
}

void returnBook(){

    int id;

    cout<<"Enter Book ID: ";
    cin>>id;

    for(int i=0;i<total;i++){

        if(bookId[i]==id){

            if(issued[i]){
                issued[i]=false;
                cout<<"Returned Successfully\n";
            }
            else
                cout<<"Already Available\n";

            return;
        }
    }

    cout<<"Book Not Found\n";
}

int main(){

    int choice;

    do{

        cout<<"\n1.Add Book";
        cout<<"\n2.Display";
        cout<<"\n3.Search";
        cout<<"\n4.Issue";
        cout<<"\n5.Return";
        cout<<"\n6.Exit";

        cout<<"\nChoice: ";
        cin>>choice;

        switch(choice){

            case 1:addBook();break;
            case 2:displayBooks();break;
            case 3:searchBook();break;
            case 4:issueBook();break;
            case 5:returnBook();break;
            case 6:break;
            default:cout<<"Invalid";
        }

    }while(choice!=6);
    return 0;
}