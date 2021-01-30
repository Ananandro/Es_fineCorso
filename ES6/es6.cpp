#include <iostream>
#include <cstring>


using namespace std;




int main(){

    char stringa[100];
    int dim;
    int x=1;

    cout << "Inserire frase senza spazi:" << endl;
    cin.getline(stringa, 100);

    dim = strlen(stringa);

    cout << "La stringa compressa e':" << endl;

    for(int i=0; i<dim; i++){                           //using < instead of <= should be safe to not go out the array when accessing strings[i+1]

        if(stringa[i] == stringa[i+1]) x++;

        else if(stringa[i] != stringa[i+1]){

            cout << stringa[i] << x;
            x=1;
        }
    }

    cout << endl;

    return 0;
}