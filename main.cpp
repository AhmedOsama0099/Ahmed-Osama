#include <bits/stdc++.h>

using namespace std;

int main()
{
int x,player1,player2,sum,y,v,m;
cout<<"                                                             Wlecome to Nim-21 game!"<<endl;
while (true){
cout<<"how many numbers player: ";
cin>>x;
sum=21;
while ((x!=1) && (x!=2))
{
    cout<<"this game can be played by 1 or 2"<<endl;
    cout<<"how many numbers player: ";
    cin>> x;
}
while (x==2)
     {
    cout<<"player1 please enter num: ";
    cin>>player1;
    while ((player1!=1) && (player1!=2) && (player1!=3))
       {cout<<"please enter num from 1:3"<<endl;
        cout<<"player1 please enter num: ";
        cin>>player1;}



    if (sum==2)
        {
            while ((player1!=1) && (player1!=2))
             {
                 cout<<"player1 plase enter num from 1,2"<<endl;
                 cout<<"player1 please enter num: ";
                 cin>>player1;
                }
            }
    sum=sum-player1;
    cout<<"coins= "<<sum<<endl;
    if (sum==1)
        {cout<<"player1 Won!"<<endl;
        break;}

    if (sum==0)
        {cout<<"player1 Won"<<endl;
        break;}
    cout<<"player2 please enter num: ";
    cin>>player2;
    while ((player2!=1) && (player2!=2) && (player2!=3))
        {cout<<"please enter num from 1:3"<<endl;
        cout<<"player2 please enter num: ";
        cin>>player2;}


    if (sum==2)
         {while ((player2!=1) && (player2!=2))
            {cout<<"please enter num from 1,2"<<endl;
            cout<<"player2 please enter num: ";
            cin>>player2;}
         }
    sum=sum-player2;
    cout<<"coins= "<<sum<<endl;

    if (sum==1)
        {cout<<"player2 Won!"<<endl;
        break;}
    if (sum==0)
        {cout<<"player1 Won"<<endl;
        break;}

     }
if (x==1)
{
    cout<<"1=hard && 2=normal: ";
    cin>>y;
    while ((y!=1)&&(y!=2))
    {
        cout<<"this game is normal and hard only"<<endl;
        cout<<"1=hard && 2=normal: ";
        cin>>y;;
    }
    if(y==1)
    {
        player2=0;
        while(true)
        {
            cout<<"player1 pleas enter num: ";
            cin>>player1;
            while((player1!=1)&& (player1!=2)&&(player1!=3))
            {
                cout<<"please enter num from 1:3"<<endl;
                cout<<"player1 plese enter num: ";
                cin>>player1;
            }
            sum=sum-player1;
            cout<<"coins= "<<sum<<endl;
            if (sum==2)
            {
                player2=1;
                sum=sum-player2;
                cout<<"computers= "<<player2<<endl;
                cout<<"coins= "<<sum<<endl;
            }
            if (sum==1)
            {
                cout<<"computer Won!"<<endl;
                break;
            }
            if(sum==0)
            {
                cout<<"player1 Won!"<<endl;
                break;
            }
            player2=4-player1;
            cout<<"computer: "<<player2<<endl;
            sum=sum-player2;
            cout<<"coins= "<<sum<<endl;
            if (sum==2)
            {
                while ((player1!=1) && (player1!=2))
                {
                    cout<<"please enter num from 1,2"<<endl;
                    cout<<"player1 please enter num: ";
                    cin>>player1;
                }
                sum=sum-player1;
                cout<<"coins= "<<sum<<endl;
            }
            if (sum==1)
            {
                cout<<"computer Won!"<<endl;
                break;
            }
            if (sum==0)
            {
                cout<<"player1 Won"<<endl;
                break;
            }
        }
    }
    if (y==2)
    {

        v=3;
        cout<<"computer: "<<v<<endl;
        sum=21;
        sum=sum-v;
        cout<<"coins= "<<sum<<endl;
        while(sum!=0)
            {
                cout<<"player1 please enter num: ";
                cin>>player1;
                while ((player1!=1)&&(player1!=2)&&(player1!=3))
                {
                    cout<<"please enter num from 1:3"<<endl;
                    cout<<"player1 please enter num: ";
                    cin>>player1;
                }


                if (sum==2)
                {
                    while ((player1!=1)&&(player1!=2))
                    {
                        cout<<"please enter num from 1,2"<<endl;
                        cout<<"player1 please enter num: ";
                        cin>>player1;
                    }
                }
                sum=sum-player1;
                cout<<"coins= "<<sum<<endl;
                if(sum==1)
                {
                    cout<<"player1 won!"<<endl;
                    break;

                }
                while (sum==0)
                    {
                        cout<<"computer Won!"<<endl;
                        break;
                    }
                if (sum==2)
                {
                    player2=1;
                }
                if (sum==3)
                {
                    player2=2;
                }
                else
                {
                    player2=4-player1;
                }
                cout<<"computer: "<<player2<<endl;
                sum=sum-player2;
                cout<<"coins= "<<sum<<endl;
                if (sum==1)
                {
                    cout<<"computer Won!"<<endl;
                    break;
                }
                if (sum==0)
                {
                    cout<<"player1 Won!"<<endl;
                    break;
                }


            }

    }
}

    cout<<"play again press=1 Or exit press=2: ";
    cin>>m;
    sum=21;
    while ((m!=1)&&(m!=2))
    {
        cout<<"no more options"<<endl;
        cout<<"play again press=1 Or exit press=2: ";
        cin>>m;
    }
    if (m==2)
    {
        exit(0);
    }}
    return 0;
}
