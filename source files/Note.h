#include "list"
#include "iostream"
#include "Subject.h"

#ifndef TEST2_NOTE_H
#define TEST2_NOTE_H

using namespace std;

class Note {

private:
list<Subject> subjects;

public:
	void addSubject(Subject sub);
	float calculateAverageFromAllSubjects();
	void printAverage();

};



#endif //TEST2_NOTE_H
