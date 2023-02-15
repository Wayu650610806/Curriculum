#include<iostream>
using namespace std;

void CoreCourses(string x){
    string  key[] = {"206161","206162","206261","207105","207106","207115","207116","252281","259104","259106","261208","261216","261306"};
    string Cal1 = "Calculus for Engineering 1";
    string Cal2 = "Calculus for Engineering 2";
    string Cal3 = "Calculus for Engineering 3";
    string Phy1 = "Physics for Engineering and Agro-Industry Students 1";
    string Phy2 = "Physics for Engineering and Agro-Industry Students 2";
    string PhyL1 = "Physics Laboratory for Engineering and Agro-Industry Students 1";
    string PhyL2 = "Physics Laboratory for Engineering and Agro-Industry Students 2";
    string Circuit = "Fundamentals of Electronic Circuits for Information Systems and Network Engineering";
    string Draw1 = "Engineering Drawing";
    string Workshop = "Workshop Technology";
    string Numeric = "Numerical Computation for Engineers";
    string DisMath = "Discrete Mathematics for Computer Engineers";
    string ProbStat = "Computer Engineering Probability and Statistics";
    string subject[] = {Cal1,Cal2,Cal3,Phy1,Phy2,PhyL1,PhyL2,Circuit,Draw1,Workshop,Numeric,DisMath,ProbStat};
    
    int n = sizeof(key)/sizeof(key[0]);
    int count = -1;
    for(int i = 0; i<n;i++){
        if(x == key[i]){
            count = i;
            break;
        }
    }

    if(count == -1) cout << "Don't have this subject";
    else{
        cout << key[count] << " " << subject[count] << endl;
    }
}