
#include<iostream>
#include<vector>
#include<algorithm>
#include<time.h>
using namespace std;

struct My3Dpoint{
    double x, y, z;
};

//  < 
bool my_compare( const My3Dpoint &a, const My3Dpoint &b ){
    if( a.x != b.x )
        return a.x < b.x;
    if( a.y != b.y )
        return a.y < b.y;
    return a.z < b.z;
}

int main(){
    srand( time(NULL) );
    vector<My3Dpoint> my_vector;
    
    //[push]
    for( int i=0 ; i<10 ; i++ ){
        My3Dpoint p;
        p.x=rand()%5, p.y=rand()%5, p.z=rand()%5;
        my_vector.push_back(p);
    }
    
    sort( my_vector.begin(), my_vector.end(), my_compare );
    
    //[output]
    for( int i=0 ; i<my_vector.size() ; i++ ){
        cout << my_vector[i].x << " " << my_vector[i].y << " " << my_vector[i].z << endl;
    }
    
    return 0;
}

