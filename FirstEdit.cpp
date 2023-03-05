#include<iostream>
#include"Readfile.cpp"
using namespace std;
void firstEdit(vector<course> &F1,vector<course> &F2,vector<course> &S1,vector<course> &S2,vector<course> &T1,vector<course> &T2,vector<course> &Fo1,vector<course> &Fo2,vector<course> &GE,vector<course> &LP,vector<course> &IC,vector<course> &MJ){
	string input;
	int state=1;
	cout<<"\n\t\t\t\t" << "First year 2nd Semester" << endl;
	while(state==1){
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
						state=2;
						F2.insert(F2.begin()+(F2.size()-1),GE[i]);
						GE.erase(GE.begin()+i);
						}
				}
				if(state==1) cout<<"Not found\n";
				
			}
	}
				cout<<"\n\t\t\t\t" << "First year 2nd Semester" << endl;
				for(unsigned int i = 0;i < F2.size()-1; i++){
					cout<<F2[i].credit<<" "<< F2[i].name << " ("<< F2[i].code << ")"<<"\n";
				}
    // cout<<"\n\t\t\t\t" << "General Education Elective Courses" << endl;
	// for(unsigned int i = 0;i < GE.size()-1; i++){
	// 	cout<<GE[i].credit<<" "<< GE[i].name << " ("<< GE[i].code << ")"<<"\n";
    // }

    //first
    // cout<<"\t\tPlease select General Education course\n";
	// 		cout<<"Input code that you want to select : ";
	// 		cin>>input;
	// 		text=ge(input);
	// 	// while(text=="0"){
	// 	// 	cout<<"Not found\n";
	// 	// 	cout<<"Please select General Education course\n";
	// 	// 	cout<<"Input General Education's code that you want to select :";
	// 	// 	cin>>input;
	// 	// 	text=GE(input);
	// 	// }
	// 	sscanf(text.c_str(),format,s.code,s.name,&s.credit);	
	// 	F2.insert(F2.begin()+(F2.size()-1),s);
    // //second
    //         cout<<"\t\tPlease select General Education course\n";
	// 		cout<<"Input code that you want to select : ";
	// 		cin>>input;
	// 	text=ge(input);
	// 	sscanf(text.c_str(),format,s.code,s.name,&s.credit);	
	// 	S1.insert(S1.begin()+(S1.size()-1),s);	
    // //third
    // cout<<"\t\tPlease select Major elective\n";
	// 		cout<<"Input code that you want to select : ";
	// 		cin>>input;
	// 		text=MajorElec(input);
	// 	sscanf(text.c_str(),format,s.code,s.name,&s.credit);	
	// 	T1.insert(T1.begin()+(T1.size()-1),s);
    // cout<<"\t\tPlease select Innovative Co-creator\n";
	// 		cout<<"Input code that you want to select : ";
	// 		cin>>input;
	// 	text=Innovative(input);
	// 	sscanf(text.c_str(),format,s.code,s.name,&s.credit);	
	// 	T1.insert(T1.begin()+(T1.size()-1),s);	
    
    // cout<<"\t\tPlease select Major elective\n";
	// 		cout<<"Input code that you want to select : ";
	// 		cin>>input;
	// 		text=MajorElec(input);
	// 	sscanf(text.c_str(),format,s.code,s.name,&s.credit);	
	// 	T2.insert(T2.begin()+(T2.size()-1),s);
    // cout<<"\t\tPlease select General Education\n";
	// 		cout<<"Input code that you want to select : ";
	// 		cin>>input;
	// 		text=ge(input);
	// 	sscanf(text.c_str(),format,s.code,s.name,&s.credit);	
	// 	T2.insert(T2.begin()+(T2.size()-1),s);	
    // cout<<"\t\tPlease select Learner person\n";
	// 		cout<<"Input code that you want to select : ";
	// 		cin>>input;
	// 		text=Learner(input);
	// 	sscanf(text.c_str(),format,s.code,s.name,&s.credit);	
	// 	T2.insert(T2.begin()+(T2.size()-1),s);	
    // //forth
    // cout<<"\t\tPlease select Major elective\n";
	// 		cout<<"Input code that you want to select : ";
	// 		cin>>input;
	// 		text=MajorElec(input);
	// 	sscanf(text.c_str(),format,s.code,s.name,&s.credit);	
	// 	Fo1.insert(Fo1.begin()+(Fo1.size()-1),s);	
	// // cout<<"\t\tPlease select Free Elective\n";
	// // 		cout<<"Input code that you want to select : ";
	// // 		cin>>input;
	// // 		text=MajorElec(input);
	// // 	sscanf(text.c_str(),format,s.code,s.name,&s.credit);	
	// // 	Fo1.insert(Fo1.begin()+(Fo1.size()-1),s);

    // cout<<"\t\tPlease select Major elective\n";
	// 		cout<<"Input code that you want to select : ";
	// 		cin>>input;
	// 		text=MajorElec(input);
	// 	sscanf(text.c_str(),format,s.code,s.name,&s.credit);	
	// 	Fo2.insert(Fo2.begin()+(Fo2.size()-1),s);	
	// // cout<<"\t\tPlease select Free Elective\n";
	// // 		cout<<"Input code that you want to select : ";
	// // 		cin>>input;
	// // 		text=MajorElec(input);
	// // 	sscanf(text.c_str(),format,s.code,s.name,&s.credit);	
	// // 	Fo2.insert(Fo2.begin()+(Fo2.size()-1),s);

}