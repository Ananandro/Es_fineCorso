#include <iostream>


using namespace std;




int powint(int base, int rep){

    if(rep == 0) return 1;

    int res = 1;

    if (rep != 0){

        while(rep > 0){

            res *= base;
            rep--;
        }

    }

    return res;
}





void numSplitter(int array1[][10], int i1){

    int numero = array1[i1][0];

    for(int q=9; q>=0; q--){

        array1[i1][9-q] = (numero/powint(10, q)) % 10;
    }

}



void toglizeri(int array1[][10], int dimensione[], int i2){

    int qwerty = 0;

    for(int i=0; i<10; i++){

        if(array1[i2][i] != 0){

            dimensione[i2] = 10-i;

            for(int z=i; z<10; z++){

                array1[i2][qwerty] = array1[i2][z];
                array1[i2][z] = 0;
                qwerty++;

            }

            return;
        }
    }
}






int main(){


    int array[100][10] = {0};
    int dim[100] = {0};
    int output[1000];                                        //worst case scenario
    int x=0;
    int buffer;

    cout << "Inserisci una serie di numeri, 0 per terminare l'inserzione:" << endl;

    for(int i=0; i<100; i++){

        cin >> buffer;
        if(buffer == 0) break;
        else{
            
            array[i][0] = buffer;
            x++;                                            //la x serve per controllare quanti numeri prendo in input
            numSplitter(array, i);
            toglizeri(array, dim, i);
        }
    }



}