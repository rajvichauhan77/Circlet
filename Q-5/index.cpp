#include<iostream>

using namespace std;

int main(){

    int n=5;

    for(int i=5; i>=1; i--){
        for(int j=1; j<=i; j++){
            cout  << " " ;  
        }
        for(int k=i; k<=5; k++){
            cout << k  ;
        }

        for(int l=4; l>=i; l--){
            cout << l ;
        }
         cout <<  endl;
    }
   


}