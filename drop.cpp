#include<iostream>
using namespace std;

void drop(vector<course> &F1,vector<course> &F2,vector<course> &S1,vector<course> &S2,vector<course> &T1,vector<course> &T2,vector<course> &Fo1,vector<course> &Fo2,vector<course> &GE,vector<course> &LP,vector<course> &IC,vector<course> &MJ){
	int y,s;
	int i = 1;
	while(i==1){	
		cout << "What year and semester do you want to drop?" << endl;
		cin >> y >> s;
		switch (y)
		{
		case 1:
			if(s == 1){
				cout<<"\n\t\t\t\t" << "First year 1st Semester" << endl;
				for(unsigned int i = 0;i < F1.size()-1; i++){
						cout<<F1[i].credit<<" "<< F1[i].name << " ("<< F1[i].code << ")"<<"\n";
				}
				string code;
				cout<<"Input code that you want to delete : ";
				cin >> code;
			}else if(s == 2){
				cout<<"\n\t\t\t\t" << "First year 2nd Semester" << endl;
				for(unsigned int i = 0;i < F2.size()-1; i++){
						cout<<F2[i].credit<<" "<< F2[i].name << " ("<< F2[i].code << ")"<<"\n";
				}
				string code;
				cout<<"Input code that you want to delete : ";
				cin >> code;
			}else cout << "Not found" << endl;
			break;
		case 2:
			if(s == 1){
				cout<<"\n\t\t\t\t" << "Second year 1st Semester" << endl;
				for(unsigned int i = 0;i < S1.size()-1; i++){
						cout<<S1[i].credit<<" "<< S1[i].name << " ("<< S1[i].code << ")"<<"\n";
				}
				string code;
				cout<<"Input code that you want to delete : ";
				cin >> code;
			}else if(s == 2){
				cout<<"\n\t\t\t\t" << "Second year 2nd Semester" << endl;
				for(unsigned int i = 0;i < S2.size()-1; i++){
						cout<< S2[i].credit<<" "<< S2[i].name << " ("<< S2[i].code << ")"<<"\n";
				}
				string code;
				cout<<"Input code that you want to delete : ";
				cin >> code;
			}else cout << "Not found" << endl;
			break;
		case 3:
			if(s == 1){
				cout<<"\n\t\t\t\t" << "Third year 1st Semester" << endl;
				for(unsigned int i = 0;i < T1.size()-1; i++){
						cout<<T1[i].credit<<" "<< T1[i].name << " ("<< T1[i].code << ")"<<"\n";
				}
				string code;
				cout<<"Input code that you want to delete : ";
				cin >> code;
			}else if(s == 2){
				cout<<"\n\t\t\t\t" << "Third year 2nd Semester" << endl;
				for(unsigned int i = 0;i < T2.size()-1; i++){
						cout<< T2[i].credit<<" "<< T2[i].name << " ("<< T2[i].code << ")"<<"\n";
				}
				string code;
				cout<<"Input code that you want to delete : ";
				cin >> code;
			}else cout << "Not found" << endl;
			break;
		case 4:
			if(s == 1){
				cout<<"\n\t\t\t\t" << "Forth year 1st Semester" << endl;
				for(unsigned int i = 0;i < F2.size()-1; i++){
						cout<<F1[i].credit<<" "<< F1[i].name << " ("<< F1[i].code << ")"<<"\n";
				}
				string code;
				cout<<"Input code that you want to delete : ";
				cin >> code;
			}else if(s == 2){
				cout<<"\n\t\t\t\t" << "Forth year 2nd Semester" << endl;
				for(unsigned int i = 0;i < F2.size()-1; i++){
						cout<<F1[i].credit<<" "<< F1[i].name << " ("<< F1[i].code << ")"<<"\n";
				}
				string code;
				cout<<"Input code that you want to delete : ";
				cin >> code;
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
		}else if(yChoose == "N"){
			k = 1;
			i = 0;
		}else{
			k = 0;
		}
		}while(k == 0);
	}
}