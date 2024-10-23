#include<iostream>

using namespace std;

int main(){

    int n=5;

    for(int i=1; i<=5; i++){


        for(int j=1; j<=i; j++){
            cout << j << " " ;
        }


        for(int k=i; k<5; k++){
                cout << " " << " " << " ";
           
        }


        for(int k=i; k<5; k++){
                cout << " " ;
           
        }

        for(int m=i; m>=1; m--){
            cout << m << " ";
        }

         cout <<  endl;

    }
   

}

