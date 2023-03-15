#include<iostream>
#include"Readfile.cpp"
using namespace std;
void firstEdit(vector<course> &F1,vector<course> &F2,vector<course> &S1,vector<course> &S2,vector<course> &T1,vector<course> &T2,vector<course> &Fo1,vector<course> &Fo2,vector<course> &GE,vector<course> &LP,vector<course> &IC,vector<course> &MJ,vector<course> &FR){
	string input;
	int state=1,a=1,c=0,temp=0;
	cout<<"\n\t\t\t\t" << "First year 2nd Semester" << endl;
	while(state==a){
		cout<<endl<<"You have "<<3-temp<<" credits to select"<<endl;
		cout<<"Select General Education course\n";
		cout<<"\t<type 1 to see Curriculum>\n";
		cout<<"\t<type 2 to see selectable GE>\n";
		cout<<"\tInput your code : ";
		cin>>input;
		c=0;
			if(input=="1"){
				cout<<"\n\t\t\t\t" << "First year 2nd Semester" << endl;
				for(unsigned int i = 0;i < F2.size()-1; i++){
					cout<<F2[i].credit<<" "<< F2[i].name << " ("<< F2[i].code << ")"<<"\n";
				}
				cout<<endl;
			}
			else if(input=="2"){
				 cout<<"\n\t\t\t\t" << "General Education Elective Courses" << endl;
				for(unsigned int i = 0;i < GE.size()-1; i++){
					cout<<GE[i].credit<<" "<< GE[i].name << " ("<< GE[i].code << ")"<<"\n";
    			}
				cout<<endl;
			}
			else{
				for(unsigned int i=0;i<GE.size();i++){
					if(GE[i].code==input){
						temp+=GE[i].credit;
						cout<<"You have selected "<<GE[i].name << "!!" <<endl;
						F2.insert(F2.begin()+(F2.size()-1),GE[i]);
						GE.erase(GE.begin()+i);
						c=1;
						}
				}
				for(unsigned int i=0;i<FR.size();i++){
							if(FR[i].code==input) FR.erase(FR.begin()+i);
						}
				if(c==0) cout<<"Not found\n";
			}
	 c=0;
		for(unsigned int i = 0;i < F2.size()-1; i++){
					c+=F2[i].credit;
				}
		if(temp>2){
			temp=0;
			state++;
		}
	}
	a++;
	cout<<"\n\t\t\t\t" << "First year 2nd Semester" << endl;
		for(unsigned int i = 0;i < F2.size()-1; i++){
			cout<<F2[i].credit<<" "<< F2[i].name << " ("<< F2[i].code << ")"<<"\n";
		}
	cout<<"\n\t\t\t\t" << "Second year 1st Semester" << endl;
	while(state==a){
		cout<<endl<<"You have "<<3-temp<<" credits to select"<<endl;
		cout<<"Select General Education course\n";
		cout<<"\t<type 1 to see Curriculum>\n";
		cout<<"\t<type 2 to see selectable GE>\n";
		cout<<"\tInput your code : ";
		cin>>input;
		c=0;
			if(input=="1"){
				cout<<"\n\t\t\t\t" << "Second year 1st Semester" << endl;
				for(unsigned int i = 0;i < S1.size()-1; i++){
					cout<<S1[i].credit<<" "<< S1[i].name << " ("<< S1[i].code << ")"<<"\n";
				}
				cout<<endl;
			}
			else if(input=="2"){
				 cout<<"\n\t\t\t\t" << "General Education Elective Courses" << endl;
				for(unsigned int i = 0;i < GE.size()-1; i++){
				
						cout<<GE[i].credit<<" "<< GE[i].name << " ("<< GE[i].code << ")"<<"\n";
					
    			}
				cout<<endl;
			}
			else{
				for(unsigned int i=0;i<GE.size();i++){
					if(GE[i].code==input ){
						temp+=GE[i].credit;
						cout<<"You have selected "<<GE[i].name << "!!" <<endl;
						S1.insert(S1.begin()+(S1.size()-1),GE[i]);
						GE.erase(GE.begin()+i);
						c=1;
						}
				}
				for(unsigned int i=0;i<FR.size();i++){
							if(FR[i].code==input) FR.erase(FR.begin()+i);
						}
				if(c==0) cout<<"Not found\n";
			}
		c=0;
		for(unsigned int i = 0;i < S1.size()-1; i++){
			c+=S1[i].credit;
		}
		if(c>22){
			cout<<"Your credits are more than 22 please select again\n";
			for(unsigned int i=S1.size()-1;i>7;i--){
				GE.insert(GE.begin()+(GE.size()-1),S1[i-1]);
	 			S1.erase(S1.begin()+i);
				c=0;
			}
		}
		if(temp>2){
			temp=0;
			state++;
		}
	}
	cout<<"\n\t\t\t\t" << "Second year 1st Semester" << endl;
				for(unsigned int i = 0;i < S1.size()-1; i++){
					cout<<S1[i].credit<<" "<< S1[i].name << " ("<< S1[i].code << ")"<<"\n";
				}
	a++;		
	cout<<"\n\t\t\t\t" << "Third year 1st Semester" << endl;
	while(state==a){
		cout<<endl<<"You have "<<3-temp<<" credits to select"<<endl;
		cout<<"Select Major Elective course\n";
		cout<<"\t<type 1 to see Curriculum>\n";
		cout<<"\t<type 2 to see selectable MJ>\n";
		cout<<"\tInput your code : ";
		cin>>input;
		c=0;
			if(input=="1"){
				cout<<"\n\t\t\t\t" <<  "Third year 1st Semester" << endl;
				for(unsigned int i = 0;i < T1.size()-1; i++){
					cout<<T1[i].credit<<" "<< T1[i].name << " ("<< T1[i].code << ")"<<"\n";
				}
				cout<<endl;
			}
			else if(input=="2"){
				 cout<<"\n\t\t\t\t" << "Major Elective Courses" << endl;
				for(unsigned int i = 0;i < MJ.size()-1; i++){
					cout<<MJ[i].credit<<" "<< MJ[i].name << " ("<< MJ[i].code << ")"<<"\n";
    			}
				cout<<endl;
			}
			else{
				for(unsigned int i=0;i<MJ.size();i++){
					if(MJ[i].code==input){
						cout<<"You have selected "<<MJ[i].name << "!!" <<endl;
						temp+=MJ[i].credit;
						T1.insert(T1.begin()+(T1.size()-1),MJ[i]);
						MJ.erase(MJ.begin()+i);
						c=1;
						}
				}
				for(unsigned int i=0;i<FR.size();i++){
							if(FR[i].code==input) FR.erase(FR.begin()+i);
						}
				if(c==0) cout<<"Not found\n";
			}
		c=0;
		for(unsigned int i = 0;i < T1.size()-1; i++){
			c+=T1[i].credit;
		}
		if(temp>2){
			temp=0;
			state++;
		}
	}
	cout<<endl;
	a++;
while(state==a){
		cout<<endl<<"You have "<<3-temp<<" credits to select"<<endl;
		cout<<"Select Innovative Co-creator course\n";
		cout<<"\t<type 1 to see Curriculum>\n";
		cout<<"\t<type 2 to see selectable IC>\n";
		cout<<"\tInput your code : ";
		cin>>input;
		c=0;
			if(input=="1"){
				cout<<"\n\t\t\t\t" <<  "Third year 1st Semester" << endl;
				for(unsigned int i = 0;i < T1.size()-1; i++){
					cout<<T1[i].credit<<" "<< T1[i].name << " ("<< T1[i].code << ")"<<"\n";
				}
				cout<<endl;
			}
			else if(input=="2"){
				 cout<<"\n\t\t\t\t" << "Innovative Co-creator course" << endl;
				for(unsigned int i = 0;i < IC.size()-1; i++){
					cout<<IC[i].credit<<" "<< IC[i].name << " ("<< IC[i].code << ")"<<"\n";
    			}
				cout<<endl;
			}
			else{
				for(unsigned int i=0;i<IC.size();i++){
					if(IC[i].code==input){
						cout<<"You have selected "<<IC[i].name << "!!" <<endl;
						temp+=IC[i].credit;
						T1.insert(T1.begin()+(T1.size()-1),IC[i]);
						IC.erase(IC.begin()+i);
						c=1;
						}
				}
				for(unsigned int i=0;i<FR.size();i++){
							if(FR[i].code==input) FR.erase(FR.begin()+i);
						}
				if(c==0) cout<<"Not found\n";
			}
		c=0;
		for(unsigned int i = 0;i <T1.size()-1; i++){
			c+=T1[i].credit;
		}
		if(temp>2){
			temp=0;
			state++;
		}
	}
	cout<<"\n\t\t\t\t" <<  "Third year 1st Semester" << endl;
				for(unsigned int i = 0;i < T1.size()-1; i++){
					cout<<T1[i].credit<<" "<< T1[i].name << " ("<< T1[i].code << ")"<<"\n";
				}
	a++;
cout<<"\n\t\t\t\t" << "Third year 2nd Semester" << endl;
	while(state==a){
		cout<<endl<<"You have "<<3-temp<<" credits to select"<<endl;
		cout<<"Select Major Elective course\n";
		cout<<"\t<type 1 to see Curriculum>\n";
		cout<<"\t<type 2 to see selectable MJ>\n";
		cout<<"\tInput your code : ";
		cin>>input;
		c=0;
			if(input=="1"){
				cout<<"\n\t\t\t\t" <<  "Third year 2nd Semester" << endl;
				for(unsigned int i = 0;i < T2.size()-1; i++){
					cout<<T2[i].credit<<" "<< T2[i].name << " ("<< T2[i].code << ")"<<"\n";
				}
				cout<<endl;
			}
			else if(input=="2"){
				 cout<<"\n\t\t\t\t" << "Major Elective Courses" << endl;
				for(unsigned int i = 0;i < MJ.size()-1; i++){
					cout<<MJ[i].credit<<" "<< MJ[i].name << " ("<< MJ[i].code << ")"<<"\n";
    			}
				cout<<endl;
			}
			else{
				for(unsigned int i=0;i<MJ.size();i++){
					if(MJ[i].code==input){
						cout<<"You have selected "<<MJ[i].name << "!!" <<endl;
						temp+=MJ[i].credit;
						T2.insert(T2.begin()+(T2.size()-1),MJ[i]);
						MJ.erase(MJ.begin()+i);
						c=1;
						}
				}
				for(unsigned int i=0;i<FR.size();i++){
							if(FR[i].code==input) FR.erase(FR.begin()+i);
						}
				if(c==0) cout<<"Not found\n";
			}
			c=0;
		for(unsigned int i = 0;i < T2.size()-1; i++){
			c+=T2[i].credit;
		}
		if(temp>2){
			temp=0;
			state++;
 		}
	}
	cout<<endl;
	a++;
while(state==a){
		cout<<endl<<"You have "<<1-temp<<" credits to select"<<endl;
		cout<<"Select General Education course\n";
		cout<<"\t<type 1 to see Curriculum>\n";
		cout<<"\t<type 2 to see selectable GE>\n";
		cout<<"\tInput your code : ";
		cin>>input;
		c=0;
			if(input=="1"){
				cout<<"\n\t\t\t\t" <<  "Third year 2nd Semester" << endl;
				for(unsigned int i = 0;i < T2.size()-1; i++){
					cout<<T2[i].credit<<" "<< T2[i].name << " ("<< T2[i].code << ")"<<"\n";
				}
				cout<<endl;
			}
			else if(input=="2"){
				 cout<<"\n\t\t\t\t" << "General Education Elective Courses" << endl;
				for(unsigned int i = 0;i < GE.size()-1; i++){
					if(GE[i].credit==1)cout<<GE[i].credit<<" "<< GE[i].name << " ("<< GE[i].code << ")"<<"\n";
    			}
				cout<<endl;
			}
			else{
				for(unsigned int i=0;i<GE.size();i++){
					if(GE[i].code==input){
						cout<<"You have selected "<<GE[i].name << "!!" <<endl;
						temp+=GE[i].credit;
						T2.insert(T2.begin()+(T2.size()-1),GE[i]);
						GE.erase(GE.begin()+i);
						c=1;
						}
				}
				for(unsigned int i=0;i<FR.size();i++){
							if(FR[i].code==input) FR.erase(FR.begin()+i);
						}
				if(c==0) cout<<"Not found\n";
			}
		c=0;
		for(unsigned int i = 0;i < T2.size()-1; i++){
			c+=T2[i].credit;
		}
		if(temp>0){
			temp=0;
			state++;
		}
	}
	cout<<endl;
	a++;
while(state==a){
		cout<<endl<<"You have "<<3-temp<<" credits to select"<<endl;
		cout<<"Select Learner person course\n";
		cout<<"\t<type 1 to see Curriculum>\n";
		cout<<"\t<type 2 to see selectable LP>\n";
		cout<<"\tInput your code : ";
		cin>>input;
		c=0;
			if(input=="1"){
				cout<<"\n\t\t\t\t" <<  "Third year 2nd Semester" << endl;
				for(unsigned int i = 0;i < T2.size()-1; i++){
					cout<<T2[i].credit<<" "<< T2[i].name << " ("<< T2[i].code << ")"<<"\n";
				}
				cout<<endl;
			}
			else if(input=="2"){
				 cout<<"\n\t\t\t\t" << "Learner person Courses" << endl;
				for(unsigned int i = 0;i < LP.size()-1; i++){
					cout<<LP[i].credit<<" "<< LP[i].name << " ("<< LP[i].code << ")"<<"\n";
    			}
				cout<<endl;
			}
			else{
				for(unsigned int i=0;i<LP.size();i++){
					if(LP[i].code==input){
						cout<<"You have selected "<<LP[i].name << "!!" <<endl;
						temp+=LP[i].credit;
						T2.insert(T2.begin()+(T2.size()-1),LP[i]);
						LP.erase(LP.begin()+i);
						c=1;
						}
				}
				for(unsigned int i=0;i<FR.size();i++){
							if(FR[i].code==input) FR.erase(FR.begin()+i);
						}
				if(c==0) cout<<"Not found\n";
			}
		c=0;
		for(unsigned int i = 0;i < T2.size()-1; i++){
			c+=T2[i].credit;
		}
		if(temp>2){
			temp=0;
			state++;
		}
	}
	cout<<"\n\t\t\t\t" <<  "Third year 2nd Semester" << endl;
				for(unsigned int i = 0;i < T2.size()-1; i++){
					cout<<T2[i].credit<<" "<< T2[i].name << " ("<< T2[i].code << ")"<<"\n";
				}
	a++;
cout<<"\n\t\t\t\t" << "Forth year 1st Semester" << endl;
	while(state==a){
		cout<<endl<<"You have "<<9-temp<<" credits to select"<<endl;
		cout<<"Select Major Elective course\n";
		cout<<"\t<type 1 to see Curriculum>\n";
		cout<<"\t<type 2 to see selectable MJ>\n";
		cout<<"\tInput your code : ";
		cin>>input;
		c=0;
			if(input=="1"){
				cout<<"\n\t\t\t\t" <<  "Forth year 1st Semester" << endl;
				for(unsigned int i = 0;i < Fo1.size()-1; i++){
					cout<<Fo1[i].credit<<" "<< Fo1[i].name << " ("<< Fo1[i].code << ")"<<"\n";
				}
				cout<<endl;
			}
			else if(input=="2"){
				 cout<<"\n\t\t\t\t" << "Major Elective Courses" << endl;
				for(unsigned int i = 0;i < MJ.size()-1; i++){
					cout<<MJ[i].credit<<" "<< MJ[i].name << " ("<< MJ[i].code << ")"<<"\n";
    			}
				cout<<endl;
			}
			else{
				for(unsigned int i=0;i<MJ.size();i++){
					if(MJ[i].code==input){
						cout<<"You have selected "<<MJ[i].name << "!!" <<endl;
						temp+=MJ[i].credit;
						Fo1.insert(Fo1.begin()+(Fo1.size()-1),MJ[i]);
						MJ.erase(MJ.begin()+i);
						c=1;
						}
				}
				for(unsigned int i=0;i<FR.size();i++){
							if(FR[i].code==input) FR.erase(FR.begin()+i);
						}
				if(c==0) cout<<"Not found\n";
			}
			c=0;
		for(unsigned int i = 0;i < Fo1.size()-1; i++){
			c+=Fo1[i].credit;
		}
		if(temp>8){
			temp=0;
			state++;
		}
	}
	cout<<endl;
	a++; 
	while(state==a){
		cout<<endl<<"You have "<<3-temp<<" credits to select"<<endl;
		cout<<"Select Free Elective course\n";
		cout<<"\t<type 1 to see Curriculum>\n";
		cout<<"\t<type 2 to see selectable FR>\n";
		cout<<"\tInput your code : ";
		cin>>input;
		c=0;
			if(input=="1"){
				cout<<"\n\t\t\t\t" <<  "Forth year 1st Semester" << endl;
				for(unsigned int i = 0;i < Fo1.size()-1; i++){
					cout<<Fo1[i].credit<<" "<< Fo1[i].name << " ("<< Fo1[i].code << ")"<<"\n";
				}
				cout<<endl;
			}
			else if(input=="2"){
				 cout<<"\n\t\t\t\t" << "Free Elective Courses" << endl;
				for(unsigned int i = 0;i < FR.size()-1; i++){
					cout<<FR[i].credit<<" "<< FR[i].name << " ("<< FR[i].code << ")"<<"\n";
    			}
				cout<<endl;
			}
			else{
				for(unsigned int i=0;i<FR.size();i++){
					if(FR[i].code==input){
						cout<<"You have selected "<<FR[i].name << "!!" <<endl;
						temp+=FR[i].credit;
						Fo1.insert(Fo1.begin()+(Fo1.size()-1),FR[i]);
						FR.erase(FR.begin()+i);
						c=1;
						}
				}
				if(c==0) cout<<"Not found\n";
			}
			c=0;
		for(unsigned int i = 0;i < Fo1.size()-1; i++){
			c+=Fo1[i].credit;
		}
		if(temp>2){
			temp=0;
			state++;
		}
	}
	cout<<"\n\t\t\t\t" <<  "Forth year 1st Semester" << endl;
				for(unsigned int i = 0;i < Fo1.size()-1; i++){
					cout<<Fo1[i].credit<<" "<< Fo1[i].name << " ("<< Fo1[i].code << ")"<<"\n";
				}
	a++;  
cout<<"\n\t\t\t\t" << "Forth year 2nd Semester" << endl;
	while(state==a){
		cout<<endl<<"You have "<<3-temp<<" credits to select"<<endl;
		cout<<"Select Major Elective course\n";
		cout<<"\t<type 1 to see Curriculum>\n";
		cout<<"\t<type 2 to see selectable MJ>\n";
		cout<<"\tInput your code : ";
		cin>>input;
		c=0;
			if(input=="1"){
				cout<<"\n\t\t\t\t" <<  "Forth year 2nd Semester" << endl;
				for(unsigned int i = 0;i < Fo2.size()-1; i++){
					cout<<Fo2[i].credit<<" "<< Fo2[i].name << " ("<< Fo2[i].code << ")"<<"\n";
				}
				cout<<endl;
			}
			else if(input=="2"){
				 cout<<"\n\t\t\t\t" << "Major Elective Courses" << endl;
				for(unsigned int i = 0;i < MJ.size()-1; i++){
					cout<<MJ[i].credit<<" "<< MJ[i].name << " ("<< MJ[i].code << ")"<<"\n";
    			}
				cout<<endl;
			}
			else{
				for(unsigned int i=0;i<MJ.size();i++){
					if(MJ[i].code==input){
						cout<<"You have selected "<<MJ[i].name << "!!" <<endl;
						temp+=MJ[i].credit;
						Fo2.insert(Fo2.begin()+(Fo2.size()-1),MJ[i]);
						MJ.erase(MJ.begin()+i);
						c=1;
						}
				}
				for(unsigned int i=0;i<FR.size();i++){
							if(FR[i].code==input) FR.erase(FR.begin()+i);
						}
				if(c==0) cout<<"Not found\n";
			}
		c=0;
		for(unsigned int i = 0;i < Fo2.size()-1; i++){
			c+=Fo2[i].credit;
		}
		if(temp>2){
			temp=0;
			state++;
		}
	}
	cout<<endl;
	a++; 
	while(state==a){
		cout<<endl<<"You have "<<3-temp<<" credits to select"<<endl;
		cout<<"Select Free Elective course\n";
		cout<<"\t<type 1 to see Curriculum>\n";
		cout<<"\t<type 2 to see selectable FR>\n";
		cout<<"\tInput your code : ";
		cin>>input;
		c=0;
			if(input=="1"){
				cout<<"\n\t\t\t\t" <<  "Forth year 1st Semester" << endl;
				for(unsigned int i = 0;i < Fo2.size()-1; i++){
					cout<<Fo1[i].credit<<" "<< Fo2[i].name << " ("<< Fo2[i].code << ")"<<"\n";
				}
				cout<<endl;
			}
			else if(input=="2"){
				 cout<<"\n\t\t\t\t" << "Free Elective Courses" << endl;
				for(unsigned int i = 0;i < FR.size()-1; i++){
					cout<<FR[i].credit<<" "<< FR[i].name << " ("<< FR[i].code << ")"<<"\n";
    			}
				cout<<endl;
			}
			else{
				for(unsigned int i=0;i<FR.size();i++){
					if(FR[i].code==input){
						cout<<"You have selected "<<FR[i].name << "!!" <<endl;
						temp+=FR[i].credit;
						Fo2.insert(Fo2.begin()+(Fo2.size()-1),FR[i]);
						FR.erase(FR.begin()+i);
						c=1;
						}
				}
				if(c==0) cout<<"Not found\n";
			}
			c=0;
		for(unsigned int i = 0;i < Fo1.size()-1; i++){
			c+=Fo2[i].credit;
		}
		if(temp>2){
			temp=0;
			state++;
		}
	}
	a++;  
	cout<<"\n\t\t\t\t" <<  "Forth year 2nd Semester" << endl;
				for(unsigned int i = 0;i < Fo2.size()-1; i++){
					cout<<Fo2[i].credit<<" "<< Fo2[i].name << " ("<< Fo2[i].code << ")"<<"\n";
				}
	cout<<endl;
}