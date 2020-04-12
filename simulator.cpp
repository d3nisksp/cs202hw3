#include "maxheap1.h"
#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

int main(int argc, char* argv[] ){
    ifstream inFile;

    maxheap1 h1;
/*
    patient p1(1,9,1,5);
    patient p2(14,3,70,10);
    patient p3(5,3,82,70);
    patient p4(12,3,71,30);
*/
 

    string s;
    if(argc > 1){
        s = argv[1];
        cout << s << endl;
    }
    
    
    string filename;
    cin >> filename;
    inFile.open(filename);

    string tp;
    bool start = true;
    
    int size = 0;//,id,priority,arrival,time = 0;
    while(getline(inFile, tp)){ //read data from file object and put it into string.
        if(start){
            stringstream sst(tp);
            sst >> size;
            start = false;
        }
        cout << tp << "\n"; //print the data of the string
        
    }
    cout << size<< endl;;
    inFile.close();
    
    
    /*
    h1.heapInsert(p1);
    h1.heapInsert(p2);
    h1.heapInsert(p3);
    h1.heapInsert(p4);
    
    h1.printHeap();
    
    h1.heapDelete(p1);
                                                                            
    cout << endl;
    h1.printHeap();
    */
    
    return 0;
}

