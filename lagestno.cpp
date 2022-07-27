#include<iostream>
using namespace std;
void largest(int b[],int s){
    int max=b[0];
    for(int i=0 ; i<s ;i++){
        if(b[i]>max){
            max=b[i];
        }
    }
    cout<<"largest"<<max;
}
int main()
{
    int a[1000];
    int n;
    cout<<"enter the size of thearray";
    cin>>n;
    for(int i=0 ;i<n ;i++)
    {
        cin>>a[i];
    }
    largest(a,n);
    return 0;
}