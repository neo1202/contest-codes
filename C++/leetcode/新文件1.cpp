
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

    cout << "�п�J�y�ΩҦb(X,Y)" << endl ;
    cin >> bat.x >> bat.y ;
    cout << "�п�J�y�Ҧb(X,Y)" << endl ;
    cin >> ball.x >> ball.y ;
    cout << endl;
    
    bat = ball;

    cout << "�y�Φb(" << bat.x << ',' << bat.y << ")" << endl ;
    cout << "�y�b(" << ball.x << ',' << ball.y << ")" << endl ;
    cout << endl;

    return 0;
}

