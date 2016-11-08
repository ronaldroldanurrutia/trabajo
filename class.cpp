#include<iostream>
#include<set>
#include <algorithm>
goo.gl/4nlPvS

using namespace std;

template <typename T>
class Point{
    private:
        T x;
        T y;
    public:
        Point(T _x,T _y){
            this->x=_x;
            this->y=_y;
        }
        T getx(){
            return this->x;
        }
        T gety(){
            return this->y;
        }

};

int main(){
    set<Point <int> >ins;

    ins.insert(Point<int> w(1,2));

}
