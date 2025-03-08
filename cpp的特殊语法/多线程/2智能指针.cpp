#include<iostream>
#include<thread>
#include<memory>
using namespace std;
class A{
private:
    friend void threadfoo();
    void foo(){
        cout << "Hello World" << endl;
    }
};

void threadfoo(){
    shared_ptr<A> a = make_shared<A>();
    thread thread1(&A::foo, a.get());
    thread1.join();

}
int main(){
    threadfoo();
    return 0;
}