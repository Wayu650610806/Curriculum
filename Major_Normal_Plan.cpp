#include<iostream>
#include<string>
using namespace std;

string Major(string x){
    //There are 21 subjects in total.
    
    // There are 3 subjects in Technology_for_Application
    string Major_key[] = {"261405","261491","261492","261102","261200","261217","261218","261361","261103","261207","261332","261335","261336","261342","261343","261210","261212","261214","261215","261304","261305"};
    string AdvancedComENGR = "Advanced Computer Engineering Technology";
    string ProjSurvey = "Project Survey";
    string Project = "Project";

    string ComProgramming = "Computer Programming";
    string ObjectProgramming = "Object-Oriented Programming";
    string DataStructres = "Data Structures for Computer Engineers";
    string Algorithms = "Algorithms for Computer Engineers";
    string SoftwareENGR = "Software Engineering";

    string BasicCom = "Basic Computer Engineering";
    string BasicComLab = "Basic Computer Engineering Laboratory";
    string DataCommu = "Data and Computer Communications";
    string ComNetworks = "Computer Networks";
    string ComNetworksLab = "Computer Networks Laboratory";
    string DatabaseSystems = "Fundamentals of Database Systems";
    string DatabaseSystemsLab = "Database System Laboratory";

    string DigitalCircuits = "Logic and Digital Circuits";
    string DigitalCircuitsLab = "Logic and Digital Circuits Laboratory";
    string Microprocessor = "Microprocessor and Interfacing";
    string EmbeddedSystemLab = "Embedded System Laboratory";
    string ComArchitecture = "Computer Architecture";
    string OperatingSystems = "Operating Systems";
    
    string Major_subject[] = {"AdvancedComENGR","ProjSurvey","Project","ComProgramming","ObjectProgramming","DataStructres","Algorithms","SoftwareENGR","BasicCom","BasicComLab","DataCommu","ComNetworks","ComNetworksLab","DatabaseSystems","DatabaseSystemsLab","DigitalCircuits","DigitalCircuitsLab","Microprocessor","EmbeddedSystemLab","ComArchitecture","OperatingSystems"};
    int credit[]={3,1,3,3,3,3,3,3,3,2,3,3,1,3,1,3,1,3,1,3,3};
    int n = sizeof(Major_key)/sizeof(Major_key[0]);
        int count = -1;
            for(int i = 0; i<n;i++){
                if(x == Major_key[i]){
                    count = i;
                    break;
                }
            }

            if(count == -1) return 0;
            else{
                return Major_key[count]+" "+Major_subject[count];
        }  
}

