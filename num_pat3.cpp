#include <iostream>
using namespace std;

int main() {
    int i,j;
    int num;
    //number of rows
    for(i=0;i<5;i++){
        num = 1;
        //columns
        for(j=5;j>i;j--){
            cout<<num<<" ";
            num = num + 1;
        }
        cout<<endl;
    }
    return 0;
}
