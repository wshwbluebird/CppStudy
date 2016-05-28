////
//// Created by Macbook Pro on 16/5/28.
////
//
//#include<iostream>
//using namespace std;
//class Test
//{
//private :
//    const int x;
//    const int y;
//public:
//    Test(int i,int j):x(i),y(j){}//常数据成员只能通过初始化列表 来获得初值   将i的值付给
//    void printxy();
//    void printxy() const;
////    {
////     cout<<x<<" "<<y<<endl;
////    }
//};
//void Test::printxy()
//{
//    cout<<x<<" "<<y<<endl;
//}
//void Test::printxy() const
//{
//    cout<<y<<" "<<x<<endl;
//}
//int main(){
//    Test a(1,2);
//    a.printxy();
//    const Test b(1,2);
//    b.printxy();
//    b.printxy();
//    return 0;
//}