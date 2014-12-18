//
//  main.cpp
//  graph_partition
//
//  Created by Yilin He on 12/3/14.
//  Copyright (c) 2014 Yilin He. All rights reserved.
//

#include <iostream>
#include <fstream>
#include "convert_input.h"

int main(int argc, const char * argv[]) {
    // insert code here...
    std::string hw= "hi";
    hw.append(" ").append("world");
    std::cout << hw << std::endl;
    
    convert_file("/Users/yilinhe/IdeaProjects/research/graph_partition/graph_partition/testdata.txt");
    return 0;
}
