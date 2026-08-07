#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;

int main(){

    // creation
    unordered_map<string , int> m;

    //insertion

    pair<string , int> p = make_pair("shahil" , 2);
    m.insert(p);
    pair<string , int> pair2("shah" , 3);
    m.insert(pair2);

    m["mera"] = 4;
    m["tera"] = 5;


    cout << m["mera"] << endl;
    cout<< m.at("shahil" ) << endl;
    cout << m.size() << endl;
    cout << m.count("shahil") << endl;
    // if its true they give 1 or if its false they give 0;


    cout << m.erase("shah") << endl;;
    cout << m.size() << endl;       
    
for (auto it = m.begin(); it != m.end(); it++) {
    cout << it->first << " " << it->second << endl;
}
    return 0;
}
