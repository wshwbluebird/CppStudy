////
//// Created by Macbook Pro on 16/5/25.
////
//
//#include <iostream>
//using namespace std;
////指针数组
//class Point
//{
//public:
//    Point()
//    {
//        x=0;
//        y=0;
//        cout<<"Default constructor called"<<endl;
//    }
//    Point(int nx, int ny)
//    {
//        x = nx;
//        y = ny;
//        cout<<"constructor called"<<endl;
//    }
//    ~Point()
//    {
//        cout<<"Destuctor called"<<endl
//                ;
//    }
//    int getX()
//    {
//        return this->x;
//    }
//    int getY()
//    {
//        return y;
//    }
//    void Move(int nx , int ny);
//
//private:
//    int x;
//    int y;
//};
//void Point::Move(int nx , int ny)
//{
//    cout<<"move the point to ("<<nx<<"."<<ny<<")"<<endl;
//    x = nx;
//    y = ny;
//}
//int main ()
//{
//    Point p (1,2);
//    Point *ptr =&p; //ptr 和 p只得是同一个  如果不是指针变量则不是
//    cout<<p.getX()<<endl;
//    cout<<ptr->getX()<<endl;
//    ptr->Move(3,4);
//    cout<<p.getX()<<endl;
//
//    return 0;
//}
