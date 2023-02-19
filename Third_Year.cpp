#include<iostream>
#include"CoreCourses.cpp"
#include"ActiveCitizen.cpp"
#include"Major_Electives.cpp"
#include"Major_Normal_Plan.cpp"
#include"Required_Courses&Elective.cpp"

using namespace std;



int main(){
    string T1[]={Major("261304"),Major("261335"),Major("261336"),Major("261342"),Major("261343")};
    cout<<"\t\t\t\t Third Year Semester 1\n";
    for(int i=0;i<sizeof(T1)/sizeof(T1[0]);i++){
        cout<<"\t\t"<<T1[i]<<"\n";
    }

    string T2[]={Major("261305"),CoreCourses("261306"),Major("261361")};
    cout<<"\t\t\t\t Third Year Semester 2\n";
    for(int i=0;i<sizeof(T2)/sizeof(T2[0]);i++){
        cout<<"\t\t"<<T2[i]<<"\n";
    }
    return 0;
}