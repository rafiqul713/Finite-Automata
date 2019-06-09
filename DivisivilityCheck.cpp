/**
**
**  RAFIQUL ISLAM 
**  
**
**/

#include<iostream>
#include<cstdio>
#include<windows.h>
using namespace std;

class Divisibility
{
public:
    char ch;
    int state;
    int div3();
    int div4();
    int div5();
    int div6();
    int div7();
    int div8();
    int div9();


};

int Divisibility ::  div3()
{

    cout <<"Input Binary Number:  \n";
    state=0;
//    cin.get(ch);
    while(cin.get(ch))
    {
        if(ch=='\n')
            break;
        if(state==0)
        {
            if(ch=='0')
                state=0;
            else if(ch=='1')
                state=1;

        }

        else if(state==1)
        {
            if(ch=='0')
                state=2;
            else if(ch=='1')
                state=0;

        }

        else if(state==2)
        {
            if(ch=='0')
                state=1;
            else if(ch=='1')
                state=2;
        }
    }

    if(state==0)
        cout<<"------------------------- Divisible by 3 ----------------------\n";
    else
        cout<<"------------------------ Does Not Divisible By 3 ------------------------------\n";

}

int Divisibility :: div4()
{
      cout <<"Input Binary Number:  \n";
    state=0;
    cin.get(ch);
    while(cin.get(ch))
    {
        if(ch=='\n')
            break;
        if(state==0)
        {
            if(ch=='0')
                state=0;
            else if(ch=='1')
                state=1;
        }

        else if(state==1)
        {
            if(ch=='0')
                state=2;
            else if(ch=='1')
                state=3;
        }
        if(state==2)
        {
            if(ch=='0')
                state=0;
            else if(ch=='1')
                state=1;

        }

        if(state==3)
        {
            if(ch=='0')
                state=2;
            else if(ch=='1')
                state=3;
        }
    }

     if(state==0)
            cout<<"------------------------------ Divisible by 4 ---------------------\n";
    else
            cout<<"---------------------------- Does not Divisible by 4 -------------------\n";

}

int Divisibility :: div5()
{
      cout <<"Input Binary Number:  \n";
    state=0;
    cin.get(ch);
    while(cin.get(ch))
    {
        if(ch=='\n')
            break;
        if(state==0)
        {
            if(ch=='0')
                state=0;
            else if(ch=='1')
            state=1;

        }
        else if(state==1)
        {
            if(ch=='0')
                state=2;
            else if(ch=='1')
                state=3;
        }

        else if(state==2)
        {
            if(ch=='0')
                state=4;
            else if(ch=='1')
                state=0;
        }
        else if(state==3)
        {
            if(ch=='0')
                state=1;
            else if(ch=='1')
                state=2;
        }
        else if(state==4)
        {
            if(ch=='0')
                state=3;
            else if(ch=='1')
                state=4;
        }
    }
    if(state==0)
        cout<<"----------------------------- Divisible by 5 -----------------------------------\n";
    else
        cout<<"----------------------- Does Not Divisible by 5 ----------------------------\n";

}

int Divisibility ::  div6()
{
      cout <<"Input Binary Number:  \n";
    state=0;
    cin.get(ch);
    while(cin.get(ch))
    {
        if(ch=='\n')
            break;
        if(state==0)
        {
            if(ch=='0')
                state=0;
            else if(ch=='1')
                state=1;
        }
        else if(state==1)
        {
            if(ch=='0')
                state=2;
            else if(ch=='1')
                state=3;
        }
        else if(state==2)
        {
            if(ch=='0')
                state=4;
            else if(ch=='1')
                state=5;
        }

        else if(state==3)
        {
            if(ch=='0')
                state=0;
            else if(ch=='1')
                state=1;
        }
        else if(state==4)
        {
            if(ch=='0')
                state=2;
            else if(ch=='1')
                state=3;
        }

        else if(state==5)
        {
            if(ch=='0')
                state=4;
            else if(ch=='1')
                state=5;
        }

    }
    if(state==0)
        cout<<"--------------------------Divisible by 6--------------------------\n";
    else
        cout<<"--------------------Does Not Divisible by 6---------------------\n";
}
int Divisibility :: div7()
{
      cout <<"Input Binary Number:  \n";
    state=0;
    cin.get(ch);
    while(cin.get(ch))
    {
        if(ch=='\n')
            break;
        if(state==0)
        {
            if(ch=='0')
                state=0;
            else if(ch=='1')
                state=1;
        }
        else if(state==1)
        {
            if(ch=='0')
                state=2;
            else if(ch=='1')
            state=3;
        }

        else if(state==2)
        {
            if(ch=='0')
                state=4;
            else if(ch=='1')
                state=5;
        }
        else if(state==3)
        {
            if(ch=='0')
                state=6;
            else if(ch=='1')
                state=0;
        }
        else if(state==4)
        {
         if(ch=='0')
                state=1;
         else if(ch=='1')
            state=2;
        }
        else if(state==5)
        {
            if(ch=='0')
                state=3;
            else if(ch=='1')
                state=4;
        }
        else if(state==6)
        {
            if(ch=='0')
                state=5;
            else if(ch=='1')
                state=6;
        }
     }
     if(state==0)
     cout<<"--------------------------Divisible by 7-----------------------\n";
     else
    cout<<"-----------------------Does Not Divisible by 7-------------------------\n";

}

int Divisibility :: div8()
{
      cout <<"Input Binary Number:  \n";
    state=0;
    cin.get(ch);
      while(cin.get(ch))
      {

        if(ch=='\n')
            break;
        if(state==0)
        {
            if(ch=='0')
                state=0;
            else if(ch=='1')
                state=1;
        }
        else if(state==1)
        {
            if(state==1)
            {
                if(ch=='0')
                    state=2;
                else if(ch=='1')
                    state=3;
            }
        }
        else if(state==2)
        {
            if(ch=='0')
                state=4;
                else if(ch=='1')
                    state=5;
        }

        else if(state==3)
        {
            if(ch=='0')
                state=6;
            else if(ch=='1')
                state=7;
        }
        else if(state==4)
        {
            if(ch=='0')
                state=0;
            else if(ch=='1')
            state=1;
        }

        else if(state==5)
        {
            if(ch=='0')
                state=2;
            else if(ch=='1')
                state=3;
        }
        else if(state==6)
        {
            if(ch=='0')
                state=4;
            else if(ch=='1')
                state=5;
        }
        else if(state==7)
        {
            if(ch=='0')
                state=6;
            else if(ch=='1')
                state=7;
        }
      }
      if(state==0)
        cout<<"------------------------Divisible by 8---------------------------\n";
      else
        cout<<"----------------------Does not Divisible by 8-------------------\n";
}

int Divisibility :: div9()
{
      cout <<"Input Binary Number:  \n";

    state=0;
    cin.get(ch);
    while(cin.get(ch))
    {
        if(ch=='\n')
            break;
        if(state==0)
        {
            if(ch=='0')
                state=0;
            else if(ch=='1')
                state=1;
        }
        else if(state==1)
        {
            if(ch=='0')
                state=2;
            else if(ch=='1')
                state=3;
        }
        else if(state==2)
        {
            if(ch=='0')
                state=4;
            else if(ch=='1')
                state=5;
        }
        else if(state==3)
        {
            if(ch=='0')
                state= 6;
            else if(ch=='1')
                state=7;
        }
        else if(state==4)
        {
            if(ch=='0')
                state=8;
            else if(ch=='1')
                state=0;
        }
        else if(state==5)
        {
            if(ch=='0')
                state=1;
            else if(ch=='1')
                state=2;
        }
        else if(state==6)
        {
            if(ch=='0')
                state=3;
            else if(ch=='1')
                state=4;
        }
        else if(state==7)
        {
            if(ch=='0')
            state=5;
            else if(ch=='1')
                state=6;
        }
        else if(state==8)
        {
            if(ch=='0')
                state=7;
            else if(ch=='1')
                state=8;
        }
    }
    if(state==0)
        cout<<"----------------------- Divisible by 9 -----------------------------\n";
    else
        cout<<"----------------------- Does not Divisible by 9 ----------------------\n";
}

int main()
{
    Divisibility  div;
    int choice;
    while(true)
    {
        cout<<"\n\n\n\nEnter  Your Choice: \n\n";
        cout<<"Press   3   to Check Divisible by 3\n\n";
        Sleep(1500);
        cout<<"Press   4    to Check Divisible by 4\n\n";
        Sleep(1500);
        cout<<"Press   5    to Check divisible by 5\n\n";
        Sleep(1500);
        cout<<"Press   6    to Check divisible by 6\n\n";
       Sleep(1500);
        cout<<"Press   7    to Check divisible by 7\n\n";
        Sleep(1500);
        cout<<"Press   8    to Check divisible by 8\n\n";
        Sleep(1500);
        cout<<"Press   9    to Check divisible by 9\n\n";
        cout<<"Choice:  ";

        cin>>choice;
        switch(choice)
        {
        case 3 :
            cout<<endl<<endl;
            div.div3();
            break;
        case 4:
            cout<<endl<<endl;
            div.div4();
            break;
        case 5 :
            cout<<endl<<endl;
            div.div5();
            break;
        case 6 :
            cout<<endl<<endl;
            div.div6();
            break;
        case 7:
            cout<<endl<<endl;
            div.div7();
            cout<<endl<<endl;
            break;
        case 8:
            cout<<endl<<endl;
            div.div8();
            break;
        case 9:
            cout<<endl<<endl;
            div.div9();
            break;
        default:
            cout<<"Invalid Choice\n";
        }
}
return 0;
}
