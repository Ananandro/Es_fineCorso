#include <iostream>
#include <cstdlib>


using namespace std;



int main(int argc, const char* argv[]){

    if(argc < 2){

        cout << "Errore: servono dei valori in ingresso!" << endl;

        return -1;
    }

    int max = -1;
    int i_max = -1;

    for(int i=1; i < argc; i++){

        if(convert[i][0] > max){                        // argv è un array bidimensionale. Ad argv[i] è salvato una stringa (in questo caso di numeri interi)

            max = atoi(convert[i][0]);
            i_max = i;
        }
    }
    argv[i_max] = "0";
    cout << "Elemento " << i_max << "e' quello con la prima cifra piu' grande: " << max << endl;


}