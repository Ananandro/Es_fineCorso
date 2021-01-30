#include <iostream>



using namespace std;



int main(int argc, char* argv[]){


    for(int i=(argc-1); i >=1; i--){

        cout << argv[i] << endl;

    }


    return 0;

}