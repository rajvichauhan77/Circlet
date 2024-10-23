#include<iostream>

using namespace std;

int main(){

    int n=5;

    for(int i=1; i<=n; i++){
         cout << "*" << " ";

    if(i==1){
        cout << "* * * *" ;
    }
    else if(i==2){
        cout << "      *";
    }
    else if(i==3){
        cout << "* * * *" ;
    }
          
    cout << endl;
        
    }

}