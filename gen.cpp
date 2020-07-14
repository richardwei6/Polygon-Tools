
/*
 * Outputs random number between 1 and 10^6, inclusive.
 * To generate different values, call "igen.exe" with different parameters.
 * For example, "igen.exe 1" returns 504077, but "igen.exe 3" returns 808747.
 * 
 * It is typical behaviour of testlib generator to setup randseed by command line.
 */
#include "testlib.h"
#include <iostream>
#include <vector>
#define RNG rnd.setSeed(rnd.next(-1000000, 1000000))
#define ll long long

ll MAX = 0;

using namespace std;

string nestedString(int length, int nested) {
    string t = "";
    for (int i = 0; i < length; i++) {
        RNG;
        int type = rnd.next(1, 7);
        RNG;
        int k = rnd.next(1, 3);
        switch (type)
        {
        case 1:
            t += 'w';
            break;
        case 2:
            t += 'a';
            break;
        case 3:
            t += 's';
            break;
        case 4:
            t += 'd';
            break;
        case 5:
            t += 'z';
            break;
        case 6:
            t += 'x';
            break;
        case 7:
            if (nested > 0) {
                RNG;
                t += to_string(k) + "[";
                t += nestedString(k, nested-1);
                t += "]";
                nested--;
            }
            break;
        default:
            break;
        }
    }
    return t;
}

int main(int argc, char* argv[])
{
    registerGen(argc, argv, 1);

    ll m = atoll(argv[1]), n = atoll(argv[2]);
    MAX = atoll(argv[3]);
    
    string t = "";
    for (ll i = 0; i < m; i++) { // num of operations
        RNG;
        int type = rnd.next(1, 8);
        RNG;
        int k = rnd.next(1, 200);
        RNG;
        int p = rnd.next(0, 10);
        switch (type)
        {
        case 1:
            t += 'w';
            break;
        case 2:
            t += 'a';
            break;
        case 3:
            t += 's';
            break;
        case 4:
            t += 'd';
            break;
        case 5:
            t += 'z';
            break;
        case 6:
            t += 'x';
            break;
        case 7:
            RNG;
            t += to_string(p) + "[";
            t += nestedString(k, p);
            t += "]";
            break;
        case 8:
             t+="(";
            RNG;
            t+= to_string(rnd.next(-MAX, MAX))+",";
            RNG;
            t+= to_string(rnd.next(-MAX, MAX))+",";
            RNG;
            t+= to_string(rnd.next(-MAX, MAX))+")";
            i += 2;
            break;
        default:
            break;
        }
    }

    cout << t.size() << endl;
    cout << t << endl;

    cout << n << endl;

    for (ll i = 0; i < n; i++) {
        RNG;
        cout << rnd.next(-MAX, MAX) << " ";
        RNG;
        cout << rnd.next(-MAX, MAX) << " ";
        RNG;
        cout << rnd.next(-MAX, MAX) << endl;
    }

    return 0;
}

/**/
