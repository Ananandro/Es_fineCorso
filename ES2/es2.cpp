#include <iostream>


using namespace std;



int main(){

    int array[] = {3, 9, 1, 2, 10, 8, 4, 5, 2, 3, 7, 4, 6, 5, 9, 8};
    int x, y;

    cout << "Inserire x: " << endl;
    cin >> x;
    cout << "Ora inserire y:" << endl;
    cin >> y;

    for(int i=0; i<16; i++){

        if(array[i] == x) array[i] = y;
        
        cout << array[i] << " ";
    }

    cout << endl;


    return 0;

}