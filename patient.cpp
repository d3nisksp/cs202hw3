//
//  patient.cpp
//  cs202hw3
//
//  Created by arzu on 10.04.2020.
//  Copyright © 2020 arzu. All rights reserved.
//

#include "patient.h"
patient::patient(){
    this->idno = 0;
    this->prio = 0;
    this->at = 0;
    this->te = 0;

}
patient::patient(int idno, int prio,int at, int te):idno(0),prio(0),at(0),te(){
    this->idno = idno;
    this->prio = prio;
    this->at = at;
    this->te = te;
}

