#include<iostream>
#include<string>

using namespace std;
  
void ShowCu(int input){
    string F1[]={Learner("001101"),ActiveCitizen("140104"),CoreCourses("206161"),CoreCourses("207105"),CoreCourses("207115"),CoreCourses("259104"),CoreCourses("259106"),ActiveCitizen("259191"),Major("261103")};
    string F2[]={Learner("001102"),CoreCourses("206162"),CoreCourses("207106"),CoreCourses("207116"),CoreCourses("252281"),Major("261102")};

    switch (input)
    {
    case 1:
       
        cout<<"\t\t\t\t First Year Semester 1\n";
        for(int i=0;i<sizeof(F1)/sizeof(F1[0]);i++){
        cout<<"\t\t"<<F1[i]<<"\n";
        }
       
            
        
        break;
    
    case 2:
        cout<<"\t\t\t\t First Year Semester 2\n";
        for(int i=0;i<sizeof(F2)/sizeof(F2[0]);i++){
        cout<<"\t\t"<<F2[i]<<"\n";
        }
        break;
    }

}

