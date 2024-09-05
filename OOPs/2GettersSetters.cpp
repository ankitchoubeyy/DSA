#include<iostream>
using namespace std;

// Class : A blueprint
class player{
    private:
    int score;
    int health;
    string name;

    // Setters
    public:
    void setScore(int s){
        score = s;
    }

    void setHealth(int h){
        health = h;
    }

    void setName(string n){
        name = n;
    }

    // Getters
    void getScore(){
        cout << score << endl;
    }

    void getHealth(){
        cout << health << endl;
    }

    void getName(){
        cout << name << endl;
    }
};

int main()
{
    player ankit;
    ankit.setScore(20);
    ankit.setName("HazardKing");
    ankit.setHealth(78);
    ankit.getScore();
    ankit.getHealth();
    ankit.getName();


    return 0;
}