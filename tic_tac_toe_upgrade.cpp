
#include<iostream>
using namespace std;
int main()
{
    int user1,user2;
    int x,y;
    int i,j,k;
    int storePosition[9]={},track=0,pos=0,position=1,demo[3][3]={0};
    char arr[3][3]={};
    int flag1=0, flag=0;

    cout<<"\n"<<"***********************************************Welcome Tic-Tac-Toe Game*************************************************"<<endl;
     cout<<"                                      -------------------"<<endl;
     for(i=0; i<3; i++)
    {
        cout<<"                                      |  ";
        for(j=0; j<3; j++)
        {
            cout<<arr[i][j]<<"  |  ";
        }
        cout<<"     ----->>>     ";
         for(k=0; k<3; k++)
        {
            demo[i][k]=position++;
            cout<<demo[i][k]<<"   ";
        }
        cout<<endl;
        cout<<"                                      -------------------"<<endl;
    }

    int CountPlayer1=0, CountPlayer2=0;
    char playAgainOrNot;

    do
    {
    int symFlag =0;
    char symbol;

    cout<<"Choose the symbol for First Player (O or X): ";
    cin>>symbol;

    while(symFlag == 0)
    {

        if(symbol == 'X' || symbol == 'x' || symbol == 'o' || symbol == 'O')
        {
            symFlag = 1;
        }
        else
        {
            cout<<"Wrong symbol select!! Please choose the correct symbol for First Player (O or X): ";
            cin>>symbol;
        }
    }

    string user="y";
    while(user=="y")
    {
        cout<<"First Player input (1-9): ";
        cin>>user1;
        int test=0;

    while(test==0)
    {
        if(user1>0 && user1<10)
        {
        for(i=0; i<9; i++)
        {
            if(storePosition[i]==user1)
            {
                track=1;
            }
        }
        if(track==0)
        {
            storePosition[pos]=user1;
            pos++;
        }
        }
    if((user1>0 && user1<10) && track==0)
    {
        test =1;
         if(user1==1)
    {
        x=0;
        y=0;
    }
    else if(user1==2)
    {
        x=0;
        y=1;
    }
     else if(user1==3)
    {
        x=0;
        y=2;
    }
     else if(user1==4)
    {
        x=1;
        y=0;
    }
     else if(user1==5)
    {
        x=1;
        y=1;
    }
     else if(user1==6)
    {
        x=1;
        y=2;
    }
     else if(user1==7)
    {
        x=2;
        y=0;
    }
     else if(user1==8)
    {
        x=2;
        y=1;
    }
     else if(user1==9)
    {
        x=2;
        y=2;
    }
    }
    else
    {
    cout<<"Wrong input! Please enter the correct position!"<<endl;
    cout<<"First Player input (1-9): ";
    cin>>user1;
    track=0;
    }
    }

    for(i=x; i<=x; i++)
    {
        for(j=y; j<=y; j++)
        {
            if(symbol == 'o' || symbol == 'O')
            {
                arr[x][y]='O';
            }
            else
            {
                arr[x][y]='X';
            }
        }
    }
    cout<<"                                                      -------------------"<<endl;
    for(i=0; i<3; i++)
    {

        cout<<"                                                      |  ";
        for(j=0; j<3; j++)
        {
            cout<<arr[i][j]<<"  |  ";
        }
        cout<<endl;
        cout<<"                                                      -------------------"<<endl;
    }
        if((symbol == 'o' || symbol == 'O') && ((arr[0][0]=='O' && arr[0][1]=='O' && arr[0][2]=='O') || (arr[1][0]=='O' && arr[1][1]=='O' && arr[1][2]=='O') || (arr[2][0]=='O' && arr[2][1]=='O' && arr[2][2]=='O') || (arr[0][0]=='O' && arr[1][0]=='O' && arr[2][0]=='O') || (arr[0][1]=='O' && arr[1][1]=='O' && arr[2][1]=='O') || (arr[0][2]=='O' && arr[1][2]=='O' && arr[2][2]=='O') || (arr[0][0]=='O' && arr[1][1]=='O' && arr[2][2]=='O') || (arr[0][2]=='O' && arr[1][1]=='O' && arr[2][0]=='O')))
            {
                flag1=1;
            }
            else if((symbol == 'x' || symbol == 'X') && ((arr[0][0]=='X' && arr[0][1]=='X' && arr[0][2]=='X') || (arr[1][0]=='X' && arr[1][1]=='X' && arr[1][2]=='X') || (arr[2][0]=='X' && arr[2][1]=='X' && arr[2][2]=='X') || (arr[0][0]=='X' && arr[1][0]=='X' && arr[2][0]=='X') || (arr[0][1]=='X' && arr[1][1]=='X' && arr[2][1]=='X') || (arr[0][2]=='X' && arr[1][2]=='X' && arr[2][2]=='X') || (arr[0][0]=='X' && arr[1][1]=='X' && arr[2][2]=='X') || (arr[0][2]=='X' && arr[1][1]=='X' && arr[2][0]=='X')))
            {
                flag1=1;
            }
            else if((symbol == 'x' || symbol == 'X') && ((arr[0][0]=='O' && arr[0][1]=='O' && arr[0][2]=='O') || (arr[1][0]=='O' && arr[1][1]=='O' && arr[1][2]=='O') || (arr[2][0]=='O' && arr[2][1]=='O' && arr[2][2]=='O') || (arr[0][0]=='O' && arr[1][0]=='O' && arr[2][0]=='O') || (arr[0][1]=='O' && arr[1][1]=='O' && arr[2][1]=='O') || (arr[0][2]=='O' && arr[1][2]=='O' && arr[2][2]=='O') || (arr[0][0]=='O' && arr[1][1]=='O' && arr[2][2]=='O') || (arr[0][2]=='O' && arr[1][1]=='O' && arr[2][0]=='O')))
            {
                flag1=2;
            }
            else if((symbol == 'o' || symbol == 'O') && ((arr[0][0]=='X' && arr[0][1]=='X' && arr[0][2]=='X') || (arr[1][0]=='X' && arr[1][1]=='X' && arr[1][2]=='X') || (arr[2][0]=='X' && arr[2][1]=='X' && arr[2][2]=='X') || (arr[0][0]=='X' && arr[1][0]=='X' && arr[2][0]=='X') || (arr[0][1]=='X' && arr[1][1]=='X' && arr[2][1]=='X') || (arr[0][2]=='X' && arr[1][2]=='X' && arr[2][2]=='X') || (arr[0][0]=='X' && arr[1][1]=='X' && arr[2][2]=='X') || (arr[0][2]=='X' && arr[1][1]=='X' && arr[2][0]=='X')))
            {
                flag1=2;
            }

    if(flag1==1)
    {
        cout<<endl<<"                            ##############-------First player win the match-------#################"<<endl<<endl;
        user="n";
        break;
    }
    else if(flag1==2)
    {
        cout<<endl<<"                            ##############-------Second player win the match-------#################"<<endl<<endl;
        user="n";
        break;
    }
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            if(arr[i][j] !='X' && arr[i][j] != 'O')
            {
                flag=1;
            }
        }
    }
    if(flag==0)
    {
        user="n";
        cout<<endl<<"                              ----------------------------Match draw---------------------------"<<endl<<endl;
        CountPlayer1++;
        CountPlayer2++;
        break;
    }
    flag=0;
    cout<<"Second Player input(1-9): ";
    cin>>user2;
    test=0;
    while(test==0)
    {
        if(user1>0 && user1<10)
        {
        for(i=0; i<9; i++)
        {
            if(storePosition[i]==user2)
            {
                track=1;
            }
        }
        if(track==0)
        {
            storePosition[pos]=user2;
            pos++;
        }
        }
    if((user2>0 && user2<10) && track==0)
    {
        test =1;
         if(user2==1)
    {
        x=0;
        y=0;
    }
    else if(user2==2)
    {
        x=0;
        y=1;
    }
     else if(user2==3)
    {
        x=0;
        y=2;
    }
     else if(user2==4)
    {
        x=1;
        y=0;
    }
     else if(user2==5)

    {
        x=1;
        y=1;
    }
     else if(user2==6)
    {
        x=1;
        y=2;
    }
     else if(user2==7)
    {
        x=2;
        y=0;
    }
     else if(user2==8)
    {
        x=2;
        y=1;
    }
     else if(user2==9)
    {
        x=2;
        y=2;
    }
    }
    else
    {
    cout<<"Wrong input! Please enter the correct position!"<<endl;
    cout<<"Second Player input(1-9): ";
    cin>>user2;
    track=0;
    }
    }
     for(i=x; i<=x; i++)
    {
        for(j=y; j<=y; j++)
        {
                if(symbol == 'o' || symbol == 'O')
            {
                arr[x][y]='X';
            }
            else
            {
                arr[x][y]='O';
            }
        }
    }
    cout<<"                                                      -------------------"<<endl;
    for(i=0; i<3; i++)
    {
        cout<<"                                                      |  ";
        for(j=0; j<3; j++)
        {
            cout<<arr[i][j]<<"  |  ";
        }
        cout<<endl;
        cout<<"                                                      -------------------"<<endl;
    }
            if((symbol == 'o' || symbol == 'O') && ((arr[0][0]=='O' && arr[0][1]=='O' && arr[0][2]=='O') || (arr[1][0]=='O' && arr[1][1]=='O' && arr[1][2]=='O') || (arr[2][0]=='O' && arr[2][1]=='O' && arr[2][2]=='O') || (arr[0][0]=='O' && arr[1][0]=='O' && arr[2][0]=='O') || (arr[0][1]=='O' && arr[1][1]=='O' && arr[2][1]=='O') || (arr[0][2]=='O' && arr[1][2]=='O' && arr[2][2]=='O') || (arr[0][0]=='O' && arr[1][1]=='O' && arr[2][2]=='O') || (arr[0][2]=='O' && arr[1][1]=='O' && arr[2][0]=='O')))
            {
                flag1=1;
            }
            else if((symbol == 'x' || symbol == 'X') && ((arr[0][0]=='X' && arr[0][1]=='X' && arr[0][2]=='X') || (arr[1][0]=='X' && arr[1][1]=='X' && arr[1][2]=='X') || (arr[2][0]=='X' && arr[2][1]=='X' && arr[2][2]=='X') || (arr[0][0]=='X' && arr[1][0]=='X' && arr[2][0]=='X') || (arr[0][1]=='X' && arr[1][1]=='X' && arr[2][1]=='X') || (arr[0][2]=='X' && arr[1][2]=='X' && arr[2][2]=='X') || (arr[0][0]=='X' && arr[1][1]=='X' && arr[2][2]=='X') || (arr[0][2]=='X' && arr[1][1]=='X' && arr[2][0]=='X')))
            {
                flag1=1;
            }
            else if((symbol == 'x' || symbol == 'X') && ((arr[0][0]=='O' && arr[0][1]=='O' && arr[0][2]=='O') || (arr[1][0]=='O' && arr[1][1]=='O' && arr[1][2]=='O') || (arr[2][0]=='O' && arr[2][1]=='O' && arr[2][2]=='O') || (arr[0][0]=='O' && arr[1][0]=='O' && arr[2][0]=='O') || (arr[0][1]=='O' && arr[1][1]=='O' && arr[2][1]=='O') || (arr[0][2]=='O' && arr[1][2]=='O' && arr[2][2]=='O') || (arr[0][0]=='O' && arr[1][1]=='O' && arr[2][2]=='O') || (arr[0][2]=='O' && arr[1][1]=='O' && arr[2][0]=='O')))
            {
                flag1=2;
            }
            else if((symbol == 'o' || symbol == 'O') && ((arr[0][0]=='X' && arr[0][1]=='X' && arr[0][2]=='X') || (arr[1][0]=='X' && arr[1][1]=='X' && arr[1][2]=='X') || (arr[2][0]=='X' && arr[2][1]=='X' && arr[2][2]=='X') || (arr[0][0]=='X' && arr[1][0]=='X' && arr[2][0]=='X') || (arr[0][1]=='X' && arr[1][1]=='X' && arr[2][1]=='X') || (arr[0][2]=='X' && arr[1][2]=='X' && arr[2][2]=='X') || (arr[0][0]=='X' && arr[1][1]=='X' && arr[2][2]=='X') || (arr[0][2]=='X' && arr[1][1]=='X' && arr[2][0]=='X')))
            {
                flag1=2;
            }

    if(flag1==1)
    {
        cout<<endl<<"                            ##############-------First player win the match-------#################"<<endl<<endl;
        user="n";
        break;
    }
    else if(flag1==2)
    {
        cout<<endl<<"                            ##############-------Second player win the match-------#################"<<endl<<endl;
        user="n";
        break;
    }
    }
    if(flag1==1)
    {
        CountPlayer1++;
    }
    else if(flag1==2)
    {
        CountPlayer2++;
    }
    cout<<"Do you want to play it again?? (Yes->(Y/y)/No->(Any key)): ";
    cin>>playAgainOrNot;
    storePosition[9]={};
    for(i=0; i<9; i++)
    {
        storePosition[i]={};
    }
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            arr[i][j]={};
        }
    }

    flag1=0;
    cout<<endl<<endl;
    }while(playAgainOrNot == 'Y' || playAgainOrNot == 'y');

    cout<<"                         ***************Final Score of Player 1 vs Player 2 is: (("<<CountPlayer1<<"--"<<CountPlayer2<<"))***************"<<endl<<endl;
}

