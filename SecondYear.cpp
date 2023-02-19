#include<iostream>
#include"CoreCourses.cpp"
#include"ActiveCitizen.cpp"
#include"Major_Electives.cpp"
#include"Major_Normal_Plan.cpp"
#include"Required_Courses&Elective.cpp"

using namespace std;



int main(){
    string S1[]={Learner("001201"),CoreCourses("206261"),Major("261207"),Major("261210"),Major("261212"),CoreCourses("261216"),Major("261217")};
    cout<<"\t\t\t\t Second Year Semester 1\n";
    for(int i=0;i<sizeof(S1)/sizeof(S1[0]);i++){
        cout<<"\t\t"<<S1[i]<<"\n";
    }

    string S2[]={Learner("001225"),Major("261200"),CoreCourses("261208"),Major("261214"),Major("261215"),Major("261218"),Major("261332")};
    cout<<"\t\t\t\t Second Year Semester 2\n";
    for(int i=0;i<sizeof(S2)/sizeof(S2[0]);i++){
    cout<<"\t\t"<<S1[i]<<"\n";
    }
    return 0;
}