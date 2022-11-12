#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>
#include<array>
#include<stack>
#include<string>
#include<queue>
#include<map>
#include<set>
using namespace std;

class Prithu{
    private:
    int health;
    char level;
    int life;
    char *name;
    
    public:
    // using static keyword 
    static int time;
    // static functions
    // static functions can only access static  elements
    static int random(){
        return time;
    }

    Prithu(){
        name = new char[100];
        cout<<"simple constructor called"<<endl;
    }
    void getHealth(){
        cout<<health<<endl;
    }
    void setHealth(int health){
        this->health = health;
    }
    void getLevel(){
        cout<<level<<endl;
    }
    void setLevel(char level){
        this->level = level;
    }
    // void setName(char name[]){
    //     strcpy(this->name, name);
    // }
    /*
    void setHealth(int health){
        int pass;
        cin >>pass;
        if(pass == 12345){
            this->health = health;
        }
        else{
            cout<<"wrong passcode"<<endl;
        }
    }*/

    
    //================================
    //parameterized constructor  
    //================================
    Prithu(int health){
        cout<<"parameterized constructor - 1 called"<<endl;
        this->health = health;
    }
    Prithu(int health, char level){
        cout<<"parameterized constructor - 2 called"<<endl;
        this->health = health;
        this->level = level;
    }

    //================================
    //copy constructor  
    //================================
    Prithu(Prithu& temp){
        cout<<"copy constructor called"<<endl;
        this->health = temp.health;
        this->level = temp.level;
        this->life  = temp.life;
    }

    ~Prithu(){
        cout<<"destructor called"<<endl;
    }
   
};
int Prithu::time = 45;

int main()
{
    /*
    //=======================
    //static allocation   
    //=======================
    // Prithu prithu;
    // cout<<prithu.health<<endl;
    prithu.setHealth(7);
    prithu.getHealth();
    cout<<sizeof(prithu)<<endl;
    */
    //=======================
    //dynamic allocation   
    //=======================
    Prithu *prime = new Prithu(5, 'A');//parameterized 
    Prithu *pro = new Prithu(5, 'a');//parameterized
    Prithu *copy = new Prithu(*prime);
    // (*prime).setHealth(7);
    // (*prime).getHealth();
    //alternative way/////////////////
    // prime->setHealth(7);
    // prime->setLevel('B');
    prime->getHealth();
    prime->getLevel();
    cout<<sizeof(prime)<<endl;
    cout<<sizeof(*prime)<<endl;
    cout<<sizeof((*prime))<<endl;

    //destructor is automatically called for static allocation
    Prithu prithu;
    // destructor must be manually called for dynamic allocation
    delete prime;
    delete pro;
    delete copy;

    // accessing static 
    cout<<Prithu::time<<endl;
    cout<<Prithu::random()<<endl;

    return 0;
}