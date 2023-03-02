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
		cout<<F1[i].credit<<" "<< F1[i].name << " ("<< F1[i].code << ")"<<"\n";
    }
}
void readfilef1(vector<course> &T){
    ifstream file("1.txt");
	string textline;
	
    
	while(getline(file,textline)){
        
		course s; 

		char format[]="%[^,],%[^,],%d";
		sscanf(textline.c_str(),format,s.code,s.name,&s.credit);
		//Use sscanf() to split the values in textline and assign those values to the members of struct s;
        
         
		T.push_back(s); 	
        
	}
  
}
void readfilef2(vector<course> &T){
    ifstream file("2.txt");
	string textline;

    
	while(getline(file,textline)){
        
		course s; 

		char format[]="%[^,],%[^,],%d";
		sscanf(textline.c_str(),format,s.code,s.name,&s.credit);
		//Use sscanf() to split the values in textline and assign those values to the members of struct s;
        
         
		T.push_back(s); 	
        
	}
  
}
void readfiles1(vector<course> &T){
    ifstream file("3.txt");
	string textline;
	
    
	while(getline(file,textline)){
        
		course s; 

		char format[]="%[^,],%[^,],%d";
		sscanf(textline.c_str(),format,s.code,s.name,&s.credit);
		//Use sscanf() to split the values in textline and assign those values to the members of struct s;
        
         
		T.push_back(s); 	
        
	}
  
}
void readfiles2(vector<course> &T){
    ifstream file("4.txt");
	string textline;
	
    
	while(getline(file,textline)){
        
		course s; 

		char format[]="%[^,],%[^,],%d";
		sscanf(textline.c_str(),format,s.code,s.name,&s.credit);
		//Use sscanf() to split the values in textline and assign those values to the members of struct s;
        
         
		T.push_back(s); 	
        
	}
  
}
void readfilet1(vector<course> &T){
    ifstream file("5.txt");
	string textline;
	
    
	while(getline(file,textline)){
        
		course s; 

		char format[]="%[^,],%[^,],%d";
		sscanf(textline.c_str(),format,s.code,s.name,&s.credit);
		//Use sscanf() to split the values in textline and assign those values to the members of struct s;
        
         
		T.push_back(s); 	
        
	}
  
}
void readfilet2(vector<course> &T){
    ifstream file("6.txt");
	string textline;
	
    
	while(getline(file,textline)){
        
		course s; 

		char format[]="%[^,],%[^,],%d";
		sscanf(textline.c_str(),format,s.code,s.name,&s.credit);
		//Use sscanf() to split the values in textline and assign those values to the members of struct s;
        
         
		T.push_back(s); 	
        
	}
  
}
void readfilefo1(vector<course> &T){
    ifstream file("7.txt");
	string textline;
	
    
	while(getline(file,textline)){
        
		course s; 

		char format[]="%[^,],%[^,],%d";
		sscanf(textline.c_str(),format,s.code,s.name,&s.credit);
		//Use sscanf() to split the values in textline and assign those values to the members of struct s;
        
         
		T.push_back(s); 	
        
	}
  
}
void readfilefo2(vector<course> &T){
    ifstream file("8.txt");
	string textline;
	
    
	while(getline(file,textline)){
        
		course s; 

		char format[]="%[^,],%[^,],%d";
		sscanf(textline.c_str(),format,s.code,s.name,&s.credit);
		//Use sscanf() to split the values in textline and assign those values to the members of struct s;
        
         
		T.push_back(s); 	
        
	}
  
}

