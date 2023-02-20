#include<iostream>
#include"Subject.cpp"
#include"StudyMap.cpp"
#include"Curriculum.cpp"
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
        cout<<"Input Year : ";
        cin>>y;
        cout<<"Input Semester : ";
        cin>>s;
        int key=y*2+s;
        ShowCu(key);
        
    }
    

   
    return 0;
}