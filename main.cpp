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
    int k = 2;
    std::string inputFile = "example_input.txt";
    std::string outputFile = "result";
    convert_file(inputFile,outputFile); 
    std::string cmd = "./kway ";
    cmd+=outputFile + " ";
    cmd.append(std::to_string(k));
    system(cmd.c_str());
    cmd = "rm ";
    cmd.append(outputFile);
    system(cmd.c_str());
    return 0;
}
