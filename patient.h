#ifndef patient_h
#define patient_h

class patient{
public:
    patient();
    patient(int idno, int prio, int at ,int te);
    int idno;
    int prio;
    int at; // arrival time
    int te; // time elapsed
};

#endif /* patient_h */
