#ifndef OOPCOURSEHOMEWORK_LUCKYNUMBER_H
#define OOPCOURSEHOMEWORK_LUCKYNUMBER_H

using namespace std;

class LuckyNumber{
    int num;
public:
    LuckyNumber(){
        num = 0;
    }
    LuckyNumber(int num){
        this->num = num;
    }
    void kk(){
        printf("taha");
    }
    void printAddress(){
        cout << &num << endl << &LuckyNumber::printAddress << '\n';
        cout << &LuckyNumber::kk;
    }
};

#endif
