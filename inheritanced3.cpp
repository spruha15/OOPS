#include<iostream>
using namespace std;

class rectangle
{
    public:
    int l , b ;

    int area()
    {
    
        int A = l*b;
        return A;
    }

    

};

class cuboid : public rectangle//syntax of inherited class it can acces varaibles and functions of the base class.
{
    public:
    int h;
  
    
    int volume()
    {
    
        int volume = l*b*h;
        return volume;

    }

    void display()
    
    {

    }
};

int main()
{
   
    cuboid C;
    C.l =10;
    C.b = 7;
    C.h = 18;
   int area = C.area();
    int vol = C.volume();

    cout << "area:" << area<< endl;
    cout << "volume:" << vol<< endl;
}