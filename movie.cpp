#include <iostream>
using namespace std;
int main(){
int option;
do{
cout << "Enter 1 to continue and 0 to exit" << endl;
cin >> option;
switch(option){
case 0:
 break;
case 1:
int r, c;
string s;
cout << "Enter number of rows" << endl;
cin>> r;
cout << "Enter number of columns" << endl;
cin >> c;
char matrix[r][c];
int x[] = { -1, -1, -1, 0, 0, 1, 1, 1 };
int y[] = { -1, 0, 1, -1, 1, -1, 0, 1 };
cout<< "Enter the values row-wise" << endl;
 for(int i=0; i<r; i++) {
 for(int j=0;j<c;j++) {
 cin >> matrix[i][j];
 }
 }
 bool found;
 cout << "Enter the word to be checked" << endl;
 cin >>s;
 for (int row = 0; row < r; row++) {
 for (int col = 0; col < c; col++) {
 if (matrix[row][col] != s[0])
 found = false;
 int len = s.length();
 for (int dir = 0; dir < 8; dir++) {
 int k, rd = row + x[dir], cd = col + y[dir];
 for (k = 1; k < len; k++) {
 if (rd >= r || rd < 0 || cd >= c || cd < 0)
 break;
 if (matrix[rd][cd] != s[k])
 break;
 rd += x[dir], cd += y[dir];
 }
 if (k == len)
 found = true;
 if(found){
 cout << "Word found at" << " (" << row << ", " << col <<")" << endl;
 break;
 }
 }
 }
 }
}
}
 while(option!=0);
 return 0;
}
