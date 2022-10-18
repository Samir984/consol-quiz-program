//Consol quiz

#include <iostream>
#include <string>
#include <unistd.h>
#include <cstdlib>
using namespace std;


//structure
struct option{
    string o1;
    string o2;
    string o3;
    int ans;
};

struct que_title{
    string que;
    option o;
};



//funtion declaration

void user_detail(string& name);     //funtion user_detail declaration
void que_content(que_title *qt);    //funtion que_content declaration
void ask_question(que_title *qt,int n, int *scores);    //funtion ask_question declaration


int main(){
    string name;
    int scores=0;
    int n=10;
    que_title qt[n];

    //funtion call
    user_detail(name);
    que_content(qt);
    ask_question(qt,n,&scores);
    
    system("cls");
    cout<<"Hello,"<<name<<".\nYour score is "<<scores<<" out "<< n <<endl;
    cout<<"Thanks for playing\n\n";
    return 0;
}



//funtion defination

void user_detail(string& name){    //funtion user_detail defiantion
  system("cls");
  char choise;
  cout<<"Enter your name: ";
  getline(cin,name);
  cout<<"Are you ready to play, (y/n):";
  cin>>choise;

  if(choise=='y'|| choise=='Y'){
    cout<<"cool\n";
    cout<<"Let's start the quiz\n";
    sleep(1);
    system("cls");
  }
  else{
    cout<<"Program terminating...\n";
    exit(0);
  }

}


void que_content(que_title *qt){    //funtion que_content defination
qt[0].que="Which is the fastest memery in computer system ?";
qt[0].o.o1="Static RAM";
qt[0].o.o2="Register";
qt[0].o.o3="Dynamic RAM";
qt[0].o.ans=2;

qt[1].que="Which keyboard don't help to create user definte data type in c/C++ ?";
qt[1].o.o1="Struct";
qt[1].o.o2="Union";
qt[1].o.o3="array";
qt[1].o.ans=3;


qt[2].que="Which programming language is called language of web ?";
qt[2].o.o1="java";
qt[2].o.o2="python";
qt[2].o.o3="javascript";
qt[2].o.ans=3;

qt[3].que="Where is memeory  allocated in case of dymaic memory allocation ?";
qt[3].o.o1="Heap";
qt[3].o.o2="stack";
qt[3].o.o3="seconday storage";
qt[3].o.ans=1;

qt[4].que="How many layer does OSI model have ? ";
qt[4].o.o1="8";
qt[4].o.o2="5+2";
qt[4].o.o3="5+1";
qt[4].o.ans=2;

qt[5].que="How many bit are there in 1 byte?";
qt[5].o.o1="1024";
qt[5].o.o2="8";
qt[5].o.o3="4";
qt[5].o.ans=2;

qt[6].que="Which come after c ?";
qt[6].o.o1="d";
qt[6].o.o2="c++";
qt[6].o.o3="Beach";
qt[6].o.ans=1;

qt[7].que="Which protocal is used to recieve email ?";
qt[7].o.o1="POP3";
qt[7].o.o2="HTTP";
qt[7].o.o3="FTP";
qt[7].o.ans=1;

qt[8].que="Which computer program convert assembly language to machine level language ?";
qt[8].o.o1="Assembler";
qt[8].o.o2="Compiler";
qt[8].o.o3="Interprrter";
qt[8].o.ans=1;

qt[9].que="I am an odd number. Take away one first letter and I become even. What number am I?";
qt[9].o.o1="nine";
qt[9].o.o2="seven";
qt[9].o.o3="eight";
qt[9].o.ans=2;



}


void ask_question(que_title *qt,int n, int *scores){          //funtion ask_question defination 
 
 int choose;
 for (int i = 0; i < n; i++){
    cout<<"-----------------------------------------------\t\t\tscore: "<<*scores<<"\n";
    cout<<i+1<<")  "<<qt[i].que<<endl<<endl;
    cout<<1<<")  "<<qt[i].o.o1<<endl;
    cout<<2<<")  "<<qt[i].o.o2<<endl;
    cout<<3<<")  "<<qt[i].o.o3<<endl<<endl;
    cout<<"\t"<<"Choose the correct option,(1,2,3) : ";
    cin>>choose;
    if(qt[i].o.ans==choose){
    cout<<"\t\tCorrect ans\n";
    ++(*scores);
    }
    else{
        cout<<"\t\t!!Incorrect\n\n";
    }
    cout<<"\n";  
    sleep(1);
    system("cls"); 

 }

}
