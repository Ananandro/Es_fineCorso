#include <iostream>
#include <cstring>


using namespace std;


bool check(char string[], char* x, int i1, int y1){

    for(int z=0; z<(i1-y1); z++){

        if(x[z] == string[i1]) return false;
    }

    return true;
}



int main(){

    char stringa[100];
    char* px = &stringa[0];
    int counter = 0;
    int out = 0;
    int len;
    int y = 0;

    cout << "Inserisci frase:" << endl;
    cin.getline(stringa, 100);

    len = strlen(stringa);

    for(int i=0; i<len; i++){

        if(check(stringa, px, i, y) == true){

            counter++;

        }
        else {

            px = &stringa[i];
            if(counter >= out) out = counter;
            counter = 0;
            y=i;
        }

        if(counter>=out) out = counter;
    }

    cout << "La sottotringa piu' lunga ha " << out << " caratteri tra loro diversi." << endl;
    
    return 0;

}