#include <iostream>
#include <iomanip>
#define size 100
#include<fstream>
#include<windows.h>
#include<string>
#include<stdlib.h>
#include<conio.h>

using namespace std;


class Link{

public:

    Link *next;
    Link *previous;

string fname, lname, ID, phone_num, menu;
		int reserve_num, seat_num,seatNo,choice;
    Link();
    void display();



};

Link::Link()
{

    next=NULL;
    previous=NULL;

}





void Link::display()
{




			cout << fname <<" ";
			cout <<lname << " ";
			cout << ID << " ";
			cout << phone_num << " ";
			cout << seatNo<< " ";
			cout << reserve_num << " ";
			cout << menu << "\n";

			cout<<endl;
}



class LinkedList
{

 private:
     Link *first;

Link *temp, *temp2;
 public:

    int seat[10];
    int reserve =0;



    LinkedList();

    double deleteFirst();
    void displayList();
    Link*Find(double data);
    bool deleteNote(int seat);


    airlines();
	void main_menu();
	void make_reservation();
	void cancel_reservation();
	void search_passenger();
	void change_reservation();
	void print_list();
	void print_report();


};
LinkedList::LinkedList()
{

    first=NULL;
    temp=NULL;


}

void LinkedList:: make_reservation(string fname, string lname, string ID, string phone_num, int reserve_num, int meal_choice, int seatNo, int choice)
{

        Link *temp = new Link();

        cin>>temp->choice;

        cout<<"Enter the seat number";
        cin>>temp->seatNo;




	cout<<"\n\nEnter First Name of person: ";
	cin>>temp->fname;
	cout<<"--------------------------------\n";

	cout<<"Enter Last Name of Person: ";
	cin>>temp->lname;
	cout<<"--------------------------------\n";

	cout<<"Enter ID of the person: ";
	cin>>temp->ID;
	cout<<"--------------------------------\n";

	cout<<"Enter Phone Number of Person: ";
	cin>>temp->phone_num;
	cout<<"--------------------------------\n";



/*do{
	cout << "Please Enter the Seat Number: ";

		cin>>x;

		cout<<"   Try again:: ";
		cin >>x;




	}while(x>10);
*/

//**************************
	// prints the menu list and prompts to make a choice.

		cout << "Please Enter Your Menu Preference from below: \n\n";
		cout << "   Veg     ..... '1'\n";
		cout << "   Non-Veg ..... '2'\n";
		cout << "   No meal ..... '3'\n\n";

		cout <<"   Your Choice :: ";
		cin >> meal_choice;

		while(meal_choice>3 || meal_choice<1){
		cout<<"   Try Again:: ";
		cin>>meal_choice;
		}

		if (meal_choice == 1)
		temp->menu = "veg";

		else if (meal_choice == 2)
		temp->menu = "Non-Veg";

		else
		temp->menu = "No meal";




	reserve++;   //increments the reservation numbers
	temp->reserve_num=reserve;
	cout <<"\n::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n";
	cout << "YOUR RESERVATION NUMBER IS :: " << reserve << "\n\n";
	cout <<"::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n";



	if(first == NULL)
    first = temp;
	else
	{
temp->previous=NULL;
temp->next=first;
first->previous=first;
first=temp;

    }

}


void LinkedList::displayList()
{

  Link *currentval=first;

  while(currentval!=NULL)
  {

    currentval->display() ;
    currentval=currentval->next;

  }


}





bool LinkedList::deleteNote(int seat)
{

    Link *previous=first;
    Link *current=first;



    while(current!=NULL)
    {

    if(current->seatNo==seat)
    {
        if(current==first)
        {
            first=first->next;

        }else

        previous->next=current->next;

        delete current;
        return true;

    }
    else

    {
        previous=current;
        current=current->next;

    }

return false;
    }

}

void LinkedList:: search_passenger()
{
		string fakename;
		cout << "Please enter your first name here: ";
		cin >> fakename;

		Link *current = first;
		while (current != NULL)
		{
			if (current->fname == fakename)
			{
				cout << "First Name   : " << current->fname << endl;
				cout << "Last Name    : " << current->lname << endl;
				cout << "ID           : " << current->ID << endl;
				cout << "Phone number : " << current->phone_num << endl;
				cout << "seat Number  : " << current->seatNo << endl;
				cout << "Reservation No : " << current->reserve_num<< endl;
				return;
			}	current= current->next;
		}	cout << " Sorry!!! NOT FOUND \n\n";

}
void menu()
{
    int choice=0,journey=0,flight=0,seatNo=0,meal_choice=0;
    string fname, lname, ID, phone_num;

    cout <<"\t\t      :::::::::::::::::::::::::::::::::::::::::::::::::::::\n";
    cout <<"\t\t\t\t ------------------------------ \n";
    cout <<"\t\t\t\t Make Reservation    ...... [1] \n";
    cout <<"\t\t\t\t ------------------------------ \n";
    cout <<"\t\t\t\t Cancel Reservation  ...... [2] \n";
    cout <<"\t\t\t\t ------------------------------ \n";
    cout <<"\t\t\t\t Search Passenger    ...... [3] \n";
    cout <<"\t\t\t\t ------------------------------ \n";
    cout <<"\t\t\t\t Change Reservation  ...... [4] \n";
    cout <<"\t\t\t\t ------------------------------ \n";
    cout <<"\t\t\t\t Print a list        ...... [5] \n";
    cout <<"\t\t\t\t ------------------------------ \n";
    cout <<"\t\t\t\t Print status Report ...... [6] \n";
    cout <<"\t\t\t\t ------------------------------ \n";
    cout <<"\t\t\t\t Quit                ...... [7] \n";
    cout <<"\t\t\t\t ------------------------------ \n";
    cout <<"\t\t      :::::::::::::::::::::::::::::::::::::::::::::::::::::\n";
    cout<<"Enter your choice : ";
    cin >> choice;

    system ("cls");

    switch(choice) // switch case
        {
          case 1://condition

        cout <<"\t\t\t  ****************** Journey ******************\n"<< endl;
        cout <<"\t\t\t\t--------------------------------- \n";
        cout <<"\t\t\t\tSri Lanka to Sydney      .... [1] \n";
        cout <<"\t\t\t\t--------------------------------- \n";
        cout <<"\t\t\t\tSri Lanka to New York    .... [2] \n";
        cout <<"\t\t\t\t--------------------------------- \n";
        cout <<"\t\t\t\tSri Lanka to Melboune    .... [3] \n";
        cout <<"\t\t\t\t--------------------------------- \n";
        cout <<"\t\t\t\tSydney to Melboune       .... [4] \n";
        cout <<"\t\t\t\t--------------------------------- \n";
        cout <<"\t\t\t\tSydney to New York       .... [5] \n";
        cout <<"\t\t\t\t--------------------------------- \n";
        cout <<"\t\t\t  *********************************************\n"<< endl;

        cout<<"\nEnter your choice : ";
        cin >> journey;

        cout <<"\n\t\t\t  ****************** Flights ******************\n"<< endl;
        cout << "Airline:\t\t   \t\tDeparture:\tArrival:\tPrice:\t\n";

        if(journey==1 || journey==2 || journey==3)
        {
            cout << "\1.Sri lankan Airlines   ... [1] \t10:00\t\t14:05\t\tRs.25000\n";
            cout << "\2.QATAR                 ... [2] \t14:00\t\t18:05\t\tRs.21500\n";
            cout << "\3.Emirates              ... [3] \t18:00\t\t22:05\t\tRs.24000\n";
        }
        else if(journey==4 || journey==5)
        {
            cout << "\1.Sri lankan Airlines   ... [1] \t10:00\t\t14:05\t\tRs.35000\n";
            cout << "\2.QATAR                 ... [2] \t14:00\t\t18:05\t\tRs.24500\n";
            cout << "\3.Emirates              ... [3] \t18:00\t\t22:05\t\tRs.30000\n";
        }
        else
        {
            cout << "No Flights Found!!.\nTry again\n\n\n";
            cin >> journey;
        }
                cout <<"\n\t\t\t  *********************************************\n"<< endl;

        cout<<"\nEnter your choice : ";
        cin>>flight;

        cout<<"\nEnter the seat number : ";
        cin>>seatNo;


	cout<<"\n\nEnter First Name of person: ";
	cin>>fname;
	cout<<"--------------------------------\n";

	cout<<"Enter Last Name of Person: ";
	cin>>lname;
	cout<<"--------------------------------\n";

	cout<<"Enter ID of the person: ";
	cin>>ID;
	cout<<"--------------------------------\n";

	cout<<"Enter Phone Number of Person: ";
	cin>>phone_num;
	cout<<"--------------------------------\n";

		cout << "Please Enter Your Menu Preference from below: \n\n";
		cout << "   Veg     ..... '1'\n";
		cout << "   Non-Veg ..... '2'\n";
		cout << "   No meal ..... '3'\n\n";

		cout <<"   Your Choice :: ";
		cin >> meal_choice;

		while(meal_choice>3 || meal_choice<1){
		cout<<"   Try Again:: ";
		cin>>meal_choice;
		}
                break;
          case 2://condition

                break;
          case 3://condition

                break;
          default://condition
                cout << "Wrong input entered.\nTry again" << endl;
        }

}

int main()
{

system("color F5");
cout<<"\n\t\t\t         -------------------------";
Sleep(100);
cout<<"\n\t\t\t      ------------------------------";
Sleep(100);
cout<<"\n\t\t\t   ------------------------------------";
Sleep(100);
cout<<"\n\t\t\t------------------------------------------";
Sleep(100);
cout<<"\n\t\t\t* ";
Sleep(250);
cout<<"WELCOME";
Sleep(250);
cout<<" TO ";
Sleep(250);
cout<<"AIRLINE ";
Sleep(250);
cout<<"RESERVATION ";
Sleep(250);
cout<<"SYSTEM ";
Sleep(100);
cout<<"*";
Sleep(100);
cout<<"\n\t\t\t------------------------------------------";
Sleep(100);
cout<<"\n\t\t\t   ------------------------------------";
Sleep(100);
cout<<"\n\t\t\t      ------------------------------";
Sleep(100);
cout<<"\n\t\t\t         -------------------------";
Sleep(600);
system("color F1");

char a= 177,b=219;
    cout<<"\n\n\t\t\tLoading...";
    cout<<"\n\n\t\t\t";
    for(int i=0;i<=40;i++)
        cout<<" " ;
      Sleep(70);
    cout<<"\r";
    cout<<"\t\t\t";
    for(int i=0;i<=40;i++)
    {
        cout<<b;
        Sleep(70);
    }
    system ("cls");

	menu();




    return 0;

}
