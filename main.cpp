#include<iostream>
#include<vector>
#include"Subject.cpp"
#include"StartProgram.cpp"
#include"Edit.cpp"
using namespace std;
vector<course> F1;
int main(){
    int x=Start_program();
    if(x==1){
        readfile(F1);
    }
    printreport(F1);
}