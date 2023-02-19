#include<iostream>
#include<string>
using namespace std;

string ActiveCitizen(string x){
    string code[]={"140104","259191","011100","109114","127100","128100","154104","254182","256131","259108","259193","259195","602102","801100","951100"};
    string subject[]={"Citizenship","Principle of Being Professional","Man and Philosophy","Art in Everyday Life",
    "Politics in Everyday Life","Basic Good Governance in Administration","Environmental Conservation","Introduction to Energy",
    "Urban Mining","Electricity in Everyday Life","Morality and Intelligence for Being a Professional","Managing Activities for Development","Life and Alternative Energy","Architecture in Everyday Life","Modern Life and Animation"};
    int credit[]={3,1,3,3,3,3,3,3,3,3,1,1,3,3,3};
    int n = sizeof(code)/sizeof(code[0]);
    int count = -1;
    for(int i = 0; i<n;i++){
        if(x == code[i]){
            count = i;
            break;
        }
    }
//  cout << "Don't have this subject"
    if(count == -1) return 0;
    else{
        return code[count]+" "+subject[count];
    }
    
    


}