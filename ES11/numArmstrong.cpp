#include <iostream>
#include <cmath>
#include <sstream>


using namespace std;


bool isArmstrong(int num, int len);

int main(int argc, char* argv[]){

    //Get from cmd

    if(argc != 2){

        cout << "Wrong number of arguments" << endl;

        return -1;
    }

    //Compute limits

    int n = atoi(argv[1]);

    int start = pow(10, n-1);
    int end = pow(10, n);

    for (int i = start; i < end; i++)
    {
        if(isArmstrong(i, n)){

            cout << i << ", ";
        }
    }
    
    return 0;
}


bool isArmstrong(int num, int len){

    int sum = 0;

    for (int i = 0; i < len; i++)
    {
        int digit = 1; //splittare il numero
        sum += pow(digit, len);

    }

    return sum == num;
}