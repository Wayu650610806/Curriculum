#include<iostream>
#include"CoreCourses.cpp"
#include"ActiveCitizen.cpp"
#include"Major_Electives.cpp"
#include"Major_Normal_Plan.cpp"
#include"Required_Courses&Elective.cpp"

using namespace std;



int main(){
    string Fo1[]={Major("261491")};
    cout<<"\t\t\t\t Four Year Semester 1\n";
    for(int i=0;i<sizeof(Fo1)/sizeof(Fo1[0]);i++){
        cout<<"\t\t"<<Fo1[i]<<"\n";
    }
    string Fo2[]={Innovative("259192"),Major("261405"),Major("261492")};
    cout<<"\t\t\t\t Four Year Semester 2\n";
    for(int i=0;i<sizeof(Fo2)/sizeof(Fo2[0]);i++){
        cout<<"\t\t"<<Fo2[i]<<"\n";
    }
    return 0;
}