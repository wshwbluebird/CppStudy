//
// Created by Macbook Pro on 16/6/5.
//虚基类
#include <iostream>
using namespace std;

class Vechile
{
public:
    Vechile(int wieght)
    {
        Vechile::weight = weight;
    }
    void setWeight(int weight)
    {
        cout<<"重新设置重量: "<<weight<<endl;
        this->weight = weight;
    }

protected:
    int weight;
};

class Car : virtual public Vechile  //只是在形式上初始化   并不真实的调用
{
public:
    Car(int weight, int aird):Vechile(weight)
    {
        Car::aird = aird;
    }
protected:
    int aird;
};
class Boat : virtual public Vechile
{
public:
    Boat(int weight, int tonnage):Vechile(weight)
    {
        Boat::tonnage = tonnage;
    }
protected:
    float tonnage;
};

class AmphibianCar:public Car,public  Boat
{
public:
    AmphibianCar(int weight , int aird , float tonnage):Vechile(weight),Car(weight ,aird),Boat(weight ,tonnage)
    {}
};
int main()
{
   AmphibianCar a(4,200,1.35);
    a.setWeight(3);
    Car d(1,2);
    d.setWeight(4);
    return 0;
}

