#include <iostream>  
#include <windows.h>  
using namespace std;
int const ROW = 4;  
int const COL = 4;  
int game[ROW][COL] = {0};  
  
void Print()  
{  
    system("cls");  
    cout<< "*****************  2048 控 制 台 版  ******************" << endl;  
cout<< "*****************  By Tanzf (Intern) ******************" << endl << endl;  
    for (int i = 0; i < ROW; ++i)  
    {  
        cout << "---------------------------------"<< endl;  
        for (int j = 0; j < COL; ++j)  
        {  
            if (game[i][j] == 0)  
            {  
                cout <<"|   \t";  
            }  
            else   
            {  
                cout <<"|   " << game[i][j] << "\t";  
            }  
        }  
        cout << "|" << endl;  
    }  
    cout << "---------------------------------"<< endl;  
}  
  //界面设置 
  int main()
  {Print();
   } 
