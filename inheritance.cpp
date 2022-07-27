#include<iostream>
using namespace std;
class vehicle {
int maxspeed;
protected:

    int numtyres;

public:

    string color;

};
class car :public vehicle{
public:

    int noofgares;

void print()
{
    cout<<"numtyres="<<numtyres<<endl;
    cout<<"color="<<color<<endl;
    cout<<"noofgares="<<noofgares;
    //cout<<"maxspeed"<<maxspeed;  //as it is private property of vehicle class
}
};
int main(){
    vehicle v;
    car c;
    /*v.maxspeed=100; 
    v.numtyres=4; */
    v.color="blue";
    c.noofgares=67;
   // c.numtyres=89;
    c.noofgares=897;
    c.print();
    return 0;
}