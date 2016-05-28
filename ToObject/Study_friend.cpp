////
//// Created by Macbook Pro on 16/5/28.
////
//
//#include <iostream>
//using namespace std;
//
//
//class A
//{
//public :
//    friend class B;
//    void display()
//    {
//        cout<<x<<endl;
//    }
//    int getX()
//    {
//        return x;
//    }
//private:
//    int x;
//};
//class B
//{
//public :
//    B(int i){a.x = i;}
//    void display(){cout<<a.x<<endl;}
//private:
//    A a;
//};
//
//int main(){
//    B b(10);
//    b.display();
//    return 0;
//}