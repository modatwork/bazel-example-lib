#include "foo.h"
#include "internal.h"

int add(int a, int b){
    AddImpl addImpl;
    return addImpl.add(a, b);
}
