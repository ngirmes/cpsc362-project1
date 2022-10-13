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
    
    void getbook(string x);
    
    
    // will search the file
    void searchfile();
    
    //search vector
    
    
private:
    string book;
    

};


#endif 
