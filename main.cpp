#include<iostream>
#include"CoreCourses.cpp"
#include"ActiveCitizen.cpp"
#include"Major_Electives.cpp"
#include"Major_Normal_Plan.cpp"
#include"Required_Courses&Elective.cpp"
#include"StudyMap.cpp"
#include"FirstYear.cpp"
using namespace std;

void studyMap(){
    StudyMap();
}

string search(){
    return "Search";
}

string plan(){
    return "Plan";
}

int main(){
     
    int command=0;
    int y,s;
    cout<<"\t\t\t\t\t\tCurriculum Management\n";
    cout<<"Please select\n";
    cout<<"\t1.Show Map\n\t2.Curriculum\n";
    cout<<"Input number : ";
    cin>>command;
    if(command==1)studyMap();
    if(command==2){
        cout<<"Input Year and Semester :";
        cin>>y;
        ShowCu(y);
    }
    

   
    return 0;
}