#include <iostream>

#include "Subject.h"
#include "Note.h"
#include <map>

Subject createSubject(string name);// definicja funkcji
Note createNote(); // nic nie przekazuje wywoluje funkcje

using namespace std;

int main() {

Note dziennik = createNote();
dziennik.calculateAverageFromAllSubjects();
dziennik.printAverage();

}

Note createNote(){
	
	Note note;
	
	note.addSubject(createSubject("matematyka"));
	note.addSubject(createSubject("polski"));
	note.addSubject(createSubject("fizyka"));
	note.addSubject(createSubject("chemia"));
	
return note; 

}


Subject createSubject(string name) { // funkcja
    Subject result;  // stworzenie zmienne result typu subject (klasa)
    result.setName(name);// wywolanie na zmiennej funkcji set name.
	result.setMarks(); // wywolanie funkcji setMarks w której zadeklaruje oceny(marks) - w klasie subject
    result.countAverage(); // wywolanie funkcji countAverage do obliczenia sredniej
	return result; //zwrocenie zmiennej z funkcji createSubject
}


//	Subject matematyka = createSubject("matematyka");
//    Subject polski = createSubject("polski");
//    Subject fizyka = createSubject("fizyka");
//    Subject chemia = createSubject("chemia"); // tymczasowe
//	Note dziennik = createNote();

//
//	Note result;
//	result.addSubject(matematyka);
//	result.addSubject(polski);
//	result.addSubject(fizyka);
//	result.addSubject(chemia);
//	result.calculateAverageFromAllSubjects();
//	result.printAverage();
//	
//	matematyka.printSubject();
//    polski.printSubject();
//    fizyka.printSubject();
//    chemia.printSubject();
//	dziennik.printAverage();
