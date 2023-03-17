#include<iostream>

using namespace std;



void FreeAdd(vector<course> &F1,vector<course> &F2,vector<course> &S1,vector<course> &S2,vector<course> &T1,vector<course> &T2,vector<course> &Fo1,vector<course> &Fo2,vector<course> &GE,vector<course> &LP,vector<course> &IC,vector<course> &MJ,vector<course> &FR){
	string input;
	int state=1,a=1,c=0,temp=0;
	
    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////*
	cout<<"\n\t\t\t\t" << "First year 2nd Semester" << endl;
	while(state==a){
		cout<<endl<<"You have "<<2-temp<<" credits to select"<<endl;
		cout<<"Select Free Elective course\n";
		cout<<"\t<type 1 to see Curriculum>\n";
		cout<<"\t<type 2 to see selectable FR>\n";
        cout<<"\t<type 3 Do not want to add subjects to this semester.>\n";
		//cout<<"\tDon't want to take a course this semester already? \x1b[1mY\x1b[0m/\x1b[1mN\x1b[0m : ";
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
				 cout<<"\n\t\t\t\t" << "Free Elective Courses" << endl;
				for(unsigned int i = 0;i < FR.size()-1; i++){
					cout<<FR[i].credit<<" "<< FR[i].name << " ("<< FR[i].code << ")"<<"\n";
    			}
				cout<<endl;
			}else if(input=="3"){
                temp=0;
                state++;
                break;
            }else{
				for(unsigned int i=0;i<FR.size();i++){
					if(FR[i].code==input){
						temp+=FR[i].credit;
						cout<<"You have selected "<<FR[i].name << "!!" <<endl;
						F2.insert(F2.begin()+(F2.size()-1),FR[i]);
						FR.erase(FR.begin()+i);
						c=1;
						}
				}
				if(c==0) cout<<"Not found\n";
			}
	    c=0;
		for(unsigned int i = 0;i < F2.size()-1; i++){
					c+=F2[i].credit;
				}
		if(c>22){
			cout<<"Your credits are more than 22 please select again\n";
			for(unsigned int i=F2.size()-1;i>7;i--){
				FR.insert(FR.begin()+(FR.size()-1),F2[i-1]);
	 			F2.erase(F2.begin()+i);
				c=0;
			}
		}
		if(temp>1){
			temp=0;
			state++;
		}
	}
	a++;
	cout<<"\n\t\t\t\t" << "First year 2nd Semester" << endl;
	for(unsigned int i = 0;i < F2.size()-1; i++){
		cout<<F2[i].credit<<" "<< F2[i].name << " ("<< F2[i].code << ")"<<"\n";
	}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////	
	cout<<"\n\t\t\t\t" << "Second year 2nd Semester" << endl;
	while(state==a){
		cout<<endl<<"You have "<<2-temp<<" credits to select"<<endl;
		cout<<"Select Free Elective course\n";
		cout<<"\t<type 1 to see Curriculum>\n";
		cout<<"\t<type 2 to see selectable FR>\n";
        cout<<"\t<type 3 Do not want to add subjects to this semester.>\n";
		cout<<"\tInput your code : ";
		cin>>input;
		c=0;
			if(input=="1"){
				cout<<"\n\t\t\t\t" << "Second year 2nd Semester" << endl;
				for(unsigned int i = 0;i < S2.size()-1; i++){
					cout<<S2[i].credit<<" "<< S2[i].name << " ("<< S2[i].code << ")"<<"\n";
				}
				cout<<endl;
			}
			else if(input=="2"){
				cout<<"\n\t\t\t\t" << "Free Elective Courses" << endl;
				for(unsigned int i = 0;i < FR.size()-1; i++){
				
						cout<<FR[i].credit<<" "<< FR[i].name << " ("<< FR[i].code << ")"<<"\n";
					
    			}
				cout<<endl;
			}else if(input=="3"){
                temp=0;
                state++;
                break;
            }else{
				for(unsigned int i=0;i<FR.size();i++){
					if(FR[i].code==input ){
						temp+=FR[i].credit;
						cout<<"You have selected "<<FR[i].name << "!!" <<endl;
						S2.insert(S2.begin()+(S2.size()-1),FR[i]);
						FR.erase(FR.begin()+i);
						c=1;
						}
				}
				for(unsigned int i=0;i<FR.size();i++){
							if(FR[i].code==input) FR.erase(FR.begin()+i);
						}
				if(c==0) cout<<"Not found\n";
			}
		c=0;
		for(unsigned int i = 0;i < S2.size()-1; i++){
			c+=S2[i].credit;
		}
		if(c>22){
			cout<<"Your credits are more than 22 please select again\n";
			for(unsigned int i=S2.size()-1;i>7;i--){
				FR.insert(FR.begin()+(FR.size()-1),S2[i-1]);
	 			S2.erase(S2.begin()+i);
				c=0;
			}
		}
		if(temp>1){
			temp=0;
			state++;
		}
	}
	cout<<"\n\t\t\t\t" << "Second year 2nd Semester" << endl;
		for(unsigned int i = 0;i < S2.size()-1; i++){
			cout<<S2[i].credit<<" "<< S2[i].name << " ("<< S2[i].code << ")"<<"\n";
		}
	a++;
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	cout<<"\n\t\t\t\t" << "Third year 1st Semester" << endl;
	while(state==a){
		cout<<endl<<"You have "<<4-temp<<" credits to select"<<endl;
		cout<<"Select Free Elective course\n";
		cout<<"\t<type 1 to see Curriculum>\n";
		cout<<"\t<type 2 to see selectable FR>\n";
        cout<<"\t<type 3 Do not want to add subjects to this semester.>\n";
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
				cout<<"\n\t\t\t\t" << "Free Elective course" << endl;
				for(unsigned int i = 0;i < FR.size()-1; i++){
					cout<<FR[i].credit<<" "<< FR[i].name << " ("<< FR[i].code << ")"<<"\n";
    			}
				cout<<endl;
			}else if(input=="3"){
                temp=0;
                state++;
                break;
            }else{
				for(unsigned int i=0;i<FR.size();i++){
					if(FR[i].code==input){
						cout<<"You have selected "<<FR[i].name << "!!" <<endl;
						temp+=FR[i].credit;
						T1.insert(T1.begin()+(T1.size()-1),FR[i]);
						FR.erase(FR.begin()+i);
						c=1;
						}
				}
				if(c==0) cout<<"Not found\n";
			}
		c=0;
		for(unsigned int i = 0;i <T1.size()-1; i++){
			c+=T1[i].credit;
		}
		if(c>22){
			cout<<"Your credits are more than 22 please select again\n";
			for(unsigned int i=T1.size()-1;i>7;i--){
				FR.insert(FR.begin()+(FR.size()-1),T1[i-1]);
	 			T1.erase(T1.begin()+i);
				c=0;
			}
		}
		if(temp>3){
			temp=0;
			state++;
		}
	}
	cout<<"\n\t\t\t\t" <<  "Third year 1st Semester" << endl;
				for(unsigned int i = 0;i < T1.size()-1; i++){
					cout<<T1[i].credit<<" "<< T1[i].name << " ("<< T1[i].code << ")"<<"\n";
				}
	a++;
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
cout<<"\n\t\t\t\t" << "Third year 2nd Semester" << endl;
	while(state==a){
		cout<<endl<<"You have "<<1-temp<<" credits to select"<<endl;
		cout<<"Select Free Elective course\n";
		cout<<"\t<type 1 to see Curriculum>\n";
		cout<<"\t<type 2 to see selectable FR>\n";
        cout<<"\t<type 3 Do not want to add subjects to this semester.>\n";
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
				 cout<<"\n\t\t\t\t" << "Free Elective Courses" << endl;
				for(unsigned int i = 0;i < FR.size()-1; i++){
					cout<<FR[i].credit<<" "<< FR[i].name << " ("<< FR[i].code << ")"<<"\n";
    			}
				cout<<endl;
			}else if(input=="3"){
                temp=0;
                state++;
                break;
            }else{
				for(unsigned int i=0;i<FR.size();i++){
					if(FR[i].code==input){
						cout<<"You have selected "<<FR[i].name << "!!" <<endl;
						temp+=FR[i].credit;
						T2.insert(T2.begin()+(T2.size()-1),FR[i]);
						FR.erase(FR.begin()+i);
						c=1;
						}
				}
				if(c==0) cout<<"Not found\n";
			}
		c=0;
		for(unsigned int i = 0;i < T2.size()-1; i++){
			c+=T2[i].credit;
		}
		if(c>22){
			cout<<"Your credits are more than 22 please select again\n";
			for(unsigned int i=T2.size()-1;i>7;i--){
				FR.insert(FR.begin()+(FR.size()-1),T2[i-1]);
	 			T2.erase(T2.begin()+i);
				c=0;
			}
		}
		if(temp>0){
			temp=0;
			state++;
 		}
	}
	cout<<endl;
	a++;
	cout<<"\n\t\t\t\t" <<  "Third year 2nd Semester" << endl;
				for(unsigned int i = 0;i < T2.size()-1; i++){
					cout<<T2[i].credit<<" "<< T2[i].name << " ("<< T2[i].code << ")"<<"\n";
				}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
cout<<"\n\t\t\t\t" << "Forth year 1st Semester" << endl;
	while(state==a){
		cout<<endl<<"You have "<<15-temp<<" credits to select"<<endl;
		cout<<"Select Free Elective course\n";
		cout<<"\t<type 1 to see Curriculum>\n";
		cout<<"\t<type 2 to see selectable FR>\n";
        cout<<"\t<type 3 Do not want to add subjects to this semester.>\n";
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
			}else if(input=="3"){
                temp=0;
                state++;
                break;
            }else{
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
		if(c>22){
			cout<<"Your credits are more than 22 please select again\n";
			for(unsigned int i=Fo1.size()-1;i>7;i--){
				FR.insert(FR.begin()+(FR.size()-1),Fo1[i-1]);
	 			Fo1.erase(Fo1.begin()+i);
				c=0;
			}
		}
		if(temp>14){
			temp=0;
			state++;
		}
	}
	cout<<endl;
	a++;
	cout<<"\n\t\t\t\t" <<  "Forth year 1st Semester" << endl;
				for(unsigned int i = 0;i < Fo1.size()-1; i++){
					cout<<Fo1[i].credit<<" "<< Fo1[i].name << " ("<< Fo1[i].code << ")"<<"\n";
				} 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
cout<<"\n\t\t\t\t" << "Forth year 2nd Semester" << endl;
	while(state==a){
		cout<<endl<<"You have "<<5-temp<<" credits to select"<<endl;
		cout<<"Select Free Elective course\n";
		cout<<"\t<type 1 to see Curriculum>\n";
		cout<<"\t<type 2 to see selectable FR>\n";
        cout<<"\t<type 3 Do not want to add subjects to this semester.>\n";
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
				 cout<<"\n\t\t\t\t" << "Free Elective Courses" << endl;
				for(unsigned int i = 0;i < FR.size()-1; i++){
					cout<<FR[i].credit<<" "<< FR[i].name << " ("<< FR[i].code << ")"<<"\n";
    			}
				cout<<endl;
			}else if(input=="3"){
                temp=0;

                break;
            }else{
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
		for(unsigned int i = 0;i < Fo2.size()-1; i++){
			c+=Fo2[i].credit;
		}
		if(c>22){
			cout<<"Your credits are more than 22 please select again\n";
			for(unsigned int i=Fo2.size()-1;i>7;i--){
				FR.insert(FR.begin()+(FR.size()-1),Fo2[i-1]);
	 			Fo2.erase(Fo2.begin()+i);
				c=0;
			}
		}
		if(temp>4){
			temp=0;
			state++;
		}
	}
	cout<<endl;
	a++; 
	cout<<"\n\t\t\t\t" <<  "Forth year 2nd Semester" << endl;
				for(unsigned int i = 0;i < Fo2.size()-1; i++){
					cout<<Fo2[i].credit<<" "<< Fo2[i].name << " ("<< Fo2[i].code << ")"<<"\n";
				}
	cout<<endl;	
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 
	printreport(F1,F2,S1,S2,T1,T2,Fo1,Fo2);
}