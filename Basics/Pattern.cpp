#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no.of rows";
    cin >>n;
    for(int row=0; row<n;row=row+1){
        for(int j=0;j<n-row+3;j++){
            cout<<" ";
        }
        for(int col=0; col<row+1; col=col+1){
            cout<<row+col+1<<"";
        }
        int a=row*2;
        for(int j=0; j<row; j++){
            cout<<a;
            a--;
        }

        cout<< endl;
        
    }

}