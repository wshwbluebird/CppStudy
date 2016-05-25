////
//// Created by Macbook Pro on 16/5/25.
////
////静态成员 是为了实现这个类 对歌对象之间的数据共享引进的,不属于某一个特别的对象
////静态变量 是属于累的
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
//        count++;
//    }
//    Point(int nx, int ny)
//    {
//        x = nx;
//        y = ny;
//        cout<<"constructor called"<<endl;
//        count++;
//    }
//    ~Point()
//    {
//        count--;
//        cout<<endl;
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
//    void  showConut()
//    {
//        cout<<"current count:   "<<count<<endl;
//
//    }
//
//
//private:
//    int x;
//    int y;
//    static int  count;
//};
//int Point :: count = 0;//对 类中的静态变量进初始化;
//void Point::Move(int nx , int ny)
//{
//    cout<<"move the point to ("<<nx<<"."<<ny<<")"<<endl;
//    x = nx;
//    y = ny;
//}
//int main ()
//{
//    Point p (1,2);
//    p.showConut();
//    Point *ptr =&p; //ptr 和 p只得是同一个  如果不是指针变量则不是   count的数量并没有增加
//
////    cout<<p.getX()<<endl;
////    cout<<ptr->getX()<<endl;
////    ptr->Move(3,4);
////    cout<<p.getX()<<endl;
//
//      Point point (3,4);
//      point.showConut();
//      point.~Point();//此时调用并没有 真的析够这个对象
//      //point.showConut();
//      p.showConut();
//
//    return 0;
//}
