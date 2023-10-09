//
// Fizz Buzz implementation.
//
#include <iostream>
#include <string>
#include "FizzBuzz.h"

void fizzBuzz(int range, int end_number, int buzz_number, int fizz_number){
    /*
    std::cout << "Starting Fizz Buzz:\n";
    //1a
    std::cout << "1a:\n";
    for(int i=0;i<100;i++){
        std::cout << i+1 << std::endl;
    }
    //1b
    std::cout << "1b:\n";
    for(int i=0;i<100;i++){
        if((i+1) % 3 == 0){
            std::cout << "FIZZ\n";
        }
        else{
            std::cout << i+1 << std::endl;
        }
    }
    //1c
    std::cout << "1c:\n";
    for(int i=0;i<100;i++){
        if((i+1) % 5 == 0){
            std::cout << "BUZZ\n";
        }
        else{
            std::cout << i+1 << std::endl;
        }
    }
    //1d
    std::cout << "1d:\n";
    for(int i=0;i<100;i++){
        if((i+1) % 5 == 0){
            if((i+1) % 3 == 0) {
                std::cout << "FIZZ BUZZ\n";
            }
            else{
                std::cout << "BUZZ\n";
            }
        }
        else if((i+1) % 3 == 0){
            std::cout << "FIZZ\n";
        }
        else{
            std::cout << i+1 << std::endl;
        }
    }
    */
    //2
    std::cout << "2:\n";
    for(int i=0;i<end_number;i+=range) {
        if ((i + 1) % buzz_number == 0) {
            if ((i + 1) % fizz_number == 0) {
                std::cout << "FIZZBUZZ, ";
            } else {
                std::cout << "BUZZ, ";
            }
        } else if ((i + 1) % fizz_number == 0) {
            std::cout << "FIZZ, ";
        } else {
            std::cout << i + 1 <<", ";
        }
    }
    std::cout << "\n";
}