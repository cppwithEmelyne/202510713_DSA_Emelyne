#include <iostream>

using namespace std;


float add(float a,float b,float c,float d)
{
return a+b+c+d;
}
int main(){
float n1;
float n2;
float n3;
float n4;
float sum;
cout<<"enter 4 numbers:";
cin>>n1;
cin>>n2;
cin>>n3;
cin>>n4;
sum=add(n1,n2,n3,n4);
cout<<"sum is:"<<sum<<endl;


    return 0;
}
