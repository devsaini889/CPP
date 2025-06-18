#include<iostream>
using namespace std;

class Complex{
    int real , imaginary;
    public:
        void getdata(){
            cout<<"The real part is: "<<real<<endl;
            cout<<"The imaginary part is: "<<imaginary<<endl;
        }
        void setdata(int a , int b ){
            real = a;
            imaginary = b;
        }
};

int main()
{
    // Complex c1;
    // Complex *ptr = &c1;  we can also do this thing by 
    Complex *ptr = new Complex;

    // (*ptr).setdata(5,15); and this also can be written as 
    ptr->setdata(5,15);

    // (*ptr).getdata(); and this can be written as 
    ptr->getdata();
    return 0;
}