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
int printreport(vector<course> F1){
	int credit = 0;
	for(unsigned int i = 0;i < F1.size(); i++){
		cout<<F1[i].credit<<" "<< F1[i].name << " ("<< F1[i].code << ")"<<"\n";
		credit = credit + F1[i].credit;
    }
	return credit;
}
void readfile(vector<course> &F1){
    ifstream file("cuorigin.txt");
	string textline;
	int y=0,s=0,state=0;
	cout << "Input Year and Semester : ";
	cin >> y >> s;
    // if(y==1 && s==1){
	// 	while(getline(file,textline)){
	// 		if(textline=="F2") break;
	// 		course s; 

	// 		char format[]="%[^,],%[^,],%d";
	// 		sscanf(textline.c_str(),format,s.code,s.name,&s.credit);
	// 		//Use sscanf() to split the values in textline and assign those values to the members of struct s;
			
			
	// 		F1.push_back(s); 	
			
	// 	}
	// }
	int i = 0;
	if(y==1 && s==1){
		state = 1;
	}else if(y==1 && s==2){
		state = 2;
	}else if(y==2 && s==1){
		state = 3;
	}else if(y==2 && s==2){
		state = 4;
	}else if(y==3 && s==1){
		state = 5;
	}else if(y==3 && s==2){
		state = 6;
	}else if(y==4 && s==1){
		state = 7;
	}else if(y==4 && s==2){
		state = 8;
	}
	cout << y << " " << s << " " << state << endl;
	while(getline(file,textline)){
		if(state == 1){
			if(textline == "F2") break;
			course s;
			char format[]="%[^,],%[^,],%d";
			sscanf(textline.c_str(),format,s.code,s.name,&s.credit);
			//Use sscanf() to split the values in textline and assign those values to the members of struct s;
			F1.push_back(s); 	
		}
		if(state == 2){
			if(textline == "S1") break;
			if(textline == "F2") i = 1; 
			if(textline == "F2" || i != 1) continue;
			course s;
			char format[]="%[^,],%[^,],%d";
			sscanf(textline.c_str(),format,s.code,s.name,&s.credit);
			//Use sscanf() to split the values in textline and assign those values to the members of struct s;
			F1.push_back(s); 	
		}
		if(state == 3){
			if(textline == "S2") break;
			if(textline == "S1") i = 1; 
			if(textline == "S1" || i != 1) continue;
			course s;
			char format[]="%[^,],%[^,],%d";
			sscanf(textline.c_str(),format,s.code,s.name,&s.credit);
			//Use sscanf() to split the values in textline and assign those values to the members of struct s;
			F1.push_back(s); 	
		}
		if(state == 4){
			if(textline == "T1") break;
			if(textline == "S2") i = 1; 
			if(textline == "S2" || i != 1) continue;
			course s;
			char format[]="%[^,],%[^,],%d";
			sscanf(textline.c_str(),format,s.code,s.name,&s.credit);
			//Use sscanf() to split the values in textline and assign those values to the members of struct s;
			F1.push_back(s); 	
		}
		if(state == 5){
			if(textline == "T2") break;
			if(textline == "T1") i = 1; 
			if(textline == "T1" || i != 1) continue;
			course s;
			char format[]="%[^,],%[^,],%d";
			sscanf(textline.c_str(),format,s.code,s.name,&s.credit);
			//Use sscanf() to split the values in textline and assign those values to the members of struct s;
			F1.push_back(s); 	
		}
		if(state == 6){
			if(textline == "Fo1") break;
			if(textline == "T2") i = 1; 
			if(textline == "T2" || i != 1) continue;
			course s;
			char format[]="%[^,],%[^,],%d";
			sscanf(textline.c_str(),format,s.code,s.name,&s.credit);
			//Use sscanf() to split the values in textline and assign those values to the members of struct s;
			F1.push_back(s); 	
		}
		if(state == 7){
			if(textline == "Fo2") break;
			if(textline == "Fo1") i = 1; 
			if(textline == "Fo1" || i != 1) continue;
			course s;
			char format[]="%[^,],%[^,],%d";
			sscanf(textline.c_str(),format,s.code,s.name,&s.credit);
			//Use sscanf() to split the values in textline and assign those values to the members of struct s;
			F1.push_back(s); 	
		}
		if(state == 8){
			if(textline == "Fo2") i = 1; 
			if(textline == "Fo2" || i != 1) continue;
			course s;
			char format[]="%[^,],%[^,],%d";
			sscanf(textline.c_str(),format,s.code,s.name,&s.credit);
			//Use sscanf() to split the values in textline and assign those values to the members of struct s;
			F1.push_back(s); 	
		}
	}
}
