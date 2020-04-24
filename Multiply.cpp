//
// Created by Priyash on 3/7/2020.
//
#include <iostream>
using namespace std;

class Codility{

public:
    unsigned int solution(unsigned int a, unsigned int b);

private:
    unsigned int multiply(unsigned int a, unsigned int b);
};

unsigned int Codility::multiply(unsigned int a, unsigned int b) {

    unsigned int result = 0;
    while(b > 0){
        if(b & 1){
            result = result + a;
        }
        a = a << 1;
        b = b >> 1;
    }
    return result;
}

unsigned int Codility::solution(unsigned int a, unsigned int b) {
    unsigned int result = 0;
    unsigned int index = 1;
    unsigned int counter = 0;
    while(result <= b){
        unsigned int result = multiply(index, index + 1);
        if(result > b)break;
        if(result >= a && result <= b){
            ++counter;
        }
        ++index;
    }
    return counter;
}

int main(){
    Codility* codility = new Codility();
    unsigned int count = codility->solution(21, 29);
    cout<<count<<endl;
}

