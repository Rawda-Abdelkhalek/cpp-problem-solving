/*
Problem: Rectangle into Squares
Source: Codewars
Difficulty: 6 kyu
Link: https://www.codewars.com/kata/55466989aeecab5aac00003e

Description:
Given a rectangle, return the sizes of the squares used to cut it.
Return empty if it's already a square.
*/

#include <vector>

class SqInRect
{
  public:
  static std::vector<int> sqInRect(int lng, int wdth){
  if (lng == wdth ) return {};
  std::vector <int> result;
  
  while (lng >0 && wdth >0)
    {  if ( lng > wdth){
      result.push_back(wdth);
      lng -= wdth;
    }
    else {
      result.push_back(lng);
      wdth -=lng;
    }
     
  };
       return result;
};
};