////
//// Created by Macbook Pro on 16/5/25.
////
////对数据进行抽象 和java 的数据抽象类似
////对学生类进行封装;
//
//#include <iostream>
//using namespace std;
////class  student
////{
////private://在 类的体内不能对成员变量 进行初始化
////    char* name;
////    int number;
////    char *sex;
////    int age;
////    float gradge;
////public://作为外部接口
////   void  study();
////   void  test();
////   void eat();
////
////};
//
//class clockc
//{
//private:
//    int hour;
//    int minute;
//    int second;
//public:
//    void setTime(int h=0 ,int m=0 ,int s=0); //需要在外部实现的类//可通过设置形式参数的值 设置 该函数的默认值;
//    void showTime();//成员函数
//
//};
//// 方法类型 类名 :: 方法名(参数){函数体}
//void clockc::setTime(int h, int m, int s) {
//    hour = h;
//    minute = m;
//    second = s ;
//}
//inline void clockc::showTime() {   //内联函数 : 适合很小的函数  用处目前还不清楚   在方法类型前 加inline
//    cout<<"hour:  "<<hour<<"   "
//        <<"minute:  "<<minute<<"   "
//        <<"second:  "<<second<<"   "<<endl;
//}
//
//
//
//int  main()
//
//{
//    clockc c;
//    cout<<"First Time set and output:"<<endl;
//    c.setTime();
//    c.showTime();
//    cout<<"Second Time set and output:"<<endl;
//    clockc * t;
//    t = &c;
//    t->setTime(1,2,3);
//    t->showTime();
//    cout<<"Second Time set and output:"<<endl;
//    (*t).setTime(2,3,4);
//    (*t).showTime();
//
//
//
//
//    return 0;
//}
