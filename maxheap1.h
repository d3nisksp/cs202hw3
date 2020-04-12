#ifndef maxheap1_h
#define maxheap1_h

#include "patient.h"


const int MAX_SIZE = 2000;

class maxheap1{

public:
    maxheap1();
    bool heapIsEmpty() const;
    bool comparePatient(patient p1, patient p2);
    bool heapInsert(const patient& newItem);
    bool heapDelete(patient& rootItem);
    
    void printHeap();
    
protected:
    void heapRebuild(int root);

private:
    int size;
};

#endif /* maxheap1_h */
