#include <iostream>
#include <fstream>
#include <assert.h>
using namespace std;

class union_find{
    public:
    string self_relation;
    union_find(){}
    union_find(string self_relation){
        string relation;
        relation = self_relation; 
    }

    bool find(string relation){
        string line;
        ifstream fin;

        fin.open("graph.txt");

        while (!fin.eof()){
            getline(fin, line);
            if (relation == line){
                fin.close();
                return true;
            } else{
                fin.close();
                return false;
            }
        }
    }
};

int main(){
    union_find find_relation;
    string relation;
    cout << "Enter the nodes in the relation separated by commas: " << endl;
    cin >> relation;
    if(find_relation.find(relation)){
        cout<<"The relation exists."<<endl;
    } else {
        cout << "The relation doesnot exist." << endl;
    }

    return 0;
}