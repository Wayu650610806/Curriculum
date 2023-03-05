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
int printreport(vector<course> F1,vector<course> F2,vector<course> S1,vector<course>S2,vector<course> T1,vector<course> T2,vector<course> Fo1,vector<course> Fo2){
	int credit = 0;
	cout<<"\t\t\t\t" << "First year 1st Semester" << endl;
	for(unsigned int i = 0;i < F1.size()-1; i++){
		cout<<F1[i].credit<<" "<< F1[i].name << " ("<< F1[i].code << ")"<<"\n";
		credit = credit + F1[i].credit;
    }
	cout<<"\t\t\t\t" << "First year 2nd Semester" << endl;
	for(unsigned int i = 0;i < F2.size()-1; i++){
		cout<<F2[i].credit<<" "<< F2[i].name << " ("<< F2[i].code << ")"<<"\n";
		credit = credit + F2[i].credit;
    }
	cout<<"\t\t\t\t" << "Second year 1st Semester" << endl;
	for(unsigned int i = 0;i < S1.size()-1; i++){
		cout<<S1[i].credit<<" "<< S1[i].name << " ("<< S1[i].code << ")"<<"\n";
		credit = credit + S1[i].credit;
    }
	cout<<"\t\t\t\t" << "Second year 2nd Semester" << endl;
	for(unsigned int i = 0;i < S2.size()-1; i++){
		cout<<S2[i].credit<<" "<< S2[i].name << " ("<< S2[i].code << ")"<<"\n";
		credit = credit + S2[i].credit;
    }
	cout<<"\t\t\t\t" << "Third year 1st Semester" << endl;
	for(unsigned int i = 0;i < T1.size()-1; i++){
		cout<<T1[i].credit<<" "<< T1[i].name << " ("<< T1[i].code << ")"<<"\n";
		credit = credit + T1[i].credit;
    }
	cout<<"\t\t\t\t" << "Third year 2nd Semester" << endl;
	for(unsigned int i = 0;i < T2.size()-1; i++){
		cout<<T2[i].credit<<" "<< T2[i].name << " ("<< T2[i].code << ")"<<"\n";
		credit = credit + T2[i].credit;
    }
	cout<<"\t\t\t\t" << "Forth year 1st Semester" << endl;
	for(unsigned int i = 0;i < Fo1.size()-1; i++){
		cout<<Fo1[i].credit<<" "<< Fo1[i].name << " ("<< Fo1[i].code << ")"<<"\n";
		credit = credit + Fo1[i].credit;
    }
	cout<<"\t\t\t\t" << "Forth year 2nd Semester" << endl;
	for(unsigned int i = 0;i < Fo2.size(); i++){
		cout<<Fo2[i].credit<<" "<< Fo2[i].name << " ("<< Fo2[i].code << ")"<<"\n";
		credit = credit + Fo2[i].credit;
    }
	return credit;
}
void readfile(vector<course> &F1,vector<course> &F2,vector<course> &S1,vector<course> &S2,vector<course> &T1,vector<course> &T2,vector<course> &Fo1,vector<course> &Fo2){
    ifstream file("cuorigin.txt");
	string textline;
	int y = 0 ,s = 0,state = 1;
	int i = 0;
	while(getline(file,textline)){
		if(state == 1){
			if(textline == "F2"){ 
				state =2;
				}
			course s;
			char format[]="%[^,],%[^,],%d";
			sscanf(textline.c_str(),format,s.code,s.name,&s.credit);
			//Use sscanf() to split the values in textline and assign those values to the members of struct s;
			F1.push_back(s);
		}
		if(state == 2){
			if(textline == "S1"){ 
				state = 3;
				}
			if(textline == "F2") i = 1; 
			if(textline == "F2" || i != 1) continue;
			course s;
			char format[]="%[^,],%[^,],%d";
			sscanf(textline.c_str(),format,s.code,s.name,&s.credit);
			//Use sscanf() to split the values in textline and assign those values to the members of struct s;
			F2.push_back(s); 	
		}
		if(state == 3){
			if(textline == "S2"){ 
				state = 4;
				}
			if(textline == "S1") i = 1; 
			if(textline == "S1" || i != 1) continue;
			course s;
			char format[]="%[^,],%[^,],%d";
			sscanf(textline.c_str(),format,s.code,s.name,&s.credit);
			//Use sscanf() to split the values in textline and assign those values to the members of struct s;
			S1.push_back(s); 	
		}
		if(state == 4){
			if(textline == "T1"){ 
				state = 5;
			}
			if(textline == "S2") i = 1; 
			if(textline == "S2" || i != 1) continue;
			course s;
			char format[]="%[^,],%[^,],%d";
			sscanf(textline.c_str(),format,s.code,s.name,&s.credit);
			//Use sscanf() to split the values in textline and assign those values to the members of struct s;
			S2.push_back(s); 	
		}
		if(state == 5){
			if(textline == "T2"){ 
				state = 6;
				}
			if(textline == "T1") i = 1; 
			if(textline == "T1" || i != 1) continue;
			course s;
			char format[]="%[^,],%[^,],%d";
			sscanf(textline.c_str(),format,s.code,s.name,&s.credit);
			//Use sscanf() to split the values in textline and assign those values to the members of struct s;
			T1.push_back(s); 	
		}
		if(state == 6){
			if(textline == "Fo1"){ 
				state = 7;
				}
			if(textline == "T2") i = 1; 
			if(textline == "T2" || i != 1) continue;
			course s;
			char format[]="%[^,],%[^,],%d";
			sscanf(textline.c_str(),format,s.code,s.name,&s.credit);
			//Use sscanf() to split the values in textline and assign those values to the members of struct s;
			T2.push_back(s); 	
		}
		if(state == 7){
			if(textline == "Fo2"){ 
				state = 8;
				}
			if(textline == "Fo1") i = 1; 
			if(textline == "Fo1" || i != 1) continue;
			course s;
			char format[]="%[^,],%[^,],%d";
			sscanf(textline.c_str(),format,s.code,s.name,&s.credit);
			//Use sscanf() to split the values in textline and assign those values to the members of struct s;
			Fo1.push_back(s); 	
		}
		if(state == 8){
			if(textline == "Fo2") i = 1; 
			if(textline == "Fo2" || i != 1) continue;
			course s;
			char format[]="%[^,],%[^,],%d";
			sscanf(textline.c_str(),format,s.code,s.name,&s.credit);
			//Use sscanf() to split the values in textline and assign those values to the members of struct s;
			Fo2.push_back(s); 	
		}
	}
}
