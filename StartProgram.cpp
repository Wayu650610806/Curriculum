#include<iostream>
#include"StudyMap.cpp"
#include"Curriculum.cpp"
using namespace std;

int Start_program(){
    int command=0;
    int y,s;
    cout<<"\t\t\t\t\t\tCurriculum Management\n";
    cout<<"Please select\n";
    cout<<"\t1.Show Map\n\t2.Curriculum\n";
    cout<<"Input number : ";
    cin>>command;
    if(command==1) StudyMap();
    if(command==2){
        cout<<"Form to input Year Semester" << endl;
        cout<<"Input Year and Semester : ";
        cin >> y;
        cin >> s;
        ShowCu(y,s);
    }   
    return 0;
}