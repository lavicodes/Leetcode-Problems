/*Ques: Given two strings s and t, return true if t is an anagram of s, and false otherwise.*/

//Definition- An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

 /*ex:
 Input: s = "anagram", t = "nagaram"
Output: true*/

//code:
//Hash Table

/*This idea uses a hash table to record the times of appearances of each letter in the two strings s and t. For each letter in s, it increases the counter by 1 while for each letter in t, it decreases the counter by 1. Finally, all the counters will be 0 if they two are anagrams of each other.

The first implementation uses the built-in unordered_map and takes 36 ms.*/

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;
        int n = s.length();
        unordered_map<char, int> counts;
        for (int i = 0; i < n; i++) {
            counts[s[i]]++;
            counts[t[i]]--;
        }
        for (auto count : counts)
            if (count.second) return false;
        return true;
    }
};

//link of problem 
//https://leetcode.com/problems/valid-anagram/
