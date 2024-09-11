#include <iostream>
using namespace std;

int main() {
    int i,j;
    int num = 1;
    //number of rows
    for(i=0;i<5;i++){
        //columns
        for(j=0;j<=i;j++){
            cout<<num<<" ";
            num=num+1;
        }
        cout<<endl;
    }
    return 0;
}
