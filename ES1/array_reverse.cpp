#include <iostream>


using namespace std;



int main(int argc, const char* argv[]){                 //argc è il numero di ....+1 ed argv è il nome del programma + la stringa

    for(int i=(argc - 1); i >= 1; i--){

        cout << argv[i] << "  ";
    }
    
    cout << endl;

    return 0;

}