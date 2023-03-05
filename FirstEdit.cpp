#include<iostream>
#include"Readfile.cpp"
using namespace std;
void firstEdit(vector<course> &F1,vector<course> &F2,vector<course> &S1,vector<course> &S2,vector<course> &T1,vector<course> &T2,vector<course> &Fo1,vector<course> &Fo2,vector<course> &GE,vector<course> &LP,vector<course> &IC,vector<course> &MJ){
	string input;
	int state=1,a=1;
	cout<<"\n\t\t\t\t" << "First year 2nd Semester" << endl;
	while(state==a){
		cout<<"Please select General Education course <type 1 to see curriculum> <type 2 to see GE that you can select>\n";
		cout<<"Input code that you want to select : ";
		cin>>input;
			if(input=="1"){
				cout<<"\n\t\t\t\t" << "First year 2nd Semester" << endl;
				for(unsigned int i = 0;i < F2.size()-1; i++){
					cout<<F2[i].credit<<" "<< F2[i].name << " ("<< F2[i].code << ")"<<"\n";
				}
			}
			if(input=="2"){
				 cout<<"\n\t\t\t\t" << "General Education Elective Courses" << endl;
				for(unsigned int i = 0;i < GE.size()-1; i++){
					cout<<GE[i].credit<<" "<< GE[i].name << " ("<< GE[i].code << ")"<<"\n";
    			}
			}
			else{
				for(unsigned int i=0;i<GE.size();i++){
					if(GE[i].code==input){
						state++;
						F2.insert(F2.begin()+(F2.size()-1),GE[i]);
						GE.erase(GE.begin()+i);
						}
				}
				if(state==a) cout<<"Not found\n";
				
			}
	}
	a++;
	cout<<"\n\t\t\t\t" << "Second year 1st Semester" << endl;
	while(state==a){
		cout<<"Please select General Education course <type 1 to see curriculum> <type 2 to see GE that you can select>\n";
		cout<<"Input code that you want to select : ";
		cin>>input;
			if(input=="1"){
				cout<<"\n\t\t\t\t" << "Second year 1st Semester" << endl;
				for(unsigned int i = 0;i < F2.size()-1; i++){
					cout<<S1[i].credit<<" "<< S1[i].name << " ("<< S1[i].code << ")"<<"\n";
				}
			}
			if(input=="2"){
				 cout<<"\n\t\t\t\t" << "General Education Elective Courses" << endl;
				for(unsigned int i = 0;i < GE.size()-1; i++){
					cout<<GE[i].credit<<" "<< GE[i].name << " ("<< GE[i].code << ")"<<"\n";
    			}
			}
			else{
				for(unsigned int i=0;i<GE.size();i++){
					if(GE[i].code==input){
						state++;
						S1.insert(S1.begin()+(S1.size()-1),GE[i]);
						GE.erase(GE.begin()+i);
						}
				}
				if(state==a) cout<<"Not found\n";		
			}
	}
	a++;		
	cout<<"\n\t\t\t\t" << "Third year 1st Semester" << endl;
	while(state==a){
		cout<<"Please select Major Elective course <type 1 to see curriculum> <type 2 to see MJ that you can select>\n";
		cout<<"Input code that you want to select : ";
		cin>>input;
			if(input=="1"){
				cout<<"\n\t\t\t\t" <<  "Third year 1st Semester" << endl;
				for(unsigned int i = 0;i < T1.size()-1; i++){
					cout<<T1[i].credit<<" "<< T1[i].name << " ("<< T1[i].code << ")"<<"\n";
				}
			}
			if(input=="2"){
				 cout<<"\n\t\t\t\t" << "Major Elective Courses" << endl;
				for(unsigned int i = 0;i < MJ.size()-1; i++){
					cout<<MJ[i].credit<<" "<< MJ[i].name << " ("<< MJ[i].code << ")"<<"\n";
    			}
			}
			else{
				for(unsigned int i=0;i<MJ.size();i++){
					if(MJ[i].code==input){
						state++;
						T1.insert(T1.begin()+(T1.size()-1),MJ[i]);
						MJ.erase(MJ.begin()+i);
						}
				}
				if(state==a) cout<<"Not found\n";		
			}
	}
	a++;
while(state==a){
		cout<<"Please select Innovative Co-creator course <type 1 to see curriculum> <type 2 to see IC that you can select>\n";
		cout<<"Input code that you want to select : ";
		cin>>input;
			if(input=="1"){
				cout<<"\n\t\t\t\t" <<  "Third year 1st Semester" << endl;
				for(unsigned int i = 0;i < T1.size()-1; i++){
					cout<<T1[i].credit<<" "<< T1[i].name << " ("<< T1[i].code << ")"<<"\n";
				}
			}
			if(input=="2"){
				 cout<<"\n\t\t\t\t" << "Innovative Co-creator course" << endl;
				for(unsigned int i = 0;i < IC.size()-1; i++){
					cout<<IC[i].credit<<" "<< IC[i].name << " ("<< IC[i].code << ")"<<"\n";
    			}
			}
			else{
				for(unsigned int i=0;i<IC.size();i++){
					if(IC[i].code==input){
						state++;
						T1.insert(T1.begin()+(T1.size()-1),IC[i]);
						IC.erase(IC.begin()+i);
						}
				}
				if(state==a) cout<<"Not found\n";		
			}
	}
	a++;
cout<<"\n\t\t\t\t" << "Third year 2nd Semester" << endl;
	while(state==a){
		cout<<"Please select Major Elective course <type 1 to see curriculum> <type 2 to see MJ that you can select>\n";
		cout<<"Input code that you want to select : ";
		cin>>input;
			if(input=="1"){
				cout<<"\n\t\t\t\t" <<  "Third year 2nd Semester" << endl;
				for(unsigned int i = 0;i < T2.size()-1; i++){
					cout<<T2[i].credit<<" "<< T2[i].name << " ("<< T2[i].code << ")"<<"\n";
				}
			}
			if(input=="2"){
				 cout<<"\n\t\t\t\t" << "Major Elective Courses" << endl;
				for(unsigned int i = 0;i < MJ.size()-1; i++){
					cout<<MJ[i].credit<<" "<< MJ[i].name << " ("<< MJ[i].code << ")"<<"\n";
    			}
			}
			else{
				for(unsigned int i=0;i<MJ.size();i++){
					if(MJ[i].code==input){
						state++;
						T2.insert(T2.begin()+(T2.size()-1),MJ[i]);
						MJ.erase(MJ.begin()+i);
						}
				}
				if(state==a) cout<<"Not found\n";		
			}
	}
	a++;
while(state==a){
		cout<<"Please select General Education Elective course <type 1 to see curriculum> <type 2 to see GE that you can select>\n";
		cout<<"Input code that you want to select : ";
		cin>>input;
			if(input=="1"){
				cout<<"\n\t\t\t\t" <<  "Third year 2nd Semester" << endl;
				for(unsigned int i = 0;i < T2.size()-1; i++){
					cout<<T2[i].credit<<" "<< T2[i].name << " ("<< T2[i].code << ")"<<"\n";
				}
			}
			if(input=="2"){
				 cout<<"\n\t\t\t\t" << "General Education Elective Courses" << endl;
				for(unsigned int i = 0;i < GE.size()-1; i++){
					cout<<GE[i].credit<<" "<< GE[i].name << " ("<< GE[i].code << ")"<<"\n";
    			}
			}
			else{
				for(unsigned int i=0;i<GE.size();i++){
					if(GE[i].code==input){
						state++;
						T2.insert(T2.begin()+(T2.size()-1),GE[i]);
						GE.erase(GE.begin()+i);
						}
				}
				if(state==a) cout<<"Not found\n";		
			}
	}
	a++;
while(state==a){
		cout<<"Please select Learner person course <type 1 to see curriculum> <type 2 to see LP that you can select>\n";
		cout<<"Input code that you want to select : ";
		cin>>input;
			if(input=="1"){
				cout<<"\n\t\t\t\t" <<  "Third year 2nd Semester" << endl;
				for(unsigned int i = 0;i < T2.size()-1; i++){
					cout<<T2[i].credit<<" "<< T2[i].name << " ("<< T2[i].code << ")"<<"\n";
				}
			}
			if(input=="2"){
				 cout<<"\n\t\t\t\t" << "Learner person Courses" << endl;
				for(unsigned int i = 0;i < LP.size()-1; i++){
					cout<<LP[i].credit<<" "<< LP[i].name << " ("<< LP[i].code << ")"<<"\n";
    			}
			}
			else{
				for(unsigned int i=0;i<LP.size();i++){
					if(LP[i].code==input){
						state++;
						T2.insert(T2.begin()+(T2.size()-1),LP[i]);
						LP.erase(LP.begin()+i);
						}
				}
				if(state==a) cout<<"Not found\n";		
			}
	}
	a++;
cout<<"\n\t\t\t\t" << "Forth year 1st Semester" << endl;
	while(state==a){
		cout<<"Please select Major Elective course <type 1 to see curriculum> <type 2 to see MJ that you can select>\n";
		cout<<"Input code that you want to select : ";
		cin>>input;
			if(input=="1"){
				cout<<"\n\t\t\t\t" <<  "Forth year 1st Semester" << endl;
				for(unsigned int i = 0;i < Fo1.size()-1; i++){
					cout<<Fo1[i].credit<<" "<< Fo1[i].name << " ("<< Fo1[i].code << ")"<<"\n";
				}
			}
			if(input=="2"){
				 cout<<"\n\t\t\t\t" << "Major Elective Courses" << endl;
				for(unsigned int i = 0;i < MJ.size()-1; i++){
					cout<<MJ[i].credit<<" "<< MJ[i].name << " ("<< MJ[i].code << ")"<<"\n";
    			}
			}
			else{
				for(unsigned int i=0;i<MJ.size();i++){
					if(MJ[i].code==input){
						state++;
						Fo1.insert(Fo1.begin()+(Fo1.size()-1),MJ[i]);
						MJ.erase(MJ.begin()+i);
						}
				}
				if(state==a) cout<<"Not found\n";		
			}
	}
	a++; 
	while(state==a){
		
		cout<<"Please select Free Elective course <type 1 to see curriculum> \n";
		cout<<"Input code that you want to select : ";
		cin>>input;
			if(input=="1"){
				cout<<"\n\t\t\t\t" <<  "Forth year 1st Semester" << endl;
				for(unsigned int i = 0;i < Fo1.size()-1; i++){
					cout<<Fo1[i].credit<<" "<< Fo1[i].name << " ("<< Fo1[i].code << ")"<<"\n";
				}
			}
			else{
			cout<<"Input name's course : ";
			cout<<"Input credit's course : ";
			state++;
			// Fo1.insert(Fo1.begin()+(Fo1.size()-1),);				
			}
	}
	a++;  
cout<<"\n\t\t\t\t" << "Forth year 2nd Semester" << endl;
	while(state==a){
		cout<<"Please select Major Elective course <type 1 to see curriculum> <type 2 to see MJ that you can select>\n";
		cout<<"Input code that you want to select : ";
		cin>>input;
			if(input=="1"){
				cout<<"\n\t\t\t\t" <<  "Forth year 2nd Semester" << endl;
				for(unsigned int i = 0;i < Fo2.size()-1; i++){
					cout<<Fo2[i].credit<<" "<< Fo2[i].name << " ("<< Fo2[i].code << ")"<<"\n";
				}
			}
			if(input=="2"){
				 cout<<"\n\t\t\t\t" << "Major Elective Courses" << endl;
				for(unsigned int i = 0;i < MJ.size()-1; i++){
					cout<<MJ[i].credit<<" "<< MJ[i].name << " ("<< MJ[i].code << ")"<<"\n";
    			}
			}
			else{
				for(unsigned int i=0;i<MJ.size();i++){
					if(MJ[i].code==input){
						state++;
						Fo2.insert(Fo2.begin()+(Fo2.size()-1),MJ[i]);
						MJ.erase(MJ.begin()+i);
						}
				}
				if(state==a) cout<<"Not found\n";		
			}
	}
	a++; 
	while(state==a){
		
		cout<<"Please select Free Elective course <type 1 to see curriculum> \n";
		cout<<"Input code that you want to select : ";
		cin>>input;
			if(input=="1"){
				cout<<"\n\t\t\t\t" <<  "Forth year 2nd Semester" << endl;
				for(unsigned int i = 0;i < Fo2.size()-1; i++){
					cout<<Fo2[i].credit<<" "<< Fo2[i].name << " ("<< Fo2[i].code << ")"<<"\n";
				}
			}
			else{
			cout<<"Input name's course : ";
			cout<<"Input credit's course : ";
			state++;
			// Fo1.insert(Fo1.begin()+(Fo1.size()-1),);				
			}
	}
	a++;  
}