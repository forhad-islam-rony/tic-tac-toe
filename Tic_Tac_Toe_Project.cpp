#include<bits/stdc++.h>
using namespace std;
char a[3][3]={'1','2','3','4','5','6','7','8','9'};
char choice;
char turn='X';
int row,col;
void display()
{
    system("cls");
    cout<<"Player1 [x] : "<<endl;
    cout<<"Player2 [0] : "<<endl;

   cout<<"\t\t  "<<a[0][0]<<"   |  "<<a[0][1]<<"   |   "<<a[0][2]<<" "<<endl;
   cout<<"\t\t______|______|______"<<endl;
   cout<<"\t\t  "<<a[1][0]<<"   |  "<<a[1][1]<<"   |   "<<a[1][2]<<" "<<endl;
   cout<<"\t\t______|______|______"<<endl;
   cout<<"\t\t  "<<a[2][0]<<"   |  "<<a[2][1]<<"   |   "<<a[2][2]<<" "<<endl;
   cout<<"\t\t      |      |      "<<endl;
}
void player_turn()
{
    if(turn=='X'){
        cout<<"Player1 [x] turn: ";
        cin>>choice;
    }
    else if(turn=='O'){
        cout<<"Player2 [0] turn: ";
        cin>>choice;
    }
    switch(choice)
    {
        case '1': row=0,col=0;break;
        case '2': row=0,col=1;break;
        case '3': row=0,col=2;break;
        case '4': row=1,col=0;break;
        case '5': row=1,col=1;break;
        case '6': row=1,col=2;break;
        case '7': row=2,col=0;break;
        case '8': row=2,col=1;break;
        case '9': row=2,col=2;break;
        default: cout<<"Invalid choice:)"<<endl;
    } 
    if(turn=='X' && a[row][col]!='X' && a[row][col]!='O'){
        a[row][col]='X';
        turn='O';
    }
    else if(turn=='O' && a[row][col]!='X' && a[row][col]!='O'){
        a[row][col]='O';
        turn='X';
    }
    else{
        cout<<"Box is already filled !!"<<endl;
        cout<<"Please try again:)"<<endl;
        display();
    }
}

int main()
{
    cout<<endl<<"\t\tT_I_C T_A_C T_O_E G_A_M_E"<<endl;
    while(true){
    display();
    player_turn();
    display();
    }
}