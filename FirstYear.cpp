#include<iostream>
#include<string>

using namespace std;
  
void ShowCu(int input){
    string F1[]={Learner("001101"),ActiveCitizen("140104"),CoreCourses("206161"),CoreCourses("207105"),CoreCourses("207115"),CoreCourses("259104"),CoreCourses("259106"),ActiveCitizen("259191"),Major("261103")};
    string F2[]={Learner("001102"),CoreCourses("206162"),CoreCourses("207106"),CoreCourses("207116"),CoreCourses("252281"),Major("261102")}
    }
int SecondYear(){
    string S1[]={Learner("001201"),CoreCourses("206261"),Major("261207"),Major("261210"),Major("261212"),CoreCourses("261216"),Major("261217")};
    cout<<"\t\t\t\t Second Year Semester 1\n";
    for(int i=0;i<sizeof(S1)/sizeof(S1[0]);i++){
        cout<<"\t\t"<<S1[i]<<"\n";
    }

    string S2[]={Learner("001225"),Major("261200"),CoreCourses("261208"),Major("261214"),Major("261215"),Major("261218"),Major("261332")};
    cout<<"\t\t\t\t Second Year Semester 2\n";
    for(int i=0;i<sizeof(S2)/sizeof(S2[0]);i++){
    cout<<"\t\t"<<S1[i]<<"\n";
    }
    return 0;
}
int ThirdYear(){
    string T1[]={Major("261304"),Major("261335"),Major("261336"),Major("261342"),Major("261343")};
    cout<<"\t\t\t\t Third Year Semester 1\n";
    for(int i=0;i<sizeof(T1)/sizeof(T1[0]);i++){
        cout<<"\t\t"<<T1[i]<<"\n";
    }
    string T2[]={Major("261305"),CoreCourses("261306"),Major("261361")};
    cout<<"\t\t\t\t Third Year Semester 2\n";
    for(int i=0;i<sizeof(T2)/sizeof(T2[0]);i++){
        cout<<"\t\t"<<T2[i]<<"\n";
    }
    return 0;
}
int FourthYear(){
    string Fo1[]={Major("261491")};
    cout<<"\t\t\t\t Four Year Semester 1\n";
    for(int i=0;i<sizeof(Fo1)/sizeof(Fo1[0]);i++){
        cout<<"\t\t"<<Fo1[i]<<"\n";
    }
    string Fo2[]={Innovative("259192"),Major("261405"),Major("261492")};
    cout<<"\t\t\t\t Four Year Semester 2\n";
    for(int i=0;i<sizeof(Fo2)/sizeof(Fo2[0]);i++){
        cout<<"\t\t"<<Fo2[i]<<"\n";
    }
    return 0;
}
