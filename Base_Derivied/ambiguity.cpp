////
//// Created by Macbook Pro on 16/6/5.
////
//
//#include <iostream>
//using namespace std;
//class A1
//{
//public:
//    void print(){cout<<"A1:print"<<endl;}
//    void show(){cout<<"A1:show"<<endl;}
//};
//class A2
//{
//public:
//    void print(){cout<<"A2:print"<<endl;}
//    void show(){cout<<"A2:show"<<endl;}
//};
//class B : public A1 , public A2
//{
//public:
//    void print(){cout<<"B print"<<endl;}
//};
//int main()
//{
//    B b;
//    b.print();
//   // b.show();//出错   具有二意性
//    b.A1::show();
//    b.A1::print();//被重载的也可以
//    return 0;
//}