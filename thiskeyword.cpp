#include<iostream>
using namespace  std;

class student {
public:
int age;
int rno;
student(){
    age=0;
    rno=0;
}
student(int a, int b){
    age=a;
    rno=b;
    cout<<"adress="<<this<<endl;

}
student(int rno){
    this-> rno=rno;     //using this keyword(pointer)which intialise the value to the object of presently cxalled constructor
    
}
int  display(){
    cout<<"age"<<age<<endl;
    cout<<"rno"<<rno<<endl;
    return 0;
}
};
int main()
{
    int p,q;
    student s1;
    student s2(22,44);
    student *s3=new student(22);

    s1.display();
    s2.display();
    s3-> display();

    cout<<"adress of s2 stident ="<<&s2;  //same adress given by this ststement

    return 0;

}