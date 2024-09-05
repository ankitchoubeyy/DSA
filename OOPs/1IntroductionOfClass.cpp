#include<iostream>
using namespace std;

// Class : A blueprint
class player{
    private:
    int score;
    int health;
    string name;

    // Setters and Getters
    void setScore(int s){
        score = s;
    }

    void getScore(){
        cout << score;
    }

    public:
    void currentHealth(){
        cout << "Your current health is:" << health << endl;
    }
};

int main()
{
    // object 1 
    player ankit; // Here ankit is an object which represent the real entity.
    ankit.score = 10;
    ankit.health = 60;
    ankit.name = "HazardKing";

    cout << ankit.name << endl;
    cout << ankit.score << endl;
    cout << ankit.health << endl;
    ankit.currentHealth();

    // object 2 
    player Rohan;
    Rohan.health = 100;
    Rohan.name = "RomanKing";

    cout << "Rohan" << endl;
    cout << Rohan.name << endl;
    cout << Rohan.health << endl;



    return 0;
}