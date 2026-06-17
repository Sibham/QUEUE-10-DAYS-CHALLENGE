#include<iostream>
#include<queue>
using namespace std;

int main(){

    //create a queue
    queue<int>q;

    q.push(10);
    cout<<"Front element is: "<<q.front()<<endl;
    q.push(11);
    cout<<"Front element is: "<<q.front()<<endl;
    q.push(12);
    cout<<"Front element is: "<<q.front()<<endl;

    cout<<"Size of Queue: "<<q.size()<<endl;

    q.pop();
    q.pop();
    q.pop();

    cout<<"Size of Queue :"<<q.size()<<endl;

    if(q.empty()){
        cout<<"Queue is empty"<<endl;
    }else{
        cout<<"Queue is not empty";
    }
    return 0;
}
