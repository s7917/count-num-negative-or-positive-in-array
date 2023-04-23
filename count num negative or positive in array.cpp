//-----------count num negative or positive in array -------------------------
#include<iostream>
using namespace std;

int main(){
    int A[10] = {1,-3,5,-7,8,9,-2,4,6,-12};
    int pcount=0;
    int ncount=0;

    for(int x :A){

        if(x<0)
        ncount++;
        else
        pcount++;
    }
    cout<<ncount<<" "<<pcount;
    return 0;
}
