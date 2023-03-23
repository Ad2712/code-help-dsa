#include<iostream>
using namespace std;

int main(){
     int n;
     cin >> n;

    //  for(int row=0; row<n; row=row+1){
    //     for(int col=0; col<row+1; col=col+1){
    //         cout << row+1;
    //         if(col != row){
    //             cout << "*";
    //         }

            


            
    //     }
    //     cout << endl;

    //  }

    //  //next half
    //  for(int row=0; row<n; row=row+1){
    //     for(int col=0; col<n-row; col=col+1){
    //         cout << n-row;
    //         if(col != n-row-1){
    //             cout << "*";
    //         }
            

            


            
    //     }
    //     cout << endl;

    // }


    //ALPHABET PALINDROME PYRAMID

    for(int row=0; row<n; row=row+1){
        int col;
        for(col=0; col<row+1;col=col+1){
            int ans = col + 1;
            char ch = ans + 'A' -1;
            cout << ch;
        }
        

        //reverse counting printing
        for(int col=row; col>=1; col=col-1){
            int ans = col; 
            char ch = ans + 'A' -1 ;
            cout << ch;
        }
        cout << endl;
    }
      

}
