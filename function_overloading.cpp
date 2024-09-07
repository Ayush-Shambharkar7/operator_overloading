//Ayush Shambharkar
//23070123034   
//Aim - to learn and the use of the function overloader in c++.

#include<iostream>
using namespace std;

class addition{
    public:
    int sum (int a , int b){
        return a+b;
    }
    int sum (int a , int b , int c){
        return a + b + c;
    }
    double sum (float a , double b , double c){
        return a + b + c;
    }
};

int main(void){

    addition object;
    cout << object.sum (20,10) << endl;
    cout << object.sum (12,15,66) << endl;
    cout << object.sum (1.2 , 12.2,33.3) << endl;

    return 0;
}

/*
OUTPUT
30
93
46.7
*/

