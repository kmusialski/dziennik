#include "Note.h"
float result = 0;
void Note::addSubject(Subject sub)
{
	subjects.push_back(sub);
}

float Note::calculateAverageFromAllSubjects()
{
	
	for (list<Subject>::iterator i = subjects.begin(); i != subjects.end(); ++i) {
		
		result = result + i->countAverage(); 
    }
    result = result/subjects.size();
    return result;
}

void Note::printAverage() {
    cout << "Srednia ocen"<<endl;
    
    cout <<result; // tu byl b³ad bo wyrzuca³ wynik funkcji calculate 

}



