#include "question4.h"

void generate_mul_table(const int & end, const int & rank, int * val_mul_table) {
    for (int i = 0; i <= end; i++) {
        val_mul_table[i] = i * rank;
    }
}
