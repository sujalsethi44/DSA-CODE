#include <iostream> 
using namespace  std;
class student {
private:
int age;
public:
int rollno;
void display()
{
    cout<<age<<" "<<rollno<<" ";
}
int getage()            //to acess age which was declare in private section 
{                       
    return age;
}
void setage(int a)
{
    age=a;
}

};
int main()
{
    student s1;
    student *s2=new student;

    s1.setage(20);
    s2 -> setage(222);
    /* s1.rollno=121;
    (*s2).rollno=23455;
    cin<<"student 1 age"<<s1.getage<<"roll no"<<rollno;
    cout<<"student 2 age"<<(*s2).getage<<"roll no"<<(*s2).rollno; */

    s1.display();
    (*s2).display();
}
