#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <stdio.h>
#include <sstream>
#include "search.h"

using namespace std;


    //this will get book name from main.cpp
  void   ssearch::getname(string x){
        input = x;
    }

void ssearch::full_list(){
    
    for (size_t i = 1; i <= book_name.size(); i++){
        
        cout <<"Name of book: " << book_name[i] << endl;
        cout <<"Author: " <<authorr[i] << endl;
        cout <<"Status: " <<statuss[i] << endl << endl;
        
        
    }
}

void ssearch::upload_books(){
    
    string word;
    string line;
    string name;
    
    
    //declaring file name
    ifstream myfile ("library.csv");
    
    //test if file is open
    if (myfile.is_open()) {
        cout << "" << endl;
    }
    
    else {
        cout << "NO FILE HAS BEEN OPENED" << endl;
    }
    
    while (!myfile.eof()) {
        
        //BOOK,Author,Status,genre,protagonist,theme,category,POV the orgnaization pattern
        
        
        
        // will store the book name in vector
        getline (myfile,line,',');
        book_name.push_back(line);
        
        // will store the author name in vector
        getline (myfile,line,',');
        authorr.push_back(line);
        
        
        // will get the status of the book
        getline (myfile,line,',');
        statuss.push_back(line);
        
        // will get the genre of the book
        getline (myfile,line,',');
        genre.push_back(line);
        
        // will get the protagonist of the book
        getline (myfile,line,',');
        protagonist.push_back(line);
        
        // will get the theme of the book
        getline (myfile,line,',');
        theme.push_back(line);
        
        // will get the category of the book
        getline (myfile,line,',');
        category.push_back(line);
        
        // will get the POV of the book
        getline (myfile,line,',');
        POV.push_back(line);
        
    }
    
    
    myfile.close();
    
    
}
    
void ssearch::word() {
    
    
    for (size_t i = 0; i <= book_name.size(); i++){
        
           string word;
        
            word = book_name[i];
            istringstream iss(word);

            while(iss >> word) {
                if(word == input){
                    cout <<"Name of book: " << book_name[i] << endl;
                    cout <<"Author: " <<authorr[i] << endl;
                    cout <<"Status: " <<statuss[i] << endl << endl;
                }
        
                
            
        
            
        }
        
    }
    
}


    
    
void ssearch::genree() {
    
    for (size_t i = 0; i <= book_name.size(); i++){
        
           string word;
        
            word = genre[i];
            istringstream iss(word);

            while(iss >> word) {
                if(word == input){
                    cout <<"Name of book: " << book_name[i] << endl;
                    cout <<"Author: " <<authorr[i] << endl;
                    cout <<"Status: " <<statuss[i] << endl << endl;
                }
        
                
            
        
            
        }
        
    }
    
}
