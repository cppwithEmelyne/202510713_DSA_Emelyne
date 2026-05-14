#include <iostream>

using namespace std;
void fibonacie(int n){
int a=0;
int b=1;
int c;
cout<<a<<b<<endl;
for(int i=1;i<=n-2;i++)
                {


c=a+b;
cout<<c<<endl;
a=b;
b=c;}
}


int main()
{int n;
cout<<"enter number of terms";
cin>>n;
fibonacie(n);

    return 0;
}
