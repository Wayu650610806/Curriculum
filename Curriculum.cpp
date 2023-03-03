#include<iostream>
#include<string>
using namespace std;

string toUpperStr(string x){
    string y = x;
    for(unsigned i = 0; i < x.size();i++) y[i] = toupper(x[i]);
    return y;
}
  
string ShowCu(int input,int sem){
       switch (input)
        {
        case 1:
            if(sem == 1){
                cout<<"\t\t\t\t\tFirst Year\n";
                cout<<"First Semester\n";
                cout<<"	001101	Fundamental English 1\t\t\t\t\t\t\t\t\t3\n";
                cout<<"	140104	Citizenship\t\t\t\t\t\t\t\t\t\t3\n";
                cout<<"	206161	Calculus for Engineering 1\t\t\t\t\t\t\t\t3\n";
                cout<<"\t207105	Physics for Engineering and Agro-Industry Students 1\t\t\t\t\t3\n";
                cout<<"\t207115	Physics Laboratory for Engineering and Agro-Industry Students 1\t\t\t\t1\n";
                cout<<"\t259104	Engineering Drawing\t\t\t\t\t\t\t\t\t3\n";
                cout<<"\t259106	Workshop Technology\t\t\t\t\t\t\t\t\t3\n";
                cout<<"\t259191	Principle of Being Professional\t\t\t\t\t\t\t\t1\n";
                cout<<"\t261103	Basic Computer Engineering\t\t\t\t\t\t\t\t3\n";
                cout<<"\t\t\t\t\t\t\t\t\t\t\t\ttotal\t21\n";
            }else if(sem == 2){
                cout<<"\t\t\t\t\tFirst Year\n";
                cout<<"Second Semester\n";
                cout<<"	001102	Fundamental English 2\t\t\t\t\t\t\t\t\t3\n";
                cout<<"	206162  Calculus for Engineering 2\t\t\t\t\t\t\t\t3\n";
                cout<<"\t207106	Physics for Engineering and Agro-Industry Students 2\t\t\t\t\t3\n";
                cout<<"\t207116	Physics Laboratory for Engineering and Agro-Industry Students 2\t\t\t\t1\n";
                cout<<"\t252281	Fundamentals of Electronic Circuits for Information Systems and Network Engineering\t3\n";
                cout<<"\t261102	Computer Programming\t\t\t\t\t\t\t\t\t3\n";
                cout<<"		    General Education Elective Course\t\t\t\t\t\t\t3\n";
                cout<<"\t\t\t\t\t\t\t\t\t\t\t\ttotal\t19\n";
            }else{
                cout << "Invalid" << "\n";
            }
            break;
        case 2:
            if(sem == 1){
                cout<<"\t\t\t\t\tSecond Year\n";
                cout<<"First Semester\n";
                cout<<"	001201	Critical Reading and Effective Writing\t\t\t\t\t\t\t3\n";
                cout<<"	206261	Calculus for Engineering 3\t\t\t\t\t\t\t\t3\n";
                cout<<"	261207  Basic Computer Engineering Laboratory\t\t\t\t\t\t\t2\n";
                cout<<"	261210	Logic and Digital Circuits\t\t\t\t\t\t\t\t3\n";
                cout<<"	261212	Logic and Digital Circuits Laboratory\t\t\t\t\t\t\t1\n";
                cout<<"	261216	Discrete Mathematics for Computer Engineers\t\t\t\t\t\t3\n";
                cout<<"	261217	Data Structures for Computer Engineers\t\t\t\t\t\t\t3\n";
                cout<<"		    General Education Elective Course\t\t\t\t\t\t\t3\n";
                cout<<"\t\t\t\t\t\t\t\t\t\t\t\ttotal\t21\n";
            }else if(sem == 2){
                cout<<"\t\t\t\t\tSecond Year\n";
                cout<<"Second Semester\n";
                cout<<"	001225	English in Science and Technology Context	    \t\t\t\t\t3\n";
                cout<<"	261200	Object-Oriented Programming	                    \t\t\t\t\t3\n";
                cout<<"	261208  Numerical Computation for Engineers	            \t\t\t\t\t3\n";
                cout<<"	261214	Microprocessor and Interfacing	                \t\t\t\t\t3\n";
                cout<<"	261215	Embedded System Laboratory	                    \t\t\t\t\t1\n";
                cout<<"	261218	Algorithms for Computer Engineers	            \t\t\t\t\t3\n";
                cout<<"	261332	Data and Computer Communications                \t\t\t\t\t3\n";
                cout<<"\t\t\t\t\t\t\t\t\t\t\t\ttotal\t19\n";
            }else {
                cout << "Invalid" << "\n";
            }
            break;
        case 3:
            if(sem == 1){
                cout<<"\t\t\t\t\tThird Year\n";
                cout<<"First Semester\n";
                cout<<"	261304	Computer Architecture	                        \t\t\t\t\t3\n";
                cout<<"	261335	Computer Networks	                        \t\t\t\t\t3\n";
                cout<<"\t261336	Computer Networks Laboratory                    \t\t\t\t\t1\n";
                cout<<"	261342	Fundamentals of Database Systems                \t\t\t\t\t3\n";
                cout<<"	261343	Database System Laboratory                      \t\t\t\t\t1\n";
                cout<<"\t        Major Elective                                  \t\t\t\t\t3\n";
                cout<<"	        Innovative Co-creator                           \t\t\t\t\t3\n"; 
                cout<<"\t\t\t\t\t\t\t\t\t\t\t\ttotal\t17\n";
            }else if(sem == 2){
                cout<<"\t\t\t\t\tThird Year\n";
                cout<<"Second Semester\n";
                cout<<"	261305 Operating Systems	                        \t\t\t\t\t3\n";
                cout<<"	261306 Computer Engineering Probability and Statistics	\t\t\t\t\t3\n";
                cout<<"	261361 Software Engineering	                        \t\t\t\t\t3\n";
                cout<<"\t       Major Elective	                          \t\t\t\t\t\t3\n";
                cout<<"\t       General Education Elective Course	        \t\t\t\t\t1\n";
                cout<<"\t       Learner person	                          \t\t\t\t\t\t3\n";
                cout<<"\t\t\t\t\t\t\t\t\t\t\t\ttotal\t16\n";
            }else {
                cout << "Invalid" << "\n";
            }
            break;
        case 4:
            if(sem == 1){
                cout<<"\t\t\t\t\tFourth Year\n";
                cout<<"First Semester\n";
                cout<<"\t261491	Project Survey  \t\t\t\t\t\t\t\t\t1" << endl;
                cout<<"\t        Major Elective \t\t\t\t\t\t\t\t\t\t9" << endl;
                cout<<"\t        Free Elective  \t\t\t\t\t\t\t\t\t\t3" << endl;
                cout<<"\t\t\t\t\t\t\t\t\t\t\t\ttotal\t13\n";
            }else if(sem == 2){
                cout<<"\t\t\t\t\tFourth Year\n";
                cout<<"Second Semester\n";
                cout<<"\t259192 Skills for Professionalism and Entrepreneurship	\t\t\t\t\t1" << endl;
                cout<<"\t261405 Advanced Computer Engineering Technology	\t\t\t\t\t\t3" << endl;
                cout<<"\t261492	CPE	492	Project	\t\t\t\t\t\t\t\t3" << endl;
                cout<<"\t        Major Elective \t\t\t\t\t\t\t\t\t\t3" << endl;
                cout<<"\t        Free Elective  \t\t\t\t\t\t\t\t\t\t3" << endl;
                cout<<"\t\t\t\t\t\t\t\t\t\t\t\ttotal\t13\n";
            }else {
                cout << "Invalid" << "\n";
            }
            break;
        default:
            cout << "Invalid Page please try again ... T T" << endl;
            if(input <= 0){
                input = 0;
                sem = 2;
            }
            if(input >= 5){
                input = 5;
                sem = 1;
            }
            break;
        }
    cout << "Note : If you want to open next page type " << "\x1b[1mnext\x1b[0m" << " but If you want to open prev page type " << "\x1b[1mprev\x1b[0m" << "."<< endl;
    cout << "Note : If you want to exit this feature type "<< "\x1b[1mok\x1b[0m" << "."<< endl;
    cout << "Your input : ";
    string text;
    cin >> text;
    text = toUpperStr(text);
    if(text == "NEXT"){
        if(sem == 1){
            return ShowCu(input,2);
        }else if(sem == 2){
            return ShowCu(input+1,1);
        }
    }else if(text == "PREV"){
        if(sem == 1){
            return ShowCu(input-1,2);
        }else if(sem == 2){
            return ShowCu(input,1);
        }
    }else if(text == "OK"){
        return "0";
    }else{
        cout << "Invalid your type please try again" << endl;
        return ShowCu(input,sem);
    }
}
