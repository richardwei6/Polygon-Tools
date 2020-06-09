#include "testlib.h"

using namespace std;

int main(){
    registerValidation();
    
    inf.readLong(-1000000000*1LL, 1000000000*1LL);
    inf.readSpace();
    inf.readLong(-1000000000*1LL, 1000000000*1LL);
    inf.eoln();
    inf.readEof();

    return 0;
}
