#include <iostream>
using namespace std;

class Player{
private:
    int age;
    int score;
    int health;
    bool alive;

public:
    // setters
    void setAge(int age)
    {
        this->age = age; // this keyword recognise the class automatically and prevents from same name of parameter and varibale.
    }
    void setHealth(int health)
    {
        this->health = health;
    }
    void setScore(int score)
    {
        this->score = score;
    }
    void setAlive(bool alive)
    {
        this->alive = alive;
    }

    // getters
    int getAge(){
        return age;
    }
    int getHealth(){
        return health;
    }
    int getScore(){
        return score;
    }
    bool getAlive(){
        return alive;
    }
};

// function to add scores of Player data type
int addScore(Player a, Player b){
    return a.getScore() + b.getScore();
}

int main(){

    // Object 1: ankit
    Player ankit;
    ankit.setAge(22);
    ankit.setHealth(100);
    ankit.setAlive(true);
    ankit.setScore(78);

    // Object 2: vishal
    Player vishal;
    vishal.setAge(18);
    vishal.setHealth(100);
    vishal.setAlive(true);
    vishal.setScore(75);

    cout << addScore(ankit, vishal);

    return 0;
}