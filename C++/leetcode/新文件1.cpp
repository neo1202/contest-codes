
#include<iostream>
using namespace std;

struct map
{
       int x,y;
};

int main()
{

    map bat;
    map ball;

    cout << "請輸入球棒所在(X,Y)" << endl ;
    cin >> bat.x >> bat.y ;
    cout << "請輸入球所在(X,Y)" << endl ;
    cin >> ball.x >> ball.y ;
    cout << endl;
    
    bat = ball;

    cout << "球棒在(" << bat.x << ',' << bat.y << ")" << endl ;
    cout << "球在(" << ball.x << ',' << ball.y << ")" << endl ;
    cout << endl;

    return 0;
}

