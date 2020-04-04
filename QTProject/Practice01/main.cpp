#include <iostream>
#include "stdlib.h"

#include "Question1.h"
#include "question2.h"
#include "question3.h"
#include "question4.h"
#include "question5.h"


int main()
{
//    //---------------------------
//    // Question 1
//    //---------------------------
//    std::cout << "Question 1" << "\n";
//    double val_rad = 10;
//    double val_area = 0;
//    double val_circum = 0;
//    circle_area_circumference(val_rad, val_area, val_circum);
//    std::cout << "Value of radius : " << val_rad
//              << " Value computed for area : " << val_area
//              << " Value computed for circumference : " << val_circum << std::endl;
//    std::cout << "\n";

//    //---------------------------
//    // Question 2
//    //---------------------------
//    std::cout << "Question 2" << "\n";
//    int * data_array;
//    int size_table = 10;
//    int maxi_array = 0;
//    int mini_array = 0;
//    srand(time(0)); //use current time as seed for random generator
//    data_array = new int[size_table];

//    for(int i = 0; i < size_table; i++) {
//        data_array[i] = rand();
//        std::cout << data_array[i] << std::endl;
//    }

//    maxi_array = maximum(data_array, size_table);
//    mini_array = minimum(data_array, size_table);

//    std::cout << "Value of maximum : " << maxi_array
//              << " Value of minimum : " << mini_array << std::endl;
//    std::cout << "\n";
//    free(data_array);

//    //---------------------------
//    // Question 3
//    //---------------------------
//    std::cout << "Question 3" << "\n";
//    int rank = 10;
//    for (int i = 0; i < rank ; i++)
//        std::cout << "Index : " << i << "\t"
//                  << "value of fibonacci sequence : " << sequence_fibo(i) << std::endl;
//    std::cout << "\n";

//    //---------------------------
//    // Question 4
//    //---------------------------
//    std::cout << "Question 4" << "\n";
//    int rank = 9;
//    int end = 10;
//    int * res = new int[end+1];

//    generate_mul_table(end, rank, res);

//    for (int i = 0; i <= end ; i++) {
//        std::cout << i << "\t*\t" << rank << "\t=\t" << res[i] << std::endl;
//    }
//    std::cout << "\n";

//    free(res);

    //---------------------------
    // Question 5
    //---------------------------
    std::cout << "Question 5" << "\n";
    display_gate(AND);
    display_gate(OR);


    return 0;
}
