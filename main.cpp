#include <iostream>
#include <string>
using namespace std;

int main(){

int matrix[3 ] [2];
   int i,j;
   cout<<"enter number in matrix";
   for(i=0;i<3;i++){
   for (j=0;j<2;j++){
   cin>> matrix[i][j];
   }
   }
   cout<< "matrix is";
   for (i=0;i<3;i++){
   for (j=0;j<2;j++){
   cout<<matrix[i][j]<<" ";
   }
   cout<<endl;
   }


    return 0;
}


