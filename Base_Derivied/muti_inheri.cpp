////
//// Created by Macbook Pro on 16/6/2.
////
//
//#include<iostream>
//using namespace std;
//class  A
//{
//public:
//    int a ;
//    A(int a1)
//    {
//        a=a1;
//        cout<<"执行A的构造函数"<<endl;
//
//    }
//};
//class B:public A
//{
//public:
//    int b;
//    B (int a1,int b1):A(a1)
//    {
//        b = b1;
//        cout<<"执行B的构造函数"<<endl;
//
//    }
//};
//class C :public B
//{
//public:
//    int c;
//    C(int a1,int b1,int c1):B(a1,b1) //是谁的子类 调用谁的构造函数    层层调用  最先调用最上面的构造函数
//    {
//        c=c1;
//        cout<<"执行C的构造函数"<<endl;
//    }
//};
//
//int main(){
//    C obj(1,2,3);
//    cout<<obj.a<<"  "<<obj.b<<"  "<<obj.c<<endl;
//    return 0;
//}