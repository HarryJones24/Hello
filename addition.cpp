//
//  main.cpp
//  code lab 1
//
//  Created by Harry Jones on 04/10/2024.
//

#include <iostream>

int main(){
    
    float num_1, num_2, result;
    
    std::cout << "enter number 1:" << std::flush;
    std::cin >> num_1;
    std::cout << "enter number 2:" << std::flush;
    std::cin >> num_2;
    
    result = num_1 + num_2;
    
    std::cout << "the result of the addition is " << result << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
    
}



