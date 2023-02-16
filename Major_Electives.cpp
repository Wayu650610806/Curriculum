#include<iostream>
using namespace std;

void MajorElec(string x){
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
        int n = sizeof(code)/sizeof(code[0]);
        int count = -1;
        for(int i = 0; i<n;i++){
            if(x == code[i]){
                count = i;
                break;
            }
        }

        if(count == -1) cout << "Don't have this subject";
        else{
            cout << code[count] << " " << subject[count] << endl;
        }

}