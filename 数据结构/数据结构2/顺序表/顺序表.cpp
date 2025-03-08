#include<iostream>
typedef int Elemtype;
class SeqList{
private:
    Elemtype *data;
    int length;
    int capacity;
public:
    SeqList(int cap = 10) : capacity(cap)  ,length(0){
        data = new Elemtype[capacity];
    }
    ~SeqList(){
        delete[] data;
    }
    int GetLength(){
        return length;
    }
    bool insert(int pos, Elemtype element){
        if()
    }
};