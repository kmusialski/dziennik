//
// Created by Piotr on 2015-11-28.
//

#include "Utils.h"
#include "iostream"
#include "sstream"
#include <stdlib.h>
using namespace std;


//
// Created by Piotr on 2015-11-28.
//
 
#include "Utils.h"
#include "iostream"
#include "sstream"
#include <stdlib.h>
#include <limits>
using namespace std;
 
bool isNumber(string str);
bool Validation(int result);
int cinInt() { // funkcja sprawdzenia poprwanosci strumienia
 
    while(true) {
 
    int result;
     cin>>result;
 
                               //isNumber
      if (bool bCyfry = cin.good()) {
                                              
       if (Validation(result))
           {
               return result;
            }
              else {
               continue;
                    }
          }
                else {
                     cin.clear();
            cout<<"wymagana liczba naturalna, w przedziale 1-5 "<<endl;
                        cin.ignore( numeric_limits < streamsize >::max(), '\n' );
             continue;
             }
 
}
 
}
bool Validation(int result) {
 
                if(result <6 && result >0 ) {
                               return true;
                } else {
                               cin.clear();
                               cout<<"wymagana liczba naturalna, w przedziale 1-5 "<<endl;
                               cin.ignore( numeric_limits < streamsize >::max(), '\n' );
                               return false;
                }
                return 0;
}
 
 
 
 
 
//    string x;
//    cin >> x;
//
//    while(!isNumber(x)){
//        cout << "Podaj jeszcze raz:";
//        cin >> x;
//    }
//
//    int result;
//    istringstream iss(x);
//    iss >> result;
//    return result;
 
//
//bool isNumber(string str){
//    for (int i = 0; i < str.length(); ++i) {
//        if(!isdigit(str[i])){
//            return false;
//        }
//    }
//    return true;
//}
//bool isNumber(string str);
//
//int cinInt(){ // funkcja sprawdzenia poprwanosci strumienia
//
//    string x;
//    cin >> x;
//
//    while(!isNumber(x)){
//        cout << "Podaj jeszcze raz:";
//        cin >> x;
//    }
//
//    int result;
//    istringstream iss(x);
//    iss >> result;
//    return result;
//
//}
//
//
//bool isNumber(string str){
//    for (int i = 0; i < str.length(); ++i) {
//        if(!isdigit(str[i])){
//            return false;
//        }
//    }
//    return true;
//}
