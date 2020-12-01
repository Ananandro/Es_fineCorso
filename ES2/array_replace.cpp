#include <iostream>
#include <time.h>
#include <cstdlib>


using namespace std;


int main(int argc, const char* argv[]){

    srand(time(NULL));

    if(argc != 3){

        cout << "Errore, non sono stati specificati due argomenti da riga di comando" << endl;
        return 0;
    }

    int v[20];

    for(int i=0; i<20; i++){

        v[i] = rand() % 20;
    }

    int x = atoi(argv[1]);
    int y = atoi(argv[2]);

    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    for(int z=0; z < 20; z++){

        if(v[z] == x){
            v[z] = y;
        }

        cout << v[z] << "  ";
    }

    cout << endl;
    return 0;
}