#include <iostream>
#include <algorithm>
#include <vector>
#include <iomanip>

using namespace std;

class Coins {
public:
    double m;
    double v;
    double rate;
    Coins(double m, double v, double rate) : m(m), v(v), rate(rate) {}
};

bool cmp(const Coins& a, const Coins& b) {
    if (a.rate != b.rate) {
        return a.rate > b.rate;
    }
    return a.m < b.m;
}

int main() {
    double n, t;
    cin >> n >> t;

    vector<Coins> a;
    for (int i = 0; i < n; i++) {
        double m, v;
        cin >> m >> v;
        double rate = v / m;
        Coins coin(m, v, rate);
        a.push_back(coin);
    }

    sort(a.begin(), a.end(), cmp);

    double T = 0;
    double sum = 0;
    for (int i = 0; i < n; i++) {
        if (T + a[i].m <= t) {
            T += a[i].m;
            sum += a[i].v;
        } else {
            double remaining = t - T;
            sum += remaining * a[i].rate;
            break;
        }
    }

    cout << fixed << setprecision(2) << sum << endl;

    return 0;
}