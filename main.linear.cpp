#include <iostream>
#include <string>
using namespace std;

int main(){

long keynumber=787406;
int phonenumber[3];
int i=0;
do{
    cout<<"enter your number";
    cin>>phonenumber[i];
    i=i+1;
}while(i<3);
for(int i=0;i<3;i++){
    if(phonenumber[i]==keynumber){
        cout<<"esther number is found"<<endl;
        break;
    }
}
    std::cout << "Start small. Ship something.";


    return 0;
}


