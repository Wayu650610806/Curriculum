#include<iostream>
#include<string>
using namespace std;

string 	GE(string x){
        string IntSci="Integrated Science";
        string Chemistry="Chemistry in Everyday Life";
        string Eat="Eating Well : Better Living and Disease Prevention";
        string Medications="Medications in Everyday Life";
        string Health_Work="Health and Working in the Digital Age";
        string Account="Accounting for Non Accountants";
        string Finance="Finance for Daily Life";
        string Consumer="Smart Consumer";
        string Characteristics="Characteristics and Values for Being a Professional Entrepreneur";
    string code[]={"011100","109114","127100","128100","154104","254182","256131","259108","259193","259195","602102","801100","951100","201100","203100","211100","462130","571116","701181","702101","705191","259194"};
    string subject[]={"Man and Philosophy","Art in Everyday Life",
    "Politics in Everyday Life","Basic Good Governance in Administration","Environmental Conservation","Introduction to Energy",
    "Urban Mining","Electricity in Everyday Life","Morality and Intelligence for Being a Professional","Managing Activities for Development","Life and Alternative Energy","Architecture in Everyday Life","Modern Life and Animation",IntSci,Chemistry,Eat,Medications,Health_Work,Account,Finance,Consumer
    ,Characteristics};
    int credit[]={3,3,3,3,3,3,3,3,1,1,3,3,3,3,3,3,3,3,3,3,1,1};
    int n = sizeof(code)/sizeof(code[0]);
    int count = -1;
    for(int i = 0; i<n;i++){
        if(x == code[i]){
            count = i;
            break;
        }
    }
//  copy below here
    if(count == -1) return 0;
    else{
        string c=to_string(credit[count]);
        return code[count]+","+subject[count]+","+c;
    }
}

string Learner(string x){
        string Learner_Required_key[]={"204100","261111","953111"};
		string Learner_Required_credits[]={"3","3","3"};
		
        string Infotech="Information Technology and Modern Life";
        string Internet="Internet and Online Community";
        string Software="Software for Everyday Life";
        
        string Learner_Required_subject[]={Infotech,Internet,Software};
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
		return Learner_Required_key[count]+","+Learner_Required_subject[count]+","+Learner_Required_credits[count];
	    }
    }

string Innovative(string x){
    string Innovative_Required_key[]={"013110","050106","176100","201114","201117","201190","207109","207110","368100","602201","610111","703103","751100","851103","852100"};
     int Innovative_Required_credits[]={3,3,3,3,3,3,3,3,3,1,3,3,3,3,3};
	
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

    string Innovative_Required_subject[]={Psychology,Humanis,Law,Environment,Math_Sci_Civil,Thinking,Life,Phy_Changed_World,Agribusiness,Vision_Indus,Package,Intro_Entrepreneu,Eco,Media_Life,Film};
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
		return Innovative_Required_key[count]+","+Innovative_Required_subject[count]+","+to_string(Innovative_Required_credits[count]);
	    }
        
}



string MajorElec(string x){
    string code[] = {"261404", "261406", "261407", "261408", "261409", "261411", "261414", "261421", "261424", "261430", "261433", "261434", "261435", "261437", "261438", "261439", "261441", "261444", "261446", "261447", "261448", "261449", "261453", "261456", "261457", "261458", "261459", "261461", "261465", "261468", "261469", "261470", "261471", "261472", "261473", "261475", "261476", "261478", "261479", "261493", "261494", "261497", "261498", "261499", "269421", "269430", "269431", "269432", "269433", "269441", "269461", "269462", "261400"} ;
    string subject[] = {"Advanced Computer Engineering Laboratory", "Basic Compiler Design", 
                        "Fundamentals of Computation for Computer Engineers", "Quantum Computation",
                        "Functional Programming", "Parallel Processing and Distributed Systems",
                        "Digital System Design", "Computer Hardware Design",
                        "Remote Monitoring and Control Systems", "Wireless Networks", "Network Programming",
                        "Computer Network Design and Management", "Broadband Communication Networks",
                        "Fundamentals of Queueing Theory for Computer Engineers", "Fundamentals of Multiprotocol Label Switching",
                        "Wireless Communications for Computer Engineering", "Internet of Things and Big Data", "Advanced Database Systems",
                        "Information Systems", "Network and Information Security", "Data Mining for Computer Engineering",
                        "Software Testing for Computer Engineering", "Digital Image Processing", "Introduction to Computational Intelligence for Computer Engineering",
                        "Digital Image and Video Compression", "Machine Vision", "Deep Learning", "Visual and Interactive Programming", "Computer Graphics",
                        "System Analysis and Design for Computer Engineering", "Software Project Management for Computer Engineering",
                        "Signals and Systems", "Advanced Digital Signal Processing", "Robotics",
                        "Computer - Aided Manufacturing", "Modeling and Optimization for Big Data Analytics",
                        "Biomedical Instruments", "Principles of Control Systems", "Bioinformatics Programming",
                        "Seminar", "Selected Topics in Computer Engineering", "Selected Topics in Computer Software",
                        "Selected Topics in Computer Networks", "Selected Topics in Computational Intelligence",
                        "Computer Network Traffic Analysis", "Wireless And Broadband Computer Networks", "Wireless Sensor Network",
                        "Peer-to-Peer Systems", "Computer Network Routing Protocols", "Information Retrieval and Extraction",
                        "Personal Software Process Improvement", "Introduction to Human-Computer Interaction", "Computer Engineering Training"};
	string unit[] = {"2", "3", "3", "3", "3", "3", "3", "3", "3", "3", "3", "3", "3", "3", "3", "3", "3", "3", "3", "3", "3", "3", "3", "3"
						, "3", "3", "3", "3", "3", "3", "3", "3", "3", "3", "3", "3", "3", "3", "3", "3", "3", "3", "3", "3", "3", "3", "3", "3",
						 "3", "3", "3", "3", "3"} ;
    int n = sizeof(code)/sizeof(code[0]);
    int count = -1;
    for(int i = 0; i<n;i++){
        if(x == code[i]){
            count = i;
            break;
        }
    }
    if(count == -1) return 0;
        else{
            return code[count]+","+subject[count]+","+unit[count];
            }
}
