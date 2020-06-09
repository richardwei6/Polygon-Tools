/**
 * Validates that input contains the only integer between 1 and 100, inclusive.
 * Also validates that file ends with EOLN and EOF.
 */

#include "testlib.h"

using namespace std;

int main()
{
    registerValidation();
    
    inf.readLong(-1000000000, 1000000000);
    inf.readEoln();
    inf.readEof();

    return 0;
}
