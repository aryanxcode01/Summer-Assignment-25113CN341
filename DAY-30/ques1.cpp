#include<iostream>
#include<string>
using namespace std;

const int MAX = 100;

int id[MAX];
string name[MAX];
float marks[MAX];
int total = 0;

void addStudent() {
    if(total == MAX){
        cout<<"Database Full\n";
        return;
    }

    cout<<"Enter ID: ";
    cin>>id[total];

    cin.ignore();

    cout<<"Enter Name: ";
    getline(cin,name[total]);

    cout<<"Enter Marks: ";
    cin>>marks[total];

    total++;

    cout<<"Student Added Successfully\n";
}

void displayStudents() {

    if(total==0){
        cout<<"No Records\n";
        return;
    }

    cout<<"\nID\tName\tMarks\n";

    for(int i=0;i<total;i++){
        cout<<id[i]<<"\t"<<name[i]<<"\t"<<marks[i]<<endl;
    }
}

void searchStudent() {

    int searchId;
    cout<<"Enter ID: ";
    cin>>searchId;

    for(int i=0;i<total;i++){

        if(id[i]==searchId){

            cout<<"\nFound\n";
            cout<<"Name : "<<name[i]<<endl;
            cout<<"Marks : "<<marks[i]<<endl;
            return;
        }
    }

    cout<<"Student Not Found\n";
}

void updateStudent(){

    int searchId;
    cout<<"Enter ID: ";
    cin>>searchId;

    for(int i=0;i<total;i++){

        if(id[i]==searchId){

            cin.ignore();

            cout<<"Enter New Name: ";
            getline(cin,name[i]);

            cout<<"Enter New Marks: ";
            cin>>marks[i];

            cout<<"Updated Successfully\n";
            return;
        }
    }

    cout<<"Student Not Found\n";
}

void deleteStudent(){

    int searchId;

    cout<<"Enter ID: ";
    cin>>searchId;

    for(int i=0;i<total;i++){

        if(id[i]==searchId){

            for(int j=i;j<total-1;j++){

                id[j]=id[j+1];
                name[j]=name[j+1];
                marks[j]=marks[j+1];
            }

            total--;

            cout<<"Deleted Successfully\n";
            return;
        }
    }

    cout<<"Student Not Found\n";
}

int main(){

    int choice;

    do{

        cout<<"\n1.Add Student";
        cout<<"\n2.Display";
        cout<<"\n3.Search";
        cout<<"\n4.Update";
        cout<<"\n5.Delete";
        cout<<"\n6.Exit";

        cout<<"\nEnter Choice: ";
        cin>>choice;

        switch(choice){

            case 1:addStudent();break;
            case 2:displayStudents();break;
            case 3:searchStudent();break;
            case 4:updateStudent();break;
            case 5:deleteStudent();break;
            case 6:cout<<"Thank You";break;
            default:cout<<"Invalid Choice";
        }

    }while(choice!=6);

    return 0;
}