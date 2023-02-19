#include<iostream>
#include<string>
using namespace std;

void Technology_for_Application(string x){
    //There are 21 subjects in total.
    
    // There are 3 subjects in Technology_for_Application
    string Technology_for_Application_key[] = {"261405","261491","261492"};
    string AdvancedComENGR = "Advanced Computer Engineering Technology";
    string ProjSurvey = "Project Survey";
    string Project = "Project";
    string Technology_for_Application_subject[] = {"AdvancedComENGR","ProjSurvey","Project"};
    int credit[]={3,1,3};
    int n = sizeof(Technology_for_Application_key)/sizeof(Technology_for_Application_key[0]);
        int count = -1;
            for(int i = 0; i<n;i++){
                if(x == Technology_for_Application_key[i]){
                    count = i;
                    break;
                }
            }

            if(count == -1) cout << "Don't have this subject";
            else{
                cout << Technology_for_Application_key[count] << " " << Technology_for_Application_subject[count] << endl;
            }
}
void Technology_and_Software_Methods(string x){   
    //There are 5 subjects in Technology_and_Software_Methods
    string Technology_and_Software_Methods_key[] = {"261102","261200","261217","261218","261361"};
    string ComProgramming = "Computer Programming";
    string ObjectProgramming = "Object-Oriented Programming";
    string DataStructres = "Data Structures for Computer Engineers";
    string Algorithms = "Algorithms for Computer Engineers";
    string SoftwareENGR = "Software Engineering";
    string Technology_for_Application_subject[] = {"ComProgramming","ObjectProgramming","DataStructres","Algorithms","SoftwareENGR"};
    int credit[]={3,3,3,3,3};
    int n = sizeof(Technology_and_Software_Methods_key)/sizeof(Technology_and_Software_Methods_key[0]);
    int count = -1;
        for(int i = 0; i<n;i++){
            if(x == Technology_and_Software_Methods_key[i]){
               count = i;
                break;
            }
        }

        if(count == -1) cout << "Don't have this subject";
        else{
            cout << Technology_and_Software_Methods_key[count] << " " << Technology_for_Application_subject[count] << endl;
        }

}
void Basic_Structure_of_the_Systems(string x){
    //There are 7 subjects in Basic_Structure_of_the_Systems
    string Basic_Structure_of_the_Systems_key[] = {"261103","261207","261332","261335","261336","261342","261343"};
    string BasicCom = "Basic Computer Engineering";
    string BasicComLab = "Basic Computer Engineering Laboratory";
    string DataCommu = "Data and Computer Communications";
    string ComNetworks = "Computer Networks";
    string ComNetworksLab = "Computer Networks Laboratory";
    string DatabaseSystems = "Fundamentals of Database Systems";
    string DatabaseSystemsLab = "Database System Laboratory";
    string Basic_Structure_of_the_Systems_subject[]={"BasicCom","BasicComLab","DataCommu","ComNetworks","ComNetworksLab","DatabaseSystems","DatabaseSystemsLab"};
    int credit[]={3,2,3,3,1,3,1};
    int n = sizeof(Basic_Structure_of_the_Systems_key)/sizeof(Basic_Structure_of_the_Systems_key[0]);
    int count = -1;
        for(int i = 0; i<n;i++){
            if(x == Basic_Structure_of_the_Systems_key[i]){
               count = i;
                break;
            }
        }

        if(count == -1) cout << "Don't have this subject";
        else{
            cout << Basic_Structure_of_the_Systems_key[count] << " " << Basic_Structure_of_the_Systems_subject[count] << endl;
        }
}
void Hardware_and_Computer_Architecture(string x){
    //There are 6 subjects in Hardware_and_Computer_Architecture
    string Hardware_and_Computer_Architecture_key[] = {"261210","261212","261214","261215","261304","261305"};
    string DigitalCircuits = "Logic and Digital Circuits";
    string DigitalCircuitsLab = "Logic and Digital Circuits Laboratory";
    string Microprocessor = "Microprocessor and Interfacing";
    string EmbeddedSystemLab = "Embedded System Laboratory";
    string ComArchitecture = "Computer Architecture";
    string OperatingSystems = "Operating Systems";
    string Hardware_and_Computer_Architecture_subject[] = {"DigitalCircuits","DigitalCircuitsLab","Microprocessor","EmbeddedSystemLab","ComArchitecture","OperatingSystems"};
    int credit[]={3,1,3,1,3,3};
    int n = sizeof(Hardware_and_Computer_Architecture_key)/sizeof(Hardware_and_Computer_Architecture_key[0]);
    int count = -1;
        for(int i = 0; i<n;i++){
            if(x == Hardware_and_Computer_Architecture_key[i]){
               count = i;
                break;
            }
        }

        if(count == -1) cout << "Don't have this subject";
        else{
            cout << Hardware_and_Computer_Architecture_key[count] << " " << Hardware_and_Computer_Architecture_subject[count] << endl;
        }    
}
