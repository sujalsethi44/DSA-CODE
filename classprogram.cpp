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

}
student(int r){
    age=r;
}
int  display(){
    cout<<"age ="<<age<<endl;
    cout<<"rno ="<<rno<<endl;
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
    s3->display();
    return 0;

}