#include<iostream>
#include<thread>
#include<chrono>

using namespace std;

void Daemon(){
    while(1){
        cout<<"Hi I have been waiting until 1 second\n";
        this_thread::sleep_for(1000ms);
    }
}

int main(){
    thread t1(Daemon);
    t1.detach();

    this_thread::sleep_for(5000ms);

    return 0;
}