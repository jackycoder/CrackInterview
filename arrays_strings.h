/*****************************************************
 * File name:arrays_strings.h
 * Description:Cracking the interview , part of ARRAYS_STRINGS
 *
 * Date:2015/04/20
 * Author: Wang
 *****************************************************/
#ifndef __ARRAYS_STRINGS_H__
#define __ARRAYS_STRINGS_H__
#include<string>
#include<sstream>
#include<iostream>
using namespace std;

/*
 * Description: Compress basic string using counts of repeated characters.
 * If "compressed" string not smaller than the original string, return original.
 */
string CompressString(string str);

/*
 * Description: check if S2 is a rotation of S1 using only one call to isSubstring.
 * Answer: S1=XY S2 =YX  YX = XYXY ,S2 is in S1S1
 */
bool IsRotation(string s1, string s2);

#endif