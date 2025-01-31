#include <bits/stdc++.h>
using namespace std;

int main()
{
    int year;
    cin >> year;
    year = year + 1;
    int yearx;
    ostringstream oss;
    oss<<year;
    string yearstr = oss.str();

  for(int i = 1000; i <9000; i++)
  {
     if(yearstr[0] != yearstr[1] && yearstr[0] != yearstr[2] && yearstr[0] != yearstr[3] && yearstr[1] != yearstr[2]
     && yearstr[1] != yearstr[3] && yearstr[2] != yearstr[3])
   {
    istringstream(yearstr) >> yearx;
    cout << yearx;
    break;
   }
   else{
    istringstream(yearstr) >> yearx;
    yearx++;
    oss.str("");
    oss << yearx;
    yearstr = oss.str();
   }
  }
}