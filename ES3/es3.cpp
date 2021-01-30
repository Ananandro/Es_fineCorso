#include <iostream>


using namespace std;



int main(){

    int x;
    int array[100] = {0};
    int z;

    cout << "inserire x" << endl;
    cin >> x;
    cout << "ora inserire l'array, max 100 valori ed inserire 0 per terminare l'inserzione" << endl;

    for(int i=0; i<100; i++){

        cin >> array[i];

        if(array[i] == 0){
            z = i;
            break;
        }
    }

    for(int u=0; u<z; u++){

        if(array[u] == x){
            cout << "TRUE" << endl;
            return 0;
        }
    }

    cout << "FALSE" << endl;

    return 0;

}