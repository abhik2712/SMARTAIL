
#include <iostream>
#include <map>
#include <set>
#include <iterator>
#include <string>
#include <iomanip>
#include <sstream>
#include <fstream>
#include <vector>

using namespace std;

#ifndef SEARCHENGINE_SEARCHENGINE_H
#define SEARCHENGINE_SEARCHENGINE_H


class SearchEngine {


public:
    /*
     * Declaring variables and Attributes
     */
    std::map<std::string, int> words;
    std::string line;
    std::string word;
    std::string cleaned_word ;

    std::string user_input;
    vector <string> FilePath;
    string Tem = "/Users/abhiknaskar/Desktop/File Crawler/";
    map <int, map<string, int> > P;

public:
    /*
     * Constructor and Destructor
     */
    SearchEngine();

    ~SearchEngine();

public:
    void startCrawler(std::string path);
    string clean_word(std::string word);
    void search(std::string user_input);
};




#endif //SEARCHENGINE_SEARCHENGINE_H
