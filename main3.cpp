#include <iostream>
#include <string>
using namespace std;

int main(){

int array[]={10,34,32,3,6};
int i;
int j;
cout<< "array before sorted";
for(i=0;i<5;i++){
    cout<< array[i]<<" ";
}
for(i=0;i<5;i++){
    for(j=0;j<5;j++){
     if(array[j]> array[j+1]){
        int temp=array[j];
        array[j]=array[j+1];
        array[j+1]=temp;
     }
    }
}
//display sorted array
cout<<"sorted array:";
for(i=0;i<5;i++){
    cout<<array[i]<<" ";
}cout<<endl;




    return 0;
}


