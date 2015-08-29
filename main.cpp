/* 
 * File:   main.cpp
 * Author: grabusr
 *
 * Created on 29 sierpnia 2015, 14:52
 */

using namespace std;

enum sex // wlasny typ enum
{
    FEMALE = 1,        
    MALE = 2,
};
    


int bmr( int age, int weight, int height, sex s );

int getWeight();
int getAge();
int getHeight();
sex getSex(); // typ enum


int main( int argc, char** argv )
{

    return 0;
}

