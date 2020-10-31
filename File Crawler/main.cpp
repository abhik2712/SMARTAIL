#include <iostream>
#include <map>
#include <set>
#include <iterator>
#include <string>
#include <iomanip>
#include <sstream>
#include <fstream>
#include <vector>
#include "SearchEngine.h"

using namespace std;
int main()
{
    SearchEngine G00gle;
    string start = "/Users/abhiknaskar/Desktop/File Crawler/urls.txt";
    G00gle.startCrawler(start);

    string sterm = "";

    while (sterm!= "q" || sterm !="Q")
    {

        cout << "Enter the Search Word" << endl;
        cin >> sterm;
        if (sterm == "Q")
        {
            break;
        }else if(sterm == "q")
        {
            break;
        }
        G00gle.search(sterm);
    }

    return 0;
}
