//
// Created by Piotr on 2015-11-28.
//
#include "Subject.h"
#include "Utils.h"
#include <limits>

bool checkmarkQ(int markQ);

void Subject::setMarks(list<int> newMarks){
    marks = newMarks;
};

void Subject::setName(string newName) {
    name = newName;
}

void Subject::printSubject() {
    cout << "Nazwa przedmiotu " << name <<endl;
    cout << "Oceny i srednia"<<endl;
    for (list<int>::iterator i = marks.begin(); i != marks.end(); ++i) {
        cout << *i << " ";
    }
    countAverage();
    cout <<countAverage()<< endl;;

}

float Subject::countAverage(){
	float average = 0;
	
	for (list<int>::iterator i = marks.begin(); i != marks.end(); ++i) {
       average =( average + *i);
    }
    average = average/markQ;
    return average;
}


void Subject::setMarks() {
    int mark; // deklaracja oceny
	while(true) {
		
	cout<<"Ile ocen wpiszesz dla "<<name<<" :";
	cin>>markQ;	
	if (checkmarkQ(markQ))
	{
		    cout << "Podaj oceny: dla przedmiotu "<< name << ":"<<endl;
    		for (int i = 0; i < markQ; ++i) {
       		 mark = cinInt();
      	  marks.push_back(mark);// dodawnie elementow listy
      	  }
    break;
	}
    else
    {
    	continue;
	}
	}
}

bool checkmarkQ(int markQ)
{
	if (bool bCyfry = cin.good()) {
		return true;
}
else
{
	cin.clear();
	cin.ignore( numeric_limits < streamsize >::max(), '\n' );
    return false;
}
		
		
}

