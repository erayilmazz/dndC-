#include <string>
using std::string;

class Character{
public:
    Character(string);
    void setName(string);
    string getName();
    void chooseClass(string);
    string getClass();
    //void chooseStats();
    //void getStats();
private:
    string characterName;
    string chosenClass;
    //int stats;
};

