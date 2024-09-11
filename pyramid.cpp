#include <iostream>
using namespace std;

int main() {
    int i,j;
    //number of rows
    for(i=0;i<6;i++){
        //columns
        for(j=0;j<i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
