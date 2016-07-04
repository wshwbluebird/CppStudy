////
//// Created by Macbook Pro on 16/6/2.
////
//
//#include <iostream>
//using namespace std;
//
//class A
//{
//public:
//    A(){ cout<<"执行A的构造方法"<<endl;}
//    ~A(){cout<<"执行A的析构函数"<<endl;}
//};
//
//class B
//{
//public:
//    B(){ cout<<"执行B的构造方法"<<endl;}
//    ~B(){cout<<"执行B的析构函数"<<endl;}
//};
//class C:public B
//{
//public:
//    A a;
//    C() {cout<<"执行C的构造方法"<<endl; }  //父类->内部类->自己
//    ~C() {cout<<"执行C的析够函数"<<endl; } //自己->内部类->父类
//};
//int main(){
//   C obj;
//    return 0;
//}