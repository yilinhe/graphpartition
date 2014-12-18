//
//  convert_input.cpp
//  graph_partition
//
//  Created by Yilin He on 12/3/14.
//  Copyright (c) 2014 Yilin He. All rights reserved.
//

#include "convert_input.h"

using namespace std;

void convert_file(string inputFile, string outputFile){
    
    ifstream infile(inputFile.c_str());
    
    map <int, string> node_list;
    string line;
    int u,v,w;
    int num_edges = 0;
    std::ostringstream s;

    
    if(!infile) {
        cout << "Cannot open input file.\n";
    }
    
    while (getline(infile, line)){
        istringstream iss(line);
        if (!(iss >> u >> v >> w)) { break; } // error
        
        //append correct value to map;
        s.str("");
        s.clear();
        s << v << " " << w;

        if ( node_list.find(u) == node_list.end() ) {
            node_list.insert(std::pair<int, string>(u,s.str()));
        } else {
            node_list[u].append(" ").append(s.str());
        }
        
        s.str("");
        s.clear();
        s << u << " " << w;
        if ( node_list.find(v) == node_list.end() ) {
            node_list.insert(std::pair<int, string>(v,s.str()));
        } else {
            node_list[v].append(" ").append(s.str());
        }
        num_edges++;
    }
    
    infile.close();
    ofstream myfile;
    myfile.open(outputFile.c_str());
    myfile << node_list.size() << " "<< num_edges << " 001" "\n";
    for( map<int,string>::iterator ii=node_list.begin(); ii!=node_list.end(); ++ii){
        myfile << (*ii).second << "\n";
    }

    myfile.close();
}


