////
//// Created by Macbook Pro on 16/5/25.
////
////构造函数 是一个 和类同名的成员函数 没有返回类型  共有函数  如果没有构造函数  系统会自动生成
//#include <iostream>
//using namespace std;
//class clockc
//{
//private:
//    int hour;
//    int minute;
//    int second;
//public:
//   clockc(int h =0,int m=0,int s=0)
//   {
//        hour = h;
//        minute = m;
//        second = s ;
//    }
//    clockc(clockc &c);//复制构造函数
//    ~clockc()
//    {
//        cout<<"delete called"<<endl;//在程序结束后,才析够
//    }
//    void showTime();
//
//};
//// 方法类型 类名 :: 方法名(参数){函数体}
//clockc::clockc(clockc &c)
//{
//    hour = c.hour;
//    minute = c.minute;
//    second = c.second+10;
//    cout<<"copy called"<<endl;
//}
//inline void clockc::showTime()
//{   //内联函数 : 适合很小的函数  用处目前还不清楚   在方法类型前 加inline
//    cout<<"hour:  "<<hour<<"   "
//        <<"minute:  "<<minute<<"   "
//        <<"second:  "<<second<<"   "<<endl;
//}
//
//clockc g(){
//    clockc a(1,3,5);
//    return a;// 不调用复制构造桉树
//}
//int main()
//{
//    clockc clockc1;  //有参数 用参数 ,没有参数 用默认的参数
//    clockc1.showTime();
////    clockc clockc2(2);
////    clockc2.showTime();
////    clockc clockc3(1,2);
////    clockc3.showTime();
////    clockc clockc4(1,24);
////    clockc4.showTime();
//    clockc clockc2(clockc1);//调用 复制构造函数 传递值
//    clockc2.showTime();
//    //clockc clockc3 = clockc1; //传递引用   效率高
//    clockc b ;
//    b = g();
//    b.showTime();
//
//    cout<<"exit 0"<<endl;
//    return 0;
//}