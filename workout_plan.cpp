#include <iostream>
#include <vector>
#include <cstdlib>
#include <string>
using namespace std;

class Move{
    private:
        vector<string> core;
        int a;
    public:

        Move() : a(0) {}

        Move(int size) : a(0)
            {core.resize(size);}

        void insert(string ex)
            {core[a++]=ex;} 
      

        bool remove(string ex){
            //LINEAR SEARCH
            int i;
            for(i=0;i<a;i++){
                if(ex==core[i])
                    break;}
                  
            if(i==a)
                {return false;} 
                //CAN'T FIND EXERCISE

            else{
                //DELETION 
                for(int j=i;j<a;j++){
                    {core[i]=core[i+1];}
                    a--; 
                }
                return true;
            }
        }

        void display(){
            for(int i=0;i<a;i++)
                {cout<<(i+1)<<"."<<core[i]<<", ";}
            cout<<endl;
            cout<<endl;
        }
        void pick(){
            srand(time(0));
            int index;
            index=0 + rand()%a;
            cout<<core[index]<<endl<<endl; 
        }
       
};

int main(){
    int n=10;
    Move Hang(n);
    Hang.insert("Knee Tucks");
    Hang.insert("Leg Raise");
    Hang.insert("One ArmHang");
    Hang.insert("Cycle");

    Move Core1(n);
    Core1.insert("Plank");
    Core1.insert("High Low");
    Core1.insert("Shoulder Tap");
    Core1.insert("Plank Jacks");

    Move Core2(n);
    Core2.insert("In and Out");
    Core2.insert("Reverse Crunch");
    Core2.insert("Leg Raise");

    Move Obliques(n);
    Obliques.insert("Russian Twist");
    Obliques.insert("Side Plank");
    Obliques.insert("Side Raise");

    Move Core3(n);
    Core3.insert("Crunch");
    Core3.insert("Toe Touch");
    Core3.insert("Reach Up");

    Move Jump(n);
    Jump.insert("Sqaut Jump");
    Jump.insert("Box Jump");
    Jump.insert("Lunge Jump");

    Move Strength(n);
    Strength.insert("Clean");
    Strength.insert("Thruster");

    Move Strength2(n);
    Strength2.insert("Overhead Squat");
    Strength2.insert("Snatch");
    Strength2.insert("Plate snatch to Alternating Reverse Lunge ");

    Move Strength3(n);
    Strength3.insert("Squat Reach");

    Move Strength4(n);
    Strength4.insert("Barbell Rows");

    Move Lunge(n);
    Lunge.insert("Squat Walk");
    Lunge.insert("Overhead Lunge");
    Lunge.insert("Step Up");
    Lunge.insert("StepUp barbell");

    int t;
    cout<<"Enter the chosen time of workout in minutes (45 min or 20 min) :"<<endl;
    cin>>t;
    switch (t){
        case 45:
        
    cout<<"1.  "; Hang.pick();
    cout<<"2.  "; Jump.pick();
    cout<<"3.  "; Core3.pick();
    cout<<"4.  "; Core2.pick();
    cout<<"5.  "; Strength2.pick();
    cout<<"6.  "; Core1.pick();
    cout<<"9.  "; Strength4.pick();
    cout<<"7.  "; Strength.pick();
    cout<<"8.  "; Obliques.pick();
    cout<<"10. "; Strength3.pick();
    cout<<"11. "; Lunge.pick();
    break;
        case 20:
    cout<<"1.  "; Jump.pick();
    cout<<"2.  "; Strength2.pick();
    cout<<"3.  "; Core2.pick();
    cout<<"4.  "; Strength.pick();
    cout<<"5.  "; Core3.pick();
    break;
        default:
    cout<<"Adjust!";
    
    cout<<endl;
    return 0;
    }
}