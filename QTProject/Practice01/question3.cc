#include "question3.h"


int sequence_fibo(const int & rank) {
    if (rank == 0) return 0;
    else if (rank == 1) return 1;
    else return sequence_fibo(rank - 1) + sequence_fibo(rank - 2);
}
