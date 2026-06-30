#include<iostream>
#include<string>
using namespace std;

const int MAX=100;

int empId[MAX];
string empName[MAX];
string department[MAX];
double salary[MAX];

int total=0;

void addEmployee(){

    cout<<"Employee ID: ";
    cin>>empId[total];

    cin.ignore();

    cout<<"Name: ";
    getline(cin,empName[total]);

    cout<<"Department: ";
    getline(cin,department[total]);

    cout<<"Salary: ";
    cin>>salary[total];

    total++;

    cout<<"Employee Added\n";
}

void display(){

    cout<<"\nID\tName\tDepartment\tSalary\n";

    for(int i=0;i<total;i++){

        cout<<empId[i]<<"\t"
            <<empName[i]<<"\t"
            <<department[i]<<"\t"
            <<salary[i]<<endl;
    }
}

void search(){

    int id;

    cout<<"Enter ID: ";
    cin>>id;

    for(int i=0;i<total;i++){

        if(empId[i]==id){

            cout<<empName[i]<<endl;
            cout<<department[i]<<endl;
            cout<<salary[i]<<endl;

            return;
        }
    }

    cout<<"Employee Not Found\n";
}

void update(){

    int id;

    cout<<"Enter ID: ";
    cin>>id;

    for(int i=0;i<total;i++){

        if(empId[i]==id){

            cout<<"New Salary: ";
            cin>>salary[i];

            cout<<"Updated\n";

            return;
        }
    }

    cout<<"Employee Not Found\n";
}

void removeEmployee(){

    int id;

    cout<<"Enter ID: ";
    cin>>id;

    for(int i=0;i<total;i++){

        if(empId[i]==id){

            for(int j=i;j<total-1;j++){

                empId[j]=empId[j+1];
                empName[j]=empName[j+1];
                department[j]=department[j+1];
                salary[j]=salary[j+1];
            }

            total--;

            cout<<"Deleted\n";
            return;
        }
    }

    cout<<"Employee Not Found\n";
}

int main(){

    int choice;

    do{

        cout<<"\n1.Add";
        cout<<"\n2.Display";
        cout<<"\n3.Search";
        cout<<"\n4.Update Salary";
        cout<<"\n5.Delete";
        cout<<"\n6.Exit";

        cin>>choice;

        switch(choice){

            case 1:addEmployee();break;
            case 2:display();break;
            case 3:search();break;
            case 4:update();break;
            case 5:removeEmployee();break;
            case 6:break;
            default:cout<<"Invalid";
        }

    }while(choice!=6);
    return 0;
}