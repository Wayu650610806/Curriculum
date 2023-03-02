#include<iostream>
#include<vector>
#include"Subject.cpp"
#include"StartProgram.cpp"
#include"Editnon.cpp"
using namespace std;
vector<course> F1;
vector<course> F2;
vector<course> S1;
vector<course> S2;
vector<course> T1;
vector<course> T2;
vector<course> Fo1;
vector<course> Fo2;


int main(){
    int x=Start_program();
    if(x==1){
        readfilef1(F1);
        readfilef2(F2);
        readfiles1(S1);
        readfiles2(S2);
        readfilet1(T1);
        readfilet2(T2);
        readfilefo1(Fo1);
        readfilefo2(Fo2);

    }
    printreport(Fo1);
    printreport(F1);
    
}