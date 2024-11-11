#include<iostream>
using namespace std;

class Polygon{
    protected:
        int width,height;
    public:
        void set_value(int w , int h){
            width = w;
            height = h;
        }

        virtual double area() const = 0;
};

class rectangle : public Polygon{
    public:
        double area() const override{
            return width*height;
        }
};

class triangle : public Polygon{
    double area() const override{
        return 0.5*width*height;
    }
};

int main(){
    rectangle rect;
    triangle tri;

    Polygon* poly1 = &rect;
    Polygon* poly2 = &tri;

    poly1->set_value(10,20);
    poly2->set_value(16,12);

    cout<<poly1->area()<<endl;
    cout<<poly2->area()<<endl;

    return 0;
}