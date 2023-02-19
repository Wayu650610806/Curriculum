#include<iostream>
#include"CoreCourses.cpp"
#include"ActiveCitizen.cpp"
#include"Major_Electives.cpp"
#include"Major_Normal_Plan.cpp"
#include"Required_Courses&Elective.cpp"

using namespace std;



int main(){
    string F1[]={Learner("001101"),ActiveCitizen("140104"),CoreCourses("206161"),CoreCourses("207105"),CoreCourses("207115"),CoreCourses("259104"),CoreCourses("259106"),ActiveCitizen("259191")};
    cout<<"\t\t\t\t First Year Semester 1\n";
    for(int i=0;i<sizeof(F1)/sizeof(F1[0]);i++){
        cout<<F1[i]<<"\n";
    }
    
    return 0;
}