#include <cstdlib>
#include <iostream>
#include <cmath>
using namespace std;
main()
{
    double x[40010], v[40010], a[40010];
    double F, r, w, dt = 0.01; 
    cin>> x[0] >> v[0];
    cin>> F >> r >> w;
    a[0] = F;
    for(int i = 0; i < 40000; i++)
    {
        x[i+1] = x[i] + v[i] * dt;
        v[i+1] = v[i] + a[i] * dt;
        a[i+1] = -x[i] - r * v[i] + F * cos(w * i *dt);
        cout << i * dt << " ";
        cout << x[i] << endl;
    }
}
