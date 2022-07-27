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


int main() {

student s1(int rno){
 s1(10, 1001); 
cout << "S1 : "; s1.display();

student s2(int rno){
s2(s1);

cout << "S2 : "; 
s2.display();

Student *s3 = new Student (20, 2001);

cout << "S3 : "; 
s3->display();

Student s4(*s3);
cout<<"s4";
s4.display();
return 0;
}