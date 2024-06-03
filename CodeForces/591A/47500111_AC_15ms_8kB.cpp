    #include <iostream>
    #include <iomanip>
    using namespace std;
     
    int main() {
        int l, p, q;
        cin >> l >> p >> q;
        double t = (double)l / (p + q);
        double dis = p * t;
        cout << fixed << setprecision(4) << dis;
        return 0;
    }