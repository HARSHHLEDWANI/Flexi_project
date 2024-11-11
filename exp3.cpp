#include<iostream>
using namespace std;

class student{
    private:
        string name;
        int rollnumber;
        float marks[5];
    public:
        void inputdetails(){
            cout << "enter student's name : ";
            cin >> name;
            cout << "enter roll number : ";
            cin >> rollnumber;

            cout << "enter marks for 5 subjects : ";
            for(int i = 0;i<5;i++){
                cout<<"subject"<<i+1<<":";
                cin>>marks[i];
            }         
        }
        float calculatepercentage(){
            float totalmarks = 0;
            for (int i = 0;i<5;i++){
                totalmarks += marks[i];
            }
            return (totalmarks / 500)*100;
        }
        void displaydetails(){
            cout<<"\nstudent's name :" <<name <<endl;
            cout<<"roll number :"<<rollnumber<<endl;
            cout<<"percentage :"<<calculatepercentage()<<"%"<<endl;
        }
};

int main(){
    student student;

    student.inputdetails();
    student.displaydetails();

    return 0;
}