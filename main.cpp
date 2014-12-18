//
//  main.cpp
//  graph_partition
//
//  Created by Yilin He on 12/3/14.
//  Copyright (c) 2014 Yilin He. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "convert_input.h"

int main(int argc, const char * argv[]) {
    // insert code here...
    std::string inputFile = "example_input.txt";
    std::string outputFile = "result";
    int k = 2;
    std::cout << "input file is: " << inputFile << " output file is: " << outputFile  << std::endl;
    convert_file(inputFile,outputFile); 
    std::string cmd = "./kway ";
    cmd+=outputFile + " ";
    std::cout << cmd <<std::endl;
    cmd.append(std::to_string(k));
    std::cout << cmd <<std::endl;
    system(cmd.c_str());
    return 0;
}
