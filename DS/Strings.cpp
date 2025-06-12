#include<iostream>

using namespace std;
int main(){

string name = "Tanjim ";
string lname = "Ahmed";

//************************************Functions*****************************************

//string concatination
//string fname = name + lname;
//concating string with append function
string fname = name.append(lname);
cout<<fname<<"\n";

//getting the first character of a string with at function
cout<<fname.at(0)<<"\n";

//getting the length of a string by length function
cout<<fname.length()<<"\n";

//checks the stringis empty or not by empty function
cout<<fname.empty()<<"\n";

//getting the maximum length the string can reach by max_size function
cout<<fname.max_size()<<"\n";

//getting the part of a string by substr function
cout<<fname.substr(2,6)<<"\n";  //getting the part of string from index 2 to 6

//Returns the index of the first occurrence of a string or character by find function
cout<<fname.find("j")<<"\n";  //checking if j is presented on the string. If present then it will return the index of j

//replcae a part of string with another string by replace function
cout<<fname.replace(0,6,"tanzim")<<"\n";  //its replace index from 0 to 6 with tanzim

//insert a string in specific index by insert fuinction
cout<<fname.insert(4,"y")<<"\n"; //inserting y at 4th position of string

//removing character from a string by erase function
cout<<fname.erase(4,7)<<"\n";  //erase the elements of index 4 to 7

//comparing two strings by compare method
/*This function returns the following values according to the matching cases:
Returns 0 if both the strings are the same. Returns < 0 (less than zero)
 if the value of the character of the first string is smaller as compared to the second string input*/
cout<<name.compare(lname);


return 0;
}

