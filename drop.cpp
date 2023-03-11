#include<iostream>
using namespace std;

void drop(vector<course> &F1,vector<course> &F2,vector<course> &S1,vector<course> &S2,vector<course> &T1,vector<course> &T2,vector<course> &Fo1,vector<course> &Fo2,vector<course> &GE,vector<course> &LP,vector<course> &IC,vector<course> &MJ){
	int y,s;
	int i = 1;
	string state = "a";
	while(i==1){	
		cout << "What year and semester do you want to drop?" << endl;
		cin >> y >> s;
		cout << "Test" << endl;
		switch (y)
		{
		case 1:
			if(s == 1){
				cout<<"\n\t\t\t\t" << "First year 1st Semester" << endl;
				for(unsigned int i = 0;i < F1.size()-1; i++){
						cout<<F1[i].credit<<" "<< F1[i].name << " ("<< F1[i].code << ")"<<"\n";
				}
				string code;
				while(state == "a"){
					cout<<"Input code that you want to delete : ";
					cin >> code;
					for(unsigned int i=0;i<F1.size()-1;i++){
						if(code==F1[i].code){
							F1.erase(F1.begin()+i);
							state = "b";
						}
					}
					if(state == "a"){
						cout << "Not found please try again." << endl;
					}
					string input,command = "a";
					while(command == "a"){
						cout << "Do you want to delete another subject? [Y]/[N]" << endl;
						cout << "Your input : ";
						cin >> input;
						if(input == "Y"){
							command = "b";
							state = "a";
						}else if(input == "N"){
							command = "b";
							state = "b";
						}else{
							command = "a";
						}
					}
				}
			}else if(s == 2){
				cout<<"\n\t\t\t\t" << "First year 2nd Semester" << endl;
				for(unsigned int i = 0;i < F2.size()-1; i++){
						cout<<F2[i].credit<<" "<< F2[i].name << " ("<< F2[i].code << ")"<<"\n";
				}
				string code;
				while(state == "a"){
					cout<<"Input code that you want to delete : ";
					cin >> code;
					for(unsigned int i=0;i<F2.size()-1;i++){
						if(code==F2[i].code){
							F2.erase(F2.begin()+i);
							state = "b";
						}
					}
					if(state == "a"){
						cout << "Not found please try again." << endl;
					}
					string input,command = "a";
					while(command == "a"){
						cout << "Do you want to delete another subject? [Y]/[N]" << endl;
						cout << "Your input : ";
						cin >> input;
						if(input == "Y"){
							command = "b";
							state = "a";
						}else if(input == "N"){
							command = "b";
							state = "b";
						}else{
							command = "a";
						}
					}
				}
			}else cout << "Not found" << endl;
			break;
		case 2:
			if(s == 1){
				cout<<"\n\t\t\t\t" << "Second year 2nd Semester" << endl;
				for(unsigned int i = 0;i < S1.size()-1; i++){
						cout<<S1[i].credit<<" "<< S1[i].name << " ("<< S1[i].code << ")"<<"\n";
				}
				string code;
				while(state == "a"){
					cout<<"Input code that you want to delete : ";
					cin >> code;
					for(unsigned int i=0;i<S1.size();i++){
						if(code==S1[i].code){
							S1.erase(S1.begin()+i);
							state = "b";
						}
					}
					if(state == "a"){
						cout << "Not found please try again." << endl;
					}
					string input,command = "a";
					while(command == "a"){
						cout << "Do you want to delete another subject? [Y]/[N]" << endl;
						cout << "Your input : ";
						cin >> input;
						if(input == "Y"){
							command = "b";
							state = "a";
						}else if(input == "N"){
							command = "b";
							state = "b";
						}else{
							command = "a";
						}
					}
				}
			}else if(s == 2){
				cout<<"\n\t\t\t\t" << "Second year 2nd Semester" << endl;
				for(unsigned int i = 0;i < S2.size()-1; i++){
						cout<< S2[i].credit<<" "<< S2[i].name << " ("<< S2[i].code << ")"<<"\n";
				}
				string code;
				while(state == "a"){
					cout<<"Input code that you want to delete : ";
					cin >> code;
					for(unsigned int i=0;i<S2.size()-1;i++){
						if(code==S2[i].code){
							S2.erase(S2.begin()+i);
							state = "b";
						}
					}
					if(state == "a"){
						cout << "Not found please try again." << endl;
					}
					string input,command = "a";
					while(command == "a"){
						cout << "Do you want to delete another subject? [Y]/[N]" << endl;
						cout << "Your input : ";
						cin >> input;
						if(input == "Y"){
							command = "b";
							state = "a";
						}else if(input == "N"){
							command = "b";
							state = "b";
						}else{
							command = "a";
						}
					}
				}
			}else cout << "Not found" << endl;
			break;
		case 3:
			if(s == 1){
				cout<<"\n\t\t\t\t" << "Third year 1st Semester" << endl;
				for(unsigned int i = 0;i < T1.size()-1; i++){
						cout<<T1[i].credit<<" "<< T1[i].name << " ("<< T1[i].code << ")"<<"\n";
				}
				string code;
				while(state == "a"){
					cout<<"Input code that you want to delete : ";
					cin >> code;
					for(unsigned int i=0;i<T1.size()-1;i++){
						if(code==T1[i].code){
							T1.erase(T1.begin()+i);
							state = "b";
						}
					}
					if(state == "a"){
						cout << "Not found please try again." << endl;
					}
					string input,command = "a";
					while(command == "a"){
						cout << "Do you want to delete another subject? [Y]/[N]" << endl;
						cout << "Your input : ";
						cin >> input;
						if(input == "Y"){
							command = "b";
							state = "a";
						}else if(input == "N"){
							command = "b";
							state = "b";
						}else{
							command = "a";
						}
					}
				}
			}else if(s == 2){
				cout<<"\n\t\t\t\t" << "Third year 2nd Semester" << endl;
				for(unsigned int i = 0;i < T2.size()-1; i++){
						cout<< T2[i].credit<<" "<< T2[i].name << " ("<< T2[i].code << ")"<<"\n";
				}
				string code;
				while(state == "a"){
					cout<<"Input code that you want to delete : ";
					cin >> code;
					for(unsigned int i=0;i<T2.size()-1;i++){
						if(code==T2[i].code){
							T2.erase(T2.begin()+i);
							state = "b";
						}
					}
					if(state == "a"){
						cout << "Not found please try again." << endl;
					}
					string input,command = "a";
					while(command == "a"){
						cout << "Do you want to delete another subject? [Y]/[N]" << endl;
						cout << "Your input : ";
						cin >> input;
						if(input == "Y"){
							command = "b";
							state = "a";
						}else if(input == "N"){
							command = "b";
							state = "b";
						}else{
							command = "a";
						}
					}
				}
			}else cout << "Not found" << endl;
			break;
		case 4:
			if(s == 1){
				cout<<"\n\t\t\t\t" << "Forth year 1st Semester" << endl;
				for(unsigned int i = 0;i < Fo1.size()-1; i++){
						cout<<Fo1[i].credit<<" "<< Fo1[i].name << " ("<< Fo1[i].code << ")"<<"\n";
				}
				string code;
				while(state == "a"){
					cout<<"Input code that you want to delete : ";
					cin >> code;
					for(unsigned int i=0;i<Fo1.size()-1;i++){
						if(code==Fo1[i].code){
							Fo1.erase(Fo1.begin()+i);
							state = "b";
						}
					}
					if(state == "a"){
						cout << "Not found please try again." << endl;
					}
					string input,command = "a";
					while(command == "a"){
						cout << "Do you want to delete another subject? [Y]/[N]" << endl;
						cout << "Your input : ";
						cin >> input;
						if(input == "Y"){
							command = "b";
							state = "a";
						}else if(input == "N"){
							command = "b";
							state = "b";
						}else{
							command = "a";
						}
					}
				}
			}else if(s == 2){
				cout<<"\n\t\t\t\t" << "Forth year 2nd Semester" << endl;
				for(unsigned int i = 0;i < Fo2.size(); i++){
						cout<<Fo2[i].credit<<" "<< Fo2[i].name << " ("<< Fo2[i].code << ")"<<"\n";
				}
				string code;
				while(state == "a"){
					cout<<"Input code that you want to delete : ";
					cin >> code;
					for(unsigned int i=0;i<Fo2.size();i++){
						if(code==Fo2[i].code){
							Fo2.erase(Fo2.begin()+i);
							state = "b";
						}
					}
					if(state == "a"){
						cout << "Not found please try again." << endl;
					}
					string input,command = "a";
					while(command == "a"){
						cout << "Do you want to delete another subject? [Y]/[N]" << endl;
						cout << "Your input : ";
						cin >> input;
						if(input == "Y"){
							command = "b";
							state = "a";
						}else if(input == "N"){
							command = "b";
							state = "b";
						}else{
							command = "a";
						}
					}
				}
			}else cout << "Not found" << endl;
			break;
		default:
			cout << "Not found" << endl;
			break;
		}
		int k = 0;
		string yChoose;
		do{
		cout << "Do you want to delete again? [Y]/[N]" << endl;
		cin >> yChoose;
		yChoose = toUpperStr(yChoose);
		if(yChoose == "Y"){
			k = 1;
			state = "a";
		}else if(yChoose == "N"){
			k = 1;
			i = 0;
		}else{
			k = 0;
		}
		}while(k == 0);
	}
	printreport(F1,F2,S1,S2,T1,T2,Fo1,Fo2);
}