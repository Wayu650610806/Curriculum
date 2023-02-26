#include<iostream>
#include<string>
#include<fstream>
#include<vector>
#include<iomanip>

using namespace std;
struct course{
	char name[100];
	char code[100];
	int credit;
};
void printreport(vector<course> F1){
	for(unsigned int i = 0;i < F1.size(); i++){
		cout<< F1[i].name << " ("<< F1[i].code << ")  "<<right<<setw(50)<<F1[i].credit<<"\n";
    }
	
}
int main(){
    ifstream file("cuorigin.txt");
	string textline;
	vector<course> F1;
	while(getline(file,textline)){
        if(textline=="First Semester") cout<<textline<<"\n";
		else{course s; 
        char no[20];
		char format[]="%[^,],%[^,],%[^,],%d";
		sscanf(textline.c_str(),format,s.code,no,s.name,&s.credit);
		//Use sscanf() to split the values in textline and assign those values to the members of struct s;

		F1.push_back(s); 	
        }	
	}
   printreport(F1);
}
