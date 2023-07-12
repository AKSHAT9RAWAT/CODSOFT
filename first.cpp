#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
   srand((unsigned int)time(NULL));

   int num = (rand() % 100) +1;

   int guess = 0;

   do 
   {
    cout << "Lets's see if you can guess the number or not!!\n ";
    cin>> guess;

    if(guess > num ){
        cout<< "PLEASE TRY A SMALLER NUMBER"<< '\n';
    }else if(guess <num){
         cout<< "PLEASE TRY A HIGHER NUMBER"<< '\n';
    }else{
        cout<< "CONGRATULATION YOU GUESSED IT RIGHT!"<<'\n';
    }
       
    
   }while (guess != num);

    return 0;
}