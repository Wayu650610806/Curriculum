#include<iostream>
#include"StudyMap.cpp"
#include"Curriculum.cpp"
#include"FirstEdit.cpp"
#include"Tutorial.cpp"
#include"drop.cpp"
#include"FreeAdd.cpp"
using namespace std;
vector<course> F1;
int Start_program(){
    int command=0;
    int y,s;
    char again;
    cout<<"\t\t\t\t\t\tCurriculum Management\n";
    do{
    vector<course> F1 = {};
    vector<course> F2 = {};
    vector<course> S1 = {};
    vector<course> S2 = {};
    vector<course> T1 = {};
    vector<course> T2 = {};
    vector<course> Fo1 = {};
    vector<course> Fo2 = {};
    vector<course> GE = {};
    vector<course> LP = {};
    vector<course> IC = {};
    vector<course> MJ = {};
    vector<course> FR = {};
    cout<<"Please select\n";
    cout<<"\t1.Tutorial\n\t2.Show Map\n\t3.Curriculum\n\t4.Edit\n";
    cout<<"Input number : ";
    cin>>command;
    if(command==1) Tutorial();
    if(command==2) StudyMap();
    if(command==3){
        cout<<"Input Year and Semester : ";
        cin >> y;
        cin >> s;
        ShowCu(y,s);
    }   
     if(command==4){
        readfile(F1,F2,S1,S2,T1,T2,Fo1,Fo2,GE,LP,IC,MJ,FR);
        int input = 0;
        int key = 0;
        cout<<"\nFirst, you have to select all ejective courses\n";
        firstEdit(F1,F2,S1,S2,T1,T2,Fo1,Fo2,GE,LP,IC,MJ,FR);
        cout << "What you want to do?\n";
        cout << "[1] Add subject\n";
        cout << "[2] Delete subject\n";
        cout << "[3] Show all curriculum\n";
        cout << "Your select :";
        cin >> key;
        if(key == 1){
            printreport(F1,F2,S1,S2,T1,T2,Fo1,Fo2);
            FreeAdd(F1,F2,S1,S2,T1,T2,Fo1,Fo2,GE,LP,IC,MJ,FR);
        }
        if(key == 2){
            printreport(F1,F2,S1,S2,T1,T2,Fo1,Fo2);
            drop(F1,F2,S1,S2,T1,T2,Fo1,Fo2,GE,LP,IC,MJ);
            }
        if(key == 3){
        int total = printreport(F1,F2,S1,S2,T1,T2,Fo1,Fo2);
        cout << "\nTotal credit : " << total << endl<<endl;
        }
    }
    cout << "\nWant to select a function again? \x1b[1mY\x1b[0m/\x1b[1mN\x1b[0m : ";
    cin >> again;
    }while (toupper(again) == 'Y');
    cout << "\nThank you. Happy to serve you.:)";
    return 0;
}
