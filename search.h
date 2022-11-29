//
//  search.h
//  project632_2
//
//  Created by salman alsabah on 9/15/22.
//

#ifndef search_h
#define search_h

#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>


using namespace std;

class ssearch
{
public:
 vector<string> book_name;
    vector<string> authorr;
    vector<string> statuss;
    vector<string> genre;
    vector<string> protagonist;
    vector<string> theme;
    vector<string> category;
    vector<string> POV;
    
    void getname(string x);
    
    
    // will upload the information of the file to the vectors
    void upload_books();
    
    //will display all the file book
    void full_list();
    
    //will search depending of the word for example "Harry" will display all books that has harry in them.
    void word();
    
    //will search book by genre
    void genree();

private:
    string input;
    

};


#endif 
