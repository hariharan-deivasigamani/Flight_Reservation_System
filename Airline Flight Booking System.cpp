#include <iostream>
#include<fstream>
#include<string.h>
using namespace std;

int glob=0;
int global=10;

class d_booking
{
protected:
    int pnr;
    char f_d[10],toja[7],tojd[7];
    long int doj;
    int choice,src,dest;
public:
    void d_pnr()
    {
        glob++;
        pnr=glob;
    }
    int j_detail()
    {
        cout << "\nEnter Date of Flight(DDMMYY)." << "Please enter a valid date." <<  endl;
        cin >> doj;
        cout << "1.New York(1) \t2.New Jersey(2) \t3.Sydney(3) \t4.Los Angeles(4)" << endl << endl;
        cout << "\tEnter Source" << endl;
        cin >> src;
        cout << "\tEnter destination" << endl;
        cin >> dest;
        if((src==1 && dest==2) || (src==2 && dest==1))//condition
        {
            cout << "\t \t \tFlights Found" << endl << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Eagle(1)\t08:00\t\t11:05\t\t$100\t\tRefundable\n";
            cout << "2.Falcon(2)\t14:00\t\t17:05\t\t$100\t\tRefundable\n";
            cout << "3.Jet Speed(3)\t19:00\t\t22:05\t\t$100\t\tRefundable\n";
        }

        else if((src==1 && dest==3) || (src==3 && dest==1))//condition
        {
            cout << "\t \t \tFlights Found" << endl << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Eagle(1)\t08:00\t\t11:05\t\t$100\t\tRefundable\n";
            cout << "2.Falcon(2)\t14:00\t\t17:05\t\t$100\t\tRefundable\n";
            cout << "3.Jet Speed(3)\t19:00\t\t22:05\t\t$100\t\tRefundable\n";
        }

        else if((src==1 && dest==4) || (src==4 && dest==1))//condition
        {
            cout << "\t \t \tFlights Found" << endl << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Eagle(1)\t08:00\t\t11:05\t\t$200\t\tRefundable\n";
            cout << "2.Falcon(2)\t14:00\t\t17:05\t\t$250\t\tRefundable\n";
            cout << "3.Jet Speed(3)\t19:00\t\t22:05\t\t$300\t\tRefundable\n";
        }

        else if((src==2 && dest==3) || (src==3 && dest==2))//condition
        {
            cout << "\t \t \tFlights Found" << endl << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Eagle(1)\t08:00\t\t11:05\t\t$140\t\tRefundable\n";
            cout << "2.Falcon(2)\t14:00\t\t17:05\t\t$150\t\tRefundable\n";
            cout << "3.Jet Speed(3)\t19:00\t\t22:05\t\t$180\t\tRefundable\n";
        }

        else if((src==2 && dest==4) || (src==4 && dest==2))//condition
        {
            cout << "\t \t \tFlights Found" << endl << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Eagle(1)\t08:00\t\t11:05\t\t$200\t\tRefundable\n";
            cout << "2.Falcon(2)\t14:00\t\t17:05\t\t$150\t\tRefundable\n";
            cout << "3.Jet Speed(3)\t19:00\t\t22:05\t\t$200\t\tRefundable\n";
        }
        else if((src==3 && dest==4) || (src==4 && dest==3))//condition
         {
            cout << "\t \t \tFlights Found" << endl << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Eagle(1)\t08:00\t\t11:05\t\t$180\t\tRefundable\n";
            cout << "2.Falcon(2)\t14:00\t\t17:05\t\t$50\t\tRefundable\n";
            cout << "3.Jet Speed(3)\t19:00\t\t22:05\t\t$150\t\tRefundable\n";
        }
        else if(src==dest)//condition
        {
            cout << "\nDestination can't be same.\nTry again\n\n\n" << endl;
            return j_detail();
        }
        else
        {
            cout <<"\nWrong input entered\nTry again\n\n\n" << endl;
            return j_detail();
        }

    }

    int  select_flight()
    {   cout << "\nEnter your choice" << endl;
        cin >> choice;
        switch(choice)
        {
          case 1:
                cout << "\nFlight selected:"<<endl;
                cout << "Eagle"<<endl;
                strcpy(f_d,"Eagle");
                cout << "Departure Time : 08:00"<<endl;
                cout<<"Arrival Time: 11:05"<<endl;
                strcpy(tojd,"8:00");
                strcpy(toja,"11:05");
                break;
          case 2:
                cout << "\nFlight selected:"<<endl;
                cout << "Falcon"<<endl;
                strcpy(f_d,"Falcon");
                cout << "Departure Time : 14:00"<<endl;
                cout<<"Arrival Time: 17:05"<<endl;
                strcpy(tojd,"14:00");
                strcpy(toja,"17:05");
                break;
          case 3:
                cout << "\nFlight selected:" << endl;
                cout << "Jet Speed" << endl;
                strcpy(f_d,"Jet Speed");
                cout << "Departure Time : 19:00" << endl;
                cout<<"Arrival Time: 22:05" << endl;
                strcpy(tojd,"19:00");
                strcpy(toja,"22:05");
                break;
          default:
                cout << "Wrong input entered.\nTry again" << endl;
                return select_flight();
        }
    }
};

class i_booking
{
protected:
    int pnri;
    char f_i[10],tojai[7],tojdi[7];
    long int doji;
    int srci,desti,choicei;
public:
    void i_pnr()
    {
        global++;
        pnri=global;
    }

    int j_detaili()
    {
        cout << "Enter Date of Flight(DDMMYY)." << "Please enter a valid date." << endl;;
        cin >> doji;
        cout << "1.London(1) \2.Dubai(2) \3.Quatar(3) \4.Singapore(4) \5.Thailand(5) " << endl << endl;
        cout << "\tEnter Source" << endl;
        cin >> srci;
        cout << "\nEnter destination" ;
        cin >> desti;
        cout << "\t \t \tFlights Found" << endl << endl;

        if((srci==1 && desti==3) || (srci==3 && desti==1))//condition
        {
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Speed(1)\t10:00\t\t14:05\t\t$250\tRefundable\n";
            cout << "2.Zoom(2)\t14:00\t\t18:05\t\t$215\tRefundable\n";
            cout << "3.Fly Away(3)\t18:00\t\t22:05\t\t$240\tRefundable\n";
        }

        else if((srci==1 && desti==4) || (srci==4 && desti==1))//condition
        {
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Speed(1)\t10:00\t\t14:05\t\t$255\tRefundable\n";
            cout << "2.Zoom(2)\t14:00\t\t18:05\t\t$213\tRefundable\n";
            cout << "3.Fly Away(3)\t18:00\t\t22:05\t\t$246\t\tRefundable\n";
        }

        else if((srci==1 && desti==5) || (srci==5 || desti==1))//condition
        {
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Speed(1)\t10:00\t\t14:05\t\t$250\tRefundable\n";
            cout << "2.Zoom(2)\t14:00\t\t18:05\t\t$290\tRefundable\n";
            cout << "3.Fly Away(3)\t18:00\t\t22:05\t\t$420\tRefundable\n";
        }

        else if((srci==2 && desti==3) || (srci==3 && desti==2))//condition
        {
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Speed(1)\t10:00\t\t14:05\t\t$170\tRefundable\n";
            cout << "2.Zoom(2)\t14:00\t\t18:05\t\t$140\tRefundable\n";
            cout << "3.Fly Away(3)\t18:00\t\t22:05\t\t$170\tRefundable\n";
        }

        else if((srci==2 && desti==4) || (srci==4 && desti==2))//condition
        {
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Speed(1)\t10:00\t\t14:05\t\t$100\tRefundable\n";
            cout << "2.Zoom(2)\t14:00\t\t18:05\t\t$120\tRefundable\n";
            cout << "3.Fly Away(3)\t18:00\t\t22:05\t\t$250\tRefundable\n";        }

        else if(srci==2 && desti==5 || (srci==5 && desti==2))//condition
        {
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Speed(1)\t10:00\t\t14:05\t\t$140\tRefundable\n";
            cout << "2.Zoom(2)\t14:00\t\t18:05\t\t$120\tRefundable\n";
            cout << "3.Fly Away(3)\t18:00\t\t22:05\t\t$140\tRefundable\n";

        }
        else if(srci==desti)//condition
        {
            cout << "wrong input entered.\nTry again\n\n\n"<< endl;
            return j_detaili();
        }
        else//condition
            {
            cout << "Wrong input entered.\nTry again\n\n\n";
            return j_detaili();
        }

    }

    int select_flighti()
    {
        cout << "\nEnter your choice" << endl;
        cin >> choicei;
        switch(choicei)
        {
        case 1:
            cout << "\nFlight selected:" <<endl;
            cout << "Speed" << endl;
            strcpy(f_i,"Speed");
            cout << "Departure Time: 10:00" << endl;
            cout << "Arrival Time: 14:05" << endl;
            strcpy(tojdi,"10:00");
            strcpy(tojai,"14:05");
            break;
        case 2:
               cout << "\nFlight selected:" << endl;
               cout << "Zoom" << endl;
               strcpy(f_i,"Zoom");
               cout << "Departure Time: 14:00" << endl;
               cout << "Arrival Time: 18:05" << endl;
               strcpy(tojdi,"14:00");
                strcpy(tojai,"18:05");
                break;
        case 3:
            cout << "\nFlight selected:" << endl;
            cout << "Fly Away" << endl;
            strcpy(f_i,"Fly Away");
            cout << "Departure Time : 18:00" << endl;
            cout << "Arrival Time: 22:05" << endl;
            strcpy(tojdi,"18:00");
            strcpy(tojai,"22:05");
            break;
        default:
            cout << "Wrong input entered" << endl;
            return select_flighti();
        }
    }
};
}
}
