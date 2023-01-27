#include<bits/stdc++.h>

using namespace std;

bool cond = false;

void check1(char mat[3][3] , int player )
{
    char tool_check ;
    if(player ==1)
    tool_check='O';
    else
    tool_check='X';
    for(int i=0 ;i<3 ;i++)
    {
    
            if(mat[i][0]==tool_check && mat[i][1]==tool_check && mat[i][2]==tool_check)
            {
                if(tool_check='O')
                cout<< "congrulation player 1 you won";
                else
                cout<< "congrulation player 2 you won";
                cond=true;
                cout<<'\n';
                for(int i=0; i<3 ; i++)
      {
        for(int j=0; j<3 ; j++)
        {
            cout<< mat[i][j];
        }
        cout << '\n';
      }
                break;
            }
            if(mat[0][i]==tool_check && mat[1][i]==tool_check && mat[2][i]==tool_check)
            {
                if(tool_check='O')
                cout<< "congrulation player 1 you won";
                else
                cout<< "congrulation player 2 you won";
                cond=true;
                cout<<'\n';
                for(int i=0; i<3 ; i++)
      {
        for(int j=0; j<3 ; j++)
        
        {
            cout<< mat[i][j];
        }
        cout << '\n';
      }
                break;
            } 
    }
    if((mat[0][0]==tool_check && mat[1][1]==tool_check && mat[2][2]==tool_check)||(mat[2][0]==tool_check && mat[1][1]==tool_check && mat[0][2]==tool_check))
    {
        if(tool_check='O')
                cout<< "congrulation player 1 you won";
                else
                cout<< "congrulation player 2 you won";
                cond=true;
                cout<<'\n';
                for(int i=0; i<3 ; i++)
      {
        for(int j=0; j<3 ; j++)
        {
            cout<< mat[i][j];
        }
        cout << '\n';
      }
    }


    

}
void check2(char mat[3][3])
{
    int count=0;
    for(int i=0; i<3 ; i++)
     {
        for(int j=0; j<3 ; j++)
        {
            if(mat[i][j]=='.')
            count++;
        }
     }
     if(count ==0)
     {
        for(int i=0; i<3 ; i++)
      {
        for(int j=0; j<3 ; j++)
        {
            cout<< mat[i][j];
        }
        cout << '\n';
      }
        cout << "its a tie";
        cond =true;
     }

}


int main(){

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

     char mat[3][3],player=1;

     for(int i=0; i<3 ; i++)
     {
        for(int j=0; j<3 ; j++)
        {
            mat[i][j]='.';
        }
     }
     
     while(!cond)
     {
        for(int i=0; i<3 ; i++)
      {
        for(int j=0; j<3 ; j++)
        {
            cout<< mat[i][j];
        }
        cout << '\n';
      }

      int row , col;
      cout << "enter row =";
      cin >> row ;
      cout << "enter col=";
      cin >> col;
      if(mat[row-1][col-1]!='.')
      {
        cout << "it is alrady occupied "<<'\n';
        continue;
      }
      if(player == 1)
        mat[row-1][col-1]='O';
      else
      mat[row-1][col-1]='X'; 

      check1(mat , player);
      check2(mat);
      if(player==1)
      player=2;
      else
      player=1;
        
     }

     
    return 0;
}