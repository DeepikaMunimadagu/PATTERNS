#include <iostream>
using namespace std;

int main() {
    int i,j;
    //number of rows
    for(i=0;i<5;i++){
        //columns
        for(j=5;j>i;j--){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
