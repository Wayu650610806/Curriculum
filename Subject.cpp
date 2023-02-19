#include<iostream>
#include<string>
using namespace std;

string ActiveCitizen(string x){
    string code[]={"140104","259191","011100","109114","127100","128100","154104","254182","256131","259108","259193","259195","602102","801100","951100"};
    string subject[]={"Citizenship","Principle of Being Professional","Man and Philosophy","Art in Everyday Life",
    "Politics in Everyday Life","Basic Good Governance in Administration","Environmental Conservation","Introduction to Energy",
    "Urban Mining","Electricity in Everyday Life","Morality and Intelligence for Being a Professional","Managing Activities for Development","Life and Alternative Energy","Architecture in Everyday Life","Modern Life and Animation"};
    int credit[]={3,1,3,3,3,3,3,3,3,3,1,1,3,3,3};
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
        return code[count]+" "+subject[count];
    }
}
string CoreCourses(string x){
    string  code[] = {"206161","206162","206261","207105","207106","207115","207116","252281","259104","259106","261208","261216","261306"};
    string Cal1 = "Calculus for Engineering 1";
    string Cal2 = "Calculus for Engineering 2";
    string Cal3 = "Calculus for Engineering 3";
    string Phy1 = "Physics for Engineering and Agro-Industry Students 1";
    string Phy2 = "Physics for Engineering and Agro-Industry Students 2";
    string PhyL1 = "Physics Laboratory for Engineering and Agro-Industry Students 1";
    string PhyL2 = "Physics Laboratory for Engineering and Agro-Industry Students 2";
    string Circuit = "Fundamentals of Electronic Circuits for Information Systems and Network Engineering";
    string Draw1 = "Engineering Drawing";
    string Workshop = "Workshop Technology";
    string Numeric = "Numerical Computation for Engineers";
    string DisMath = "Discrete Mathematics for Computer Engineers";
    string ProbStat = "Computer Engineering Probability and Statistics";
    string subject[] = {Cal1,Cal2,Cal3,Phy1,Phy2,PhyL1,PhyL2,Circuit,Draw1,Workshop,Numeric,DisMath,ProbStat};
    int credit[]={3,3,3,3,3,1,1,3,3,1,3,3,3};
    int n = sizeof(code)/sizeof(code[0]) ;


    int count = -1;
    for(int i = 0; i<n;i++){
        if(x == code[i]){
            count = i;
            break;
        }
    }
    if(count == -1) return 0;
    else{
        return code[count]+" "+subject[count];
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
            return code[count]+" "+subject[count];
            }
}
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
    
    string Major_subject[] = {AdvancedComENGR,ProjSurvey,Project,ComProgramming,ObjectProgramming,DataStructres,Algorithms,SoftwareENGR,BasicCom,BasicComLab,DataCommu,ComNetworks,ComNetworksLab,DatabaseSystems,DatabaseSystemsLab,DigitalCircuits,DigitalCircuitsLab,Microprocessor,EmbeddedSystemLab,ComArchitecture,OperatingSystems};
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