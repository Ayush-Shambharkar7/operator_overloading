//Ayush Shambharkar 
//23070123034
//Aim - Implemention of Function and Operator Overloading to perform Sum and Difference using Operator Overloading

#include<iostream>
using namespace std;

class Complex{
    private: 
        int real ,imag;

    public:
    Complex(int r =0 , int i = 0){
        real = r;
        imag = i;
    }

    Complex operator+(Complex const& obj){

    Complex res;
    res.real = real + obj.real;
    res.imag = imag + obj.imag;
    return res;
    }
    void print(){
        cout << real << "+i" << imag << "\n" << endl;
    }
};
int main(){
    Complex c1(10,3) , c2(5,6);
    Complex c3= c1+c2;
    c3.print();
    return 0;
}


/*
OUTPUT
15+i9
*/
