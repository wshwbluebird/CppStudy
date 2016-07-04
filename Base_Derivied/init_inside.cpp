////
//// Created by Macbook Pro on 16/6/2.
////
//
//#include <iostream>
//#include <string>
//using namespace std;
//
//class A{
//public:
//    int  a;
//    A(int a1){
//        a=a1;
//        cout<<"执行类A的构造函数"<<endl;
////    }
//};
//class B{
//public:
//    int b;
//    B (int b1){
//        b=b1;
//        cout<<"执行类B的构造函数"<<endl;
//    }
//};
//class C : public B //先执行派生父类的构造法  再执行  潜入类的构造方法 最后完成自己的构造方法
//{
//public:
//    int c;
//    A obj_a;
//    C(int a1,int b1,int c1):obj_a(a1),B(b1)  //  先完成父类  再完成内嵌类
//    {
//        c =c1;
//        cout<<"执行类C的构造函数"<<endl;
//    }
//};
//int main(){
//    C obj(1,2,3);
//        cout<<obj.obj_a.a<<" "<<obj.b<<" "<<obj.c<<endl;
//
//      return 0;
//}