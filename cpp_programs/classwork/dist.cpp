#include <iostream>
using namespace std;

class Distance {
private:
    int km, m;

public:
    void setDistance(int k, int meter) {
        km = k;
        m = meter;
    }

    void add(Distance d1, Distance d2) {
        km = d1.km + d2.km;
        m = d1.m + d2.m;

        if (m >= 1000) {
            km =km+ m / 1000;
            m = m % 1000;
        }
    }

    void display() {
        cout << km << " km " << m << " m\n";
    }
};

int main() {
    Distance d1, d2, d3;

    d1.setDistance(5, 800);
    d2.setDistance(3, 500);

    d3.add(d1, d2);
    d3.display();

    return 0;
}