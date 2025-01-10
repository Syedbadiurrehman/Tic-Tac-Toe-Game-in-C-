#include<iostream>
using namespace  std;

 char table[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
 char turn ='A';
 int row, column;
 bool draw =false;
 
void display_table()
{   
    system("cls");
    cout<<"\n\n \t\t\t\t\t\t\t   WELLCOME"<<endl;
    cout<<"\t\t\t\t\t\t T i c k    C r o s s   G a m e"<<endl;
    cout<<"\t\t\t\t\t\t   Player1[A]"<<endl;
    cout<<"\t\t\t\t\t\t   Player2[B]"<<endl;
  
    
    
        // Table Section Started

    cout<<"\t\t\t\t\t\t_________________________"<<endl;
    cout<<"\t\t\t\t\t\t|       |       |       |"<<endl;
    cout<<"\t\t\t\t\t\t|   "<<table[0][0]<<"   |   "<<table[0][1]<<"   |   "<<table[0][2]<<"   |"<<endl;
    cout<<"\t\t\t\t\t\t|_______|_______|_______|"<<endl;
    cout<<"\t\t\t\t\t\t|       |       |       |"<<endl;
    cout<<"\t\t\t\t\t\t|   "<<table[1][0]<<"   |   "<<table[1][1]<<"   |   "<<table[1][2]<<"   |"<<endl;
    cout<<"\t\t\t\t\t\t|_______|_______|_______|"<<endl;
    cout<<"\t\t\t\t\t\t|       |       |       |"<<endl;
    cout<<"\t\t\t\t\t\t|    "<<table[2][0]<<"  |   "<<table[2][1]<<"   |   "<<table[2][2]<<"   |"<<endl;     
    cout<<"\t\t\t\t\t\t|_______|_______|_______|"<<endl;
}



void Player_turn()
{
    int number;
    if(turn=='A')
    cout<<"\n\n\t\t\t\t\t\tPlayer1[A] trun:"<<endl;

     if(turn=='B')
    cout<<"\n\n\t\t\t\t\t\tPlayer1[B] trun:"<<endl;
    cin>>number;
   switch (number)
   {
   case 1: 
         row=0; column =0;
        break;
   case 2: 
         row=0; column =1;
        break;
   case 3: 
         row=0; column =2;
        break;
   case 4: 
         row=1; column =0;
        break;
   case 5: 
         row=1; column =1;
        break;
   case 6: 
         row=1; column =2;
        break;
   case 7: 
         row=2; column =0;
        break;
   case 8: 
         row=2; column =1;
        break;
   case 9: 
         row=2; column =2;
        break;
   default:
         cout<<"Invalid number"<<endl;
         break;
   }
   

   if (turn=='A' && table[row][column]!='A' && table[row][column]!='B')
   {
    table[row][column] ='A';
    turn='B';
   }
   else if (turn=='B' && table[row][column]!='A' && table[row][column]!='B')
   {
    table[row][column] ='B';
    turn='A';
   }

   else{
    cout<<"Box Already filled"<<endl;
    cout<<"Pleasw Try again"<<endl;
    Player_turn();
   }

    
       display_table();
}

bool gameover()
{
//  Checking winner
for (int i = 0; i <3; i++)
   if(table[i][0]==table[i][1] && table[i][0]==table[i][2] || table[0][i]==table[1][i] && table[0][i]==table[2][i])
   return false;

    // for diagonal 
     if(table[0][0]==table[1][1] && table[0][0]==table[2][2] || table[1][2]==table[1][1] && table[1][2]==table[0][0])
  return false;
//    Check Game is over or not

for (int i = 0; i <3; i++)
for (int j = 0; j <3; j++)
   if(table[i][j]!='A' && table[i][j]!='B')
   return true;
   
    // draw the game
   draw = true;
   return false;
}
int main()
{      
// Function called
while(gameover())
{
    Player_turn();
    display_table();
    gameover();
}

if(turn =='A'&& draw==false)
cout<<"Player1[A] Won the Game! Congratulation"<<endl;
else if(turn =='B'&& draw==false)
cout<<"Player2[B] Won the Game! Congratulation"<<endl;
else{
    cout<<"Game is Draw!!"<<endl;
}
}