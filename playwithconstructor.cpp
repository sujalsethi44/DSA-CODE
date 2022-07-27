#include<iostream>
using namespace std;
class fraction{
private:
int numerator;
int denomenator:

public:

fraction(int numerator, int denomenator){
    this-> numerator=numerator;
    this-> denomenator =denomenator;

}

void print(){
    cout<<this-> numerator <<" / "<<this-> denomenator<<endl;


}
void siplify(){
    int gcd=1;
    int j=min(this-> numerator ,this-> denomenator);
    for (int i=0 ;i<j; i++){
        if(this-> numerator % i==0 && this-> denomenator % i==0){
            gcd=i;
        }
    }
    this-> numerator= this-> numerator/gcd;
    this-> denomenator =this-> denomenator/gcd;
}



 void add(fraction f2){
    int lcm= denomenator *f2.denomenator;   //lcm=this->denominator*  *f2.denomenator      //a funtionadd look like 
    int lcm= denomenator *f2.denomenator;                                                   //a funtionadd look like 
    int x= lcm /denomenator;                                                                    //f1.add(f2)
     int y= lcm /f2.denomenator;                                        //f1=f1+f2 (so no return type interanlly sab hora hai)


     int num = x*numerator +(y * f2.numerator);

     numerator=num;
     denomenator =lcm;

     siplify();
 }                                   /

};
  int main()
      {
fraction f1(10,2);
fraction f2(15,4);
f1.add(f2);

f1.print();
f2.print();
return 0;
      }
  