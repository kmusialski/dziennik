#include "list"
#include "iostream"

#ifndef TEST2_SUBJECT_H
#define TEST2_SUBJECT_H

using namespace std;

class Subject {

private:
    list<int> marks;
    string name;
    int markQ;
public:
	float countAverage();
    void setMarks(list<int> newMarks);
    void setName(string newName);
    void printSubject();
    void setMarks();


};



#endif //TEST2_SUBJECT_H
