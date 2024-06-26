#include<iostream>
using namespace std;
class base
{
    public:
   virtual void show()
    {
        cout << "base";
    }
};

class derived1 :public base
{
    public :
    void show ()
    {
        cout << "derived 1 class";
    }
};

class derived2 : public base
{
    void show()
   { cout << "derived 2 class";}

};

int main()
{
  // derived1 drv1;
   //derived2 drv2;
   base *ptr;
   ptr = new derived1(); // object of derived 1 class
   ptr->show(); // it will call the base class function itself, it acnnot access the derived class properties
// but as soon as we make the base function virtual, it can access the derived class properties as its a vitual funtion. 
   int d;
   cin >> d;
   cout << " the number d is :"<< d;

   cin.get();
   return 0;

}