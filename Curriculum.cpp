#include<iostream>
#include<string>
using namespace std;

string toUpperStr(string x){
    string y = x;
    for(unsigned i = 0; i < x.size();i++) y[i] = toupper(x[i]);
    return y;
}
  
string ShowCu(int input,int sem){
    string F1[]={Learner("001101"),ActiveCitizen("140104"),CoreCourses("206161"),CoreCourses("207105"),CoreCourses("207115"),CoreCourses("259104"),CoreCourses("259106"),ActiveCitizen("259191"),Major("261103")};
    string F2[]={Learner("001102"),CoreCourses("206162"),CoreCourses("207106"),CoreCourses("207116"),CoreCourses("252281"),Major("261102")};
    string S1[]={Learner("001201"),CoreCourses("206261"),Major("261207"),Major("261210"),Major("261212"),CoreCourses("261216"),Major("261217")};
    string S2[]={Learner("001225"),Major("261200"),CoreCourses("261208"),Major("261214"),Major("261215"),Major("261218"),Major("261332")};   
    string T1[]={Major("261304"),Major("261335"),Major("261336"),Major("261342"),Major("261343")};
    string T2[]={Major("261305"),CoreCourses("261306"),Major("261361")};
    string Fo1[]={Major("261491")};
    string Fo2[]={Innovative("259192"),Major("261405"),Major("261492")};
       switch (input)
        {
        case 1:
            if(sem == 1){
                cout<<"\t\t\t\t First Year Semester 1\n";
                for(int i=0;i<sizeof(F1)/sizeof(F1[0]);i++){
                    cout<<"\t\t"<<F1[i]<<"\n";
                }
            }else if(sem == 2){
                cout<<"\t\t\t\t First Year Semester 2\n";
                for(int i=0;i<sizeof(F2)/sizeof(F2[0]);i++){
                    cout<<"\t\t"<<F2[i]<<"\n";
                }
            }else{
                cout << "Invalid" << "\n";
            }
            break;
        case 2:
            if(sem == 1){
                cout<<"\t\t\t\t Second Year Semester 1\n";
                for(int i=0;i<sizeof(S1)/sizeof(S1[0]);i++){
                    cout<<"\t\t"<<S1[i]<<"\n";
                }
            }else if(sem == 2){
                cout<<"\t\t\t\t Second Year Semester 2\n";
                for(int i=0;i<sizeof(S2)/sizeof(S2[0]);i++){
                    cout<<"\t\t"<<S1[i]<<"\n";
                }
            }else {
                cout << "Invalid" << "\n";
            }
            break;
        case 3:
            if(sem == 1){
            cout<<"\t\t\t\t Third Year Semester 1\n";
            for(int i=0;i<sizeof(T1)/sizeof(T1[0]);i++){
                cout<<"\t\t"<<T1[i]<<"\n";
            }
            }else if(sem == 2){
                cout<<"\t\t\t\t Third Year Semester 2\n";
                for(int i=0;i<sizeof(T2)/sizeof(T2[0]);i++){
                    cout<<"\t\t"<<T2[i]<<"\n";
            }
            }else {
                cout << "Invalid" << "\n";
            }
            break;
        case 4:
            if(sem == 1){
            cout<<"\t\t\t\t Fourth Year Semester 1\n";
            for(int i=0;i<sizeof(Fo1)/sizeof(Fo1[0]);i++){
                cout<<"\t\t"<<Fo1[i]<<"\n";
            }
            }else if(sem == 2){
                cout<<"\t\t\t\t Fourth Year Semester 2\n";
                for(int i=0;i<sizeof(Fo2)/sizeof(Fo2[0]);i++){
                    cout<<"\t\t"<<Fo2[i]<<"\n";
                }
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
    cout << "Note : If you want to open next page type next but If you want to open prev page type prev." << endl;
    cout << "Note : If you want to exit this feature type ok." << endl;
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
