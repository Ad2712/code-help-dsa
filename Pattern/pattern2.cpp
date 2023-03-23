#include<iostream>
using namespace std;

int main(){
    
    
    int n;
    cin >> n;

    //NUMERIC HOLLOW PYRAMID

    for(int row=0; row<n; row=row+1){
        for(int col=0; col<n-row-1; col=col+1){
            cout << " ";
        }

        //Numbers with spaces in between

        int start =1;
        for(int col=0; col<2*row+1; col=col+1){
            //first row or last row
            if(row ==0 || row == n-1){
                if(col%2 == 0){
                    cout << start;
                    start= start+1;
                }
                else{
                    //odd
                    cout << " ";
                }
            }
            else{
                //first col
                if(col ==0){
                cout << 1;
            }
            else if(col == 2*row+1-1){
                cout << row+1;
            }
            else{
                cout << " ";
            }
         }
        }
        cout << endl;

    }

}
    


    





  // NUMERIC FULL PYRAMID


    // for(int row=0; row < n; row=row+1){


    //     //ESME SABSE PEHLE SPACES PRINT HOTI HAI
    //     for(int col=0; col<n-row-1; col=col+1){
    //         cout << " ";
    //     } 

    //     // NUMBERS
    //      for(int col=0; col<row+1; col=col+1){
    //         cout << row+1+col;
    //     }

    //     // REVERSE COUNTING
    //     int start = 2*row;
    //     for(int col=0; col<row; col=col+1){
    //         cout << start;
    //         start = start - 1;
    //     }


    //     cout << endl;


    // }

    // for(int row=0; row<n; row=row+1){
    //     for(int col=0; col<row+1; col=col+1){
    //         cout << row+1+col << " ";
    //     }
    //     cout << endl;

        
    // }
   
