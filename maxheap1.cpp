#include "maxheap1.h"
#include <iostream>
#include <vector>
using namespace std;

vector<patient> items(MAX_SIZE);

maxheap1::maxheap1() : size(0) {
    
}

bool maxheap1::heapIsEmpty() const {
    return (size == 0);
}

//ToDo update insert and rebuild to meet te criteria


bool maxheap1::heapInsert(const class patient& newItem){
    if(size >= MAX_SIZE){
        return false;
    }
    items[size] = newItem;
    int place = size;
    int parent = (place-1)/2;
    while((place > 0) && comparePatient(items[place],items[parent]) ){
        //swap child and parent
        patient temp = items[parent];
        items[parent] = items[place];
        items[place] = temp;
        
        place = parent;
        parent = (place -1 )/ 2;
        //update parent location
    }
    ++size;
    return true;
}

bool maxheap1::heapDelete(patient& rootItem){
    if(heapIsEmpty())
        return false;
    rootItem = items[0];
    items[0] = items[--size];

    heapRebuild(0);

    return true;
}

void maxheap1::heapRebuild(int root){
    int child = (2 * root) + 1;
    if(child < size){
        int rightChild = child + 1;
        
        if ( (rightChild < size) && (comparePatient(items[rightChild],items[child]) ) ){
            child = rightChild;
        }
        
        if(comparePatient(items[child],items[root]) ){
            patient temp = items[root];
            items[root] = items[child];
            items[child] = temp;
            // swap root and child
            
            heapRebuild(child);
        }
    }
}

void maxheap1::printHeap(){
    for(int i = 0; i < size; i++){
        cout << "id: " << items[i].idno<< " prio: " << items[i].prio <<  endl;
    }
}

bool maxheap1::comparePatient(patient p1, patient p2){
    if(p1.prio > p2.prio)
        return true;
    else if(p1.prio == p2.prio)
        return p1.at < p2.at;
    else
        return false;
}
