#include<bits/stdc++.h>
#include<fstream>


using namespace std ;
void login();
void registration();



int main()
{
    int c ;
    cout<<"\t\t\t_________________________________________________________________\n\n\n";
    cout<<"\t\t\t                          WELCOME TO THE LOGIN PAGE               \n\n\n";
    cout<<"\t\t\t_________________________        MENU       _______________________\n\n";
    cout<<"\t |  Press 1 to LOGIN                       |"<<endl;
    cout<<"\t |  Press 2 to REGISTER                    |"<<endl;
    cout<<"\t |  Press 4 to EXIT                        |"<<endl;
    cout<<"\n\t\t Please enter your choice :  ";
    cin>>c;
    cout<<endl;
    switch (c)
    {
    case 1 :
        /* code */
        login();
        break;

        case 2 : 
        registration();
        break ;

    

        case 4:
        cout<<"THANK YOU PLEASE VISIT AGAIN"<<endl;
        break;
    
    default:
        system("cls");
        cout<<"\t\t\t Please select any option \n"<<endl;
        main();
        
    }

}


void login()
{
    int count ;
    string userid , password , id , pass ;
    system("cls");
    cout<<"\t\t\t Please enter the username and password :"<<endl;
    cout<<"\t\t\t USERNAME  ";
    cin>>userid;
    cout<<"\t\t\t PASSWORD  ";
    cin>>password;


    ifstream input("records.txt");
    // this above code will check if that username or password exists or not
    while(input>>id>>pass)
    {
        if(id == userid  && pass == password)
        {
            count = 1 ;
            system("cls");


        }
    }
    // now we have to close this file that's why we use this function
    input.close();

    if(count == 1)
    {
        cout<<userid<<"\n Your LOGIN is successfull \n Thank you for logging in ! \n";
        main();
    }
    else
    {
        cout<<"\n LOGIN ERROR \n please check your username and password\n";
        main();
    }
    
}

void registration()
{
    string ruserid , rpassword , rid , rpass ;
    system("cls");
    cout<<"\t\t\t Enter the username : ";
    cin>>ruserid;
    cout<<"\t\t\t Enter the password : ";
    cin>>rpassword;


    ofstream f1("records.txt" , ios :: app);
    f1<<ruserid<<'  '<<rpassword<<endl;
    system("cls");
    cout<<"\n\t\t\t Registration is successfull!  \n";
    main();
}