#include<iostream>
#include<string>
#include<fstream>
#include<vector>
#include<iomanip>
using namespace std;

void F1(){
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

    // return 21;
}
void F2(){
    cout<<"\t\t\t\t\tFirst Year\n";
    cout<<"Second Semester\n";
    cout<<"	001102	Fundamental English 2\t\t\t\t\t\t\t3\n";
    cout<<"	206162  Calculus for Engineering 2\t\t\t\t\t\t3\n";
    cout<<"\t207106	Physics for Engineering and Agro-Industry Students 2\t\t\t3\n";
    cout<<"\t207116	Physics Laboratory for Engineering and Agro-Industry Students 2\t\t1\n";

    cout<<"\t252281	Fundamentals of Electronic Circuits for Information Systems and Network Engineering\t\t\t\t\t\t3\n";
    cout<<"\t261102	Computer Programming\t\t\t\t\t\t3\n";
    cout<<"\t\t\t\t\t\t\t\t\t\ttotal\t19\n";
    
    // return 19;
}
void S1(){
    cout<<"\t\t\t\t\tSecond Year\n";
    cout<<"First Semester\n";
    cout<<"	001201	Critical Reading and Effective Writing	            3\n";
    cout<<"	206261	Calculus for Engineering 3	                    3\n";
    cout<<"	261207  Basic Computer Engineering Laboratory	            2\n";
    cout<<"	261210	Logic and Digital Circuits	                    3\n";
    cout<<"	261212	Logic and Digital Circuits Laboratory	            1\n";
    cout<<"	261216	Discrete Mathematics for Computer Engineers	    3\n";
    cout<<"	261217	Data Structures for Computer Engineers              3\n";
    cout<<"		    General Education Elective Course               3\n";
}
void S2(){
    cout<<"\t\t\t\t\tSecond Year\n";
    cout<<"Second Semester\n";
    cout<<"	001225	English in Science and Technology Context	    3\n";
    cout<<"	261200	Object-Oriented Programming	                    3\n";
    cout<<"	261208  Numerical Computation for Engineers	            3\n";
    cout<<"	261214	Microprocessor and Interfacing	                    3\n";
    cout<<"	261215	Embedded System Laboratory	                    1\n";
    cout<<"	261218	Algorithms for Computer Engineers	            3\n";
    cout<<"	261332	Data and Computer Communications                    3\n";
    
}

void T1(){
    cout<<"\t\t\t\t\tThird Year\n";
    cout<<"First Semester\n";
    cout<<"	261304	Computer Architecture	                        3\n";
    cout<<"	261335	Computer Networks	                        3\n";
    cout<<"\t261336	Computer Networks Laboratory                    1\n";
    cout<<"	261342	Fundamentals of Database Systems                3\n";
    cout<<"	261343	Database System Laboratory                      1\n";
    cout<<"\t        Major Elective                                  3\n";
    cout<<"	        Innovative Co-creator                           3\n"; 
    cout<<"\t\t\t\t\t\t   Total\t17\n";

}
void T2(){
    cout<<"\t\t\t\t\tThird Year\n";
    cout<<"Second Semester\n";
    cout<<"	261305 Operating Systems	                        3\n";
    cout<<"	261306 Computer Engineering Probability and Statistics	3\n";
    cout<<"	261361 Software Engineering	                        3\n";
    cout<<"\t       Major Elective	                          \t3\n";
    cout<<"\t       General Education Elective Course	        1\n";
    cout<<"\t       Learner person	                          \t3\n";
    cout<<"\t\t\t\t\t\t   Total\t16\n";
}

void Fo1(){
    cout<<"\t\t\t\t\tFourth Year\n";
    cout<<"First Semester\n";
    cout<<"\t261491	Project Survey  \t\t\t\t\t 1" << endl;
    cout<<"\t        Major Elective \t\t\t\t\t\t 9" << endl;
    cout<<"\t        Free Elective  \t\t\t\t\t\t 3" << endl;
    cout<<"\t\t\t\t\t\t\t\t Total\t 13"<<endl;
}

void Fo2(){
    cout<<"\t\t\t\t\tFourth Year\n";
    cout<<"First Semester\n";
    cout<<"\t259192 Skills for Professionalism and Entrepreneurship	\t 1" << endl;
    cout<<"\t261405 Advanced Computer Engineering Technology	\t\t 3" << endl;
    cout<<"\t261492	CPE	492	Project	\t\t\t\t 3" << endl;
    cout<<"\t        Major Elective \t\t\t\t\t\t 9" << endl;
    cout<<"\t        Free Elective  \t\t\t\t\t\t 3" << endl;
    cout<<"\t\t\t\t\t\t\t\t Total\t 13"<<endl;
}
