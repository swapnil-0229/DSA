#include <bits/stdc++.h>
using namespace std



int main (){

void vectors(){

vector<int> v;

v.push_back(1);
v.emplace_back(1);

vector<pair<int, int>> vec;

vec.push_back({1,2});
vec.emplace_back(1,2);

vector <int> ve(5,100); // creates 5 instances of 100 in ve vector

vector <int> ve(5); // creates 5 instances of zero or garbage values in ve


vector <int> v1(5,20);
vector <int> v2(v1); // creates a copy of v1 in v2

cout << v[0]; // to output elements of vector v. the element at zeroth index will be printed i.e. same as an array

vector<int>::iterator it/*any name*/= v.begin();

it++; 
cout << *(it); 

it=it+2; // shifts 2 places ahead in an array 
cout << *(it);

vector<int>::iterator it/*any name*/= v.end(); /*points at a location just after end element of a vector. we have to use it-- first to reach 
                                                    the last element. then only we can start printing elements*/

                                                    

}

}