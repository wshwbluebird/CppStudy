////
//// Created by Macbook Pro on 16/5/28.
////
//
//#include <iostream>
//using namespace std;
//class Person
//{
//public:
//    string name;
//    Person(string name1 , int age1 , string tel1)
//    {
//        age = age1;
//        name = name1;
//        tel = tel1;
//    }
//    string gettel()
//    {
//        return  tel;
//    }
//private:
//    string tel;
//protected:
//    int age;
//};
//
//class Student :public Person
//{
//public:
//    long numebrs;
//    Student(long number1, string speciality, int sorting,string name1 , int age1 , string tel1) :
//            Person(name1,age1,tel1)//继承类的构造函数 规定:建立一个派生类对象时 派生类构造函数 先调用基类的构造函数
//           //在执行本身的构造函数
//    {
//      numebrs = number1;
//      this->speciality = speciality;
//      this->sorting = sorting;
//    }
//    void disp()
//    {
//        cout<<name<<endl;
//        cout<<age<<endl;
//        cout<<gettel()<<endl;
//        cout<<numebrs<<endl;
//        cout<<speciality<<endl;
//        cout<<sorting<<endl;
//    }
//
//protected:
//    string speciality;
//private:
//    int sorting;
//
//};
//
//int main(){
//   // cout<<"hello wordl";
//    Student s (10001,"cpp",3,"name",23,"12323424");
//    s.disp();
//
//    return 0;
//}