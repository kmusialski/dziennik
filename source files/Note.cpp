#include "Note.h"

void Note::addSubject(Subject sub)
{
	subjects.push_back(sub);
}

float Note::calculateAverageFromAllSubjects()
{
	float result = 0;
	for (list<Subject>::iterator i = subjects.begin(); i != subjects.end(); ++i) {
		
		result = result + i->countAverage(); 
		cout<<result; 
    }
    result = result/subjects.size();
    return result;
}

void Note::printAverage() {
    cout << "Srednia ocen"<<endl;
    
    cout <<calculateAverageFromAllSubjects()<< endl;;

}



