/* 
 * File:   main.cpp
 * Author: grabusr
 *
 * Created on 29 sierpnia 2015, 14:52
 */

using namespace std;

#include <iostream>
#include <string>

enum sex // wlasny typ enum
{
    FEMALE = 1,
    MALE = 2,
};

int bmr( int age, int weight, int height, sex s );

int askAndGetValue( string text );

int getWeight( );
int getAge( );
int getHeight( );
sex getSex( ); // typ enum

int main( int argc, char** argv )
{
    auto b = bmr( getAge( ), getWeight( ), getHeight( ), getSex( ) );
    cout << "Twoje BMR wynosi " << b << endl;
    return 0;
}

int getAge( )
{
    return askAndGetValue( "Podaj swój wiek" );
}

int getWeight( )
{
    return askAndGetValue( "Podaj swoją wagę" );
}

int getHeight( )
{
    return askAndGetValue( "Podaj swój wzrost" );
}

sex getSex( )
{
    char sex;
    do
    {
        cout << "Podaj płeć k - kobieta, m - mężczyzna" << endl;
        cin >> sex;
    }
    while ( 'k' != sex && 'm' != sex );

    /* to samo co tenary operator - true/false ? wartosc gdy true : wartosc gdy false
    if( 'k' == sex )
    {
        return FEMALE;
    }
    else
    {
        return MALE;
    }
     */

    return 'k' == sex ? FEMALE : MALE;
}

int bmr( int age, int weight, int height, sex s )
{
    auto value = 9.99f * weight + 6.25f * height - 4.92f * age;    
    return value + ( FEMALE == s ? -161 : 5);
}

int askAndGetValue( string text )
{
    cout << text << endl;
    int value;
    cin >> value;
    return value;
}
