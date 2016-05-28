////
//// Created by Macbook Pro on 16/5/28.
////
//
//#include <iostream>
//using namespace std;
//
//class Person
//{
//public:
//    string name;
//protected:
//    int age;
//private:
//    string tel;
//};
//class Student : public Person //private 不常见  只能传递一代  将所有 可以访问的基类元素 都变味私有
// 私有不可访问 基类的私有成员依然不可访问
// 对于 protected 可访问成员  在内部成员间可以访问  但是对象不可访问
//{
//public:
//    long numebr;
//    void disp()
//    {
//        cout<<name<<endl;
//        cout<<age<<endl;
//        //cout<<tel<<endl;  //私有变量 内部成员不能访问
//        cout<<numebr<<endl;
//        cout<<speciality<<endl;
//        cout<<sorting<<endl;
//    }
//
//protected:
//    string speciality;
//private:
//    int sorting;
//};
//int main()
//{
//    Student s;
//    s.name = "abc";
//    //s.age = 20; //不能对象访问 保护
//    // s.tel  不能访问 因为保护
//    s.numebr=2313;
//    s.disp();
//
//}