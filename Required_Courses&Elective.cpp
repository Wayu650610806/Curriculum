#include<iostream>
using namespace std;

string Learner(string x){
        string Learner_Required_key[]={"001101","001102","001201","001225","204100","261111","953111","201100","203100","211100","462130","571116","701181","702101","705191"};
		int Learner_Required_credits[]={3,3,3,3,3,3,3,3,3,3,3,3,3,3,1};
		
        string Eng1="Fundamental English 1";
        string Eng2="Fundamental English 2";
        string ReadWrite="Critical Reading and Effective Writing";
        string Engsci="English in Science and Technology Context";
        string Infotech="Information Technology and Modern Life";
        string Internet="Internet and Online Community";
        string Software="Software for Everyday Life";
        string IntSci="Integrated Science";
        string Chemistry="Chemistry in Everyday Life";
        string Eat="Eating Well : Better Living and Disease Prevention";
        string Medications="Medications in Everyday Life";
        string Health_Work="Health and Working in the Digital Age";
        string Account="Accounting for Non Accountants";
        string Finance="Finance for Daily Life";
        string Consumer="Smart Consumer";
        
        string Learner_Required_subject[]={Eng1,Eng2,ReadWrite,Engsci,Infotech,Internet,Software,IntSci,Chemistry,Eat,Medications,Health_Work,Account,Finance,Consumer};
        int n = sizeof(Learner_Required_key)/sizeof(Learner_Required_key[0]);
        int count = -1;
            for(int i = 0; i<n;i++){
                if(x == Learner_Required_key[i]){
                    count = i;
                    break;
                }
            }

	    if(count == -1) return 0;
	    else{
		return Learner_Required_key[count]+" "+Learner_Required_subject[count];
	    }
    }

string Innovative(string x){
    string Innovative_Required_key[]={"259192","013110","050106","176100","201114","201117","201190","207109","207110","368100","602201","610111","703103","751100","851103","852100","259194"};
     int Innovative_Required_credits[]={1,3,3,3,3,3,3,3,3,3,1,3,3,3,3,3,1};
	
    string Skillpro="Skills for Professionalism and Entrepreneurship";
    string Psychology="Psychology and Daily Life";
    string Humanis="Humanistic Arts";
    string Law="Humanistic Arts";
    string Environment="Environmental Science in Today’s World";
    string Math_Sci_Civil="	Mathematics and Science in Civilization";
    string Thinking="Critical Thinking, Problem Solving and Science Communication";
    string Life="Life and the Universe";
    string Phy_Changed_World="Physics : the Science that Changed the World";
    string Agribusiness="Starting an Agribusiness in a Changing World";
    string Vision_Indus="Agro-Industrial Vision";
    string Package="Packaging for Marketing";
    string Intro_Entrepreneu="Introduction to Entrepreneurship and Business";
    string Eco="Economics for Everyday Life";
    string Media_Life="Life and Society through Media";
    string Film="Introduction to Film";
    string Characteristics="Characteristics and Values for Being a Professional Entrepreneur";

    string Innovative_Required_subject[]={Skillpro,Psychology,Humanis,Law,Environment,Math_Sci_Civil,Thinking,Life,Phy_Changed_World,Agribusiness,Vision_Indus,Package,Intro_Entrepreneu,Eco,Media_Life,Film,Characteristics};
    int n = sizeof(Innovative_Required_key)/sizeof(Innovative_Required_key[0]);
        int count = -1;
            for(int i = 0; i<n;i++){
                if(x == Innovative_Required_key[i]){
                    count = i;
                    break;
                }
            }
	    if(count == -1) return 0;
	    else{
		return Innovative_Required_key[count]+" "+Innovative_Required_subject[count];
	    }
        
}




