#include <cmath>

#include "question2.h"


int minimum(int * val, const int & size) {
    int mini = val[0];
    int val_from_array;
    for (int i = 0; i < size; i++){
        val_from_array = val[i];
        if (val_from_array < mini) {
            mini = val_from_array;
        }
    }
    return mini;
}

int maximum(int * val, const int & size) {
    int maxi = val[0];
    int val_from_array;
    for (int i = 0; i < size; i++){
        val_from_array = val[i];
        if (val_from_array > maxi) {
            maxi = val_from_array;
        }
    }
    return maxi;
}
