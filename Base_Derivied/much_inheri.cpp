////
//// Created by Macbook Pro on 16/6/5.
////多集成
//
//#include <iostream>
//using namespace std;
//class bed
//{
//public:
//    void sleep(){cout<<"lying in the bed"<<endl;}
//};
//class sofa
//{
//protected:   //子类可以内部访问   但是对象不能直接访问
//    void watchTV(){cout<<"watching TV"<<endl;}
//};
//class sofabed:protected bed,protected sofa
//{
//public:
//    void foldout(){}
//    void show(){
//        sleep();
//        watchTV();
//    }
//};
//int main()
//{
//    sofabed abc ;
//    abc.show();
//    return  0;
//}
//
