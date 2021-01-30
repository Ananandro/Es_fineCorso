#include <iostream>


using namespace std;


int mCm(int x1, int y1){

    int max;

    if(x1>y1) max = x1;
    else max = y1;

    for(int i=max; i<100000; i++){

        if((i%x1 == 0) && (i%y1 == 0)) return i;

    }
return 1;
}


int mCd(int x2, int y2){

    int min;

    if(x2<y2) min = x2;
    else min = y2;

    for(int i=min; i>0; i--){

        if((x2%i == 0) && (y2%i == 0)) return i;
    }
return 1;
}




int main(){

    int mcm;
    int mcd;
    int x,y;

    cout << "Inserire x e y:" << endl;
    cin >> x >> y;

    mcm = mCm(x, y);
    mcd = mCd(x, y);

    cout << "MCM -- > " << mcm << endl << "MCD --> " << mcd << endl;

    return 0;
}