#include <iostream>
#include<fstream>
#include<string.h>
#include<regex>
using namespace std;

int glob=0;
int global=10;

bool Emailcheck(string email)
    {
    const regex pattern( "[_a-z0-9-]+(.[_gaa-z0-9-]+)*@[a-z0-9-]+(.[a-z0-9-]+)*(.[a-z]{2,4})");
    return regex_match(email, pattern);
    }


class d_booking
{
protected:
    int pnr;
    char f_d[10],toja[7],tojd[7];
    long int doj;
    int val1,val2,val3;
    int choice,src,dest;
public:
    void d_pnr()
    {
        glob++;
        pnr=glob;
    }
    int j_detail()
    {
        cout << "\nEnter Date of Flight(DD).\t" <<endl;
        cin >> val1;
        cout << "\nEnter Month of Flight(MM).\t" <<endl;
        cin >> val2;
        cout << "\nEnter Year of Flight(YY).\t" <<endl;
        cin >> val3;

        if(val1<=31 && val2<=12 && val3<=24 ){
        cout << "1.New York(1) \t2.New Jersey(2) \t3.Sydney(3) \t4.Los Angeles(4)" << endl << endl;
        cout << "\tEnter Source" << endl;
        cin >> src;
        cout << "\tEnter destination" << endl;
        cin >> dest;
        }

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
    int doji1,doji2,doji3;
    int srci,desti,choicei;
public:
    void i_pnr()
    {
        global++;
        pnri=global;
    }

    int j_detaili()
    {

        cout << "\nEnter Date of Flight(DD).\t" <<endl;
        cin >> doji1;
        cout << "\nEnter Month of Flight(MM).\t" <<endl;
        cin >> doji2;
        cout << "\nEnter Year of Flight(YY).\t" <<endl;
        cin >> doji3;
        if(doji1<=31 && doji2<=12 && doji3 <= 24){
        cout << "1.London(1) \2.Dubai(2) \3.Quatar(3) \4.Singapore(4) \5.Thailand(5) " << endl << endl;
        cout << "\tEnter Source" << endl;
        cin >> srci;
        cout << "\nEnter destination" ;
        cin >> desti;
        }

        if((srci==1 && desti==2) || (srci==2 && desti==1))//condition
        {
            cout << "\t \t \tFlights Found" << endl << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Speed(1)\t10:00\t\t14:05\t\t$250\tRefundable\n";
            cout << "2.Zoom(2)\t14:00\t\t18:05\t\t$215\tRefundable\n";
            cout << "3.Fly Away(3)\t18:00\t\t22:05\t\t$240\tRefundable\n";
        }

        else if((srci==1 && desti==3) || (srci==3 && desti==1))//condition
        {
            cout << "\t \t \tFlights Found" << endl << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Speed(1)\t10:00\t\t14:05\t\t$250\tRefundable\n";
            cout << "2.Zoom(2)\t14:00\t\t18:05\t\t$215\tRefundable\n";
            cout << "3.Fly Away(3)\t18:00\t\t22:05\t\t$240\tRefundable\n";
        }

        else if((srci==1 && desti==4) || (srci==4 && desti==1))//condition
        {
            cout << "\t \t \tFlights Found" << endl << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Speed(1)\t10:00\t\t14:05\t\t$255\tRefundable\n";
            cout << "2.Zoom(2)\t14:00\t\t18:05\t\t$213\tRefundable\n";
            cout << "3.Fly Away(3)\t18:00\t\t22:05\t\t$246\t\tRefundable\n";
        }

        else if((srci==1 && desti==5) || (srci==5 && desti==1))//condition
        {
            cout << "\t \t \tFlights Found" << endl << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Speed(1)\t10:00\t\t14:05\t\t$250\tRefundable\n";
            cout << "2.Zoom(2)\t14:00\t\t18:05\t\t$290\tRefundable\n";
            cout << "3.Fly Away(3)\t18:00\t\t22:05\t\t$420\tRefundable\n";
        }

        else if((srci==2 && desti==3) || (srci==3 && desti==2))//condition
        {
            cout << "\t \t \tFlights Found" << endl << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Speed(1)\t10:00\t\t14:05\t\t$170\tRefundable\n";
            cout << "2.Zoom(2)\t14:00\t\t18:05\t\t$140\tRefundable\n";
            cout << "3.Fly Away(3)\t18:00\t\t22:05\t\t$170\tRefundable\n";
        }

        else if((srci==2 && desti==4) || (srci==4 && desti==2))//condition
        {
            cout << "\t \t \tFlights Found" << endl << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Speed(1)\t10:00\t\t14:05\t\t$100\tRefundable\n";
            cout << "2.Zoom(2)\t14:00\t\t18:05\t\t$120\tRefundable\n";
            cout << "3.Fly Away(3)\t18:00\t\t22:05\t\t$250\tRefundable\n";        }

        else if(srci==2 && desti==5 || (srci==5 && desti==2))//condition
        {
            cout << "\t \t \tFlights Found" << endl << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Speed(1)\t10:00\t\t14:05\t\t$140\tRefundable\n";
            cout << "2.Zoom(2)\t14:00\t\t18:05\t\t$120\tRefundable\n";
            cout << "3.Fly Away(3)\t18:00\t\t22:05\t\t$140\tRefundable\n";

        }

        else if(srci==3 && desti==4 || (srci==4 && desti==3))//condition
        {
            cout << "\t \t \tFlights Found" << endl << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Speed(1)\t10:00\t\t14:05\t\t$140\tRefundable\n";
            cout << "2.Zoom(2)\t14:00\t\t18:05\t\t$120\tRefundable\n";
            cout << "3.Fly Away(3)\t18:00\t\t22:05\t\t$140\tRefundable\n";

        }

        else if(srci==3 && desti==5 || (srci==5 && desti==3))//condition
        {
            cout << "\t \t \tFlights Found" << endl << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Speed(1)\t10:00\t\t14:05\t\t$140\tRefundable\n";
            cout << "2.Zoom(2)\t14:00\t\t18:05\t\t$120\tRefundable\n";
            cout << "3.Fly Away(3)\t18:00\t\t22:05\t\t$140\tRefundable\n";

        }


        else if(srci==4 && desti==5 || (srci==5 && desti==4))//condition
        {
            cout << "\t \t \tFlights Found" << endl << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Speed(1)\t10:00\t\t14:05\t\t$140\tRefundable\n";
            cout << "2.Zoom(2)\t14:00\t\t18:05\t\t$120\tRefundable\n";
            cout << "3.Fly Away(3)\t18:00\t\t22:05\t\t$140\tRefundable\n";

        }


        else if(srci == desti)//condition
        {
            cout << "Source and Destination can't be same.\nTry again\n\n\n"<< endl;
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
            cout << "\nFlight selected: Speed" <<endl;
            strcpy(f_i,"Speed");
            cout << "Departure Time: 10:00" << endl;
            cout << "Arrival Time: 14:05" << endl;
            strcpy(tojdi,"10:00");
            strcpy(tojai,"14:05");
            break;
        case 2:
               cout << "\nFlight selected: Zoom" << endl;
               strcpy(f_i,"Zoom");
               cout << "Departure Time: 14:00" << endl;
               cout << "Arrival Time: 18:05" << endl;
               strcpy(tojdi,"14:00");
                strcpy(tojai,"18:05");
                break;
        case 3:
            cout << "\nFlight selected: Fly Away" << endl;
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


class passenger: public d_booking,public i_booking
{
protected:
    char f_name[30],l_name[30];
    string email,email1;
    int age1,age,gender;
    long long int c_no;
public:
    void p_detail(int x)
    {   if(x==1)
        { j_detail();
          select_flight();
        }
          else
          {  j_detaili();
             select_flighti();
          }

        cout << "\n\n\nEnter passenger details";
        cout << "\n\nFirst Name:";
        cin >> f_name;
        cout << "\nLast Name:";
        cin >> l_name;

        email:
        cout << "\nE-mail:";
        cin >> email1;
        if (Emailcheck(email1))
        {
        email = email1;
            }
        else
        {
        cout << "\t\t\t Your Email-Id is InValid" << endl;
         goto email;
        }
    }
    int gender_check()
    {
        cout << "\nGender:\n\nMale-press:1::\n\nFemale-press:2::";
        cin >> gender;
        if( (gender>2) || (gender == 0) )
        {
            cout << "\n\nWrong input entered.\nTry again\n\n" << endl;
            return gender_check();
        }
    }



    int age_check()
    {
        cout << "\nAge:";
        cin >> age1;
        if(age1<120){
            age = age1;
        }
        else{
            cout<<"Enter valid Age\n";
            return age_check();
        }
    }


       void more_details()
       {

             cout << "\nContact no.(10 digits):";
             cin >>c_no;
              if (c_no < 1000000000 || c_no > 9999999999)
        {
        cout << "\t\t\t Please Enter Only 10 Digits..." << endl;
        return more_details();
        }


        cout << "\nDetails Entered:\n";
        cout << "Name:" << f_name << " " << l_name << endl;
        if(gender == 1){
        cout << "Gender: Male"<< endl;
        }else{
        cout << "Gender: Female"<< endl;
        }
        cout << "Age:" << age << endl;
        cout << "Email id:" << email << endl;
        cout << "Contact No.:" << c_no << endl;
    }


     int getpnr()
        {
            return pnr;
        }

     int getpnri()
     {
         return pnri;
     }

     void disp()
     {
         cout<<"\n\t\t---------------------------------";
         cout<<"\n\t\t\t    PNR: " << pnr << "\t" <<endl;
         cout<<"\t\t|\tFlight: " << f_d << "\t\t|"<< endl;
         cout<<"\t\t\tName: " << f_name << " " << l_name << "\t\t"<< endl;
         cout<<"\t\t|\tDOJ: " << val1<<"."<<val2<<"."<<val3 << "\t\t|"<< endl;
         cout<<"\t\t\tDeparture Time: " << tojd << "\t"<< endl;
         cout<<"\t\t|\tArrival Time: " << toja <<"\t|"<< endl;
         cout<<"\t\t---------------------------------";
     }

      void dispi()
     {
       cout<<"\n\t\t---------------------------------";
         cout<<"\n\t\t\t    PNR: " << pnri << "\t        " <<endl;
         cout<<"\t\t|\tFlight: " << f_i << "\t\t|"<< endl;
         cout<<"\t\t\tName: " << f_name << " " << l_name << "\t\t"<< endl;
         cout<<"\t\t|\tDOJ: " << doji1<<"."<<doji2<<"."<<doji3 << "\t\t|"<< endl;
         cout<<"\t\t\tDeparture Time:" << tojdi << "\t"<< endl;
         cout<<"\t\t|\tArrival Time: " << tojai <<"\t|"<< endl;
         cout<<"\t\t---------------------------------";
     }
};



class payment
{
protected:
   long long int choice1,bank;
   string user_id;
   unsigned long long int card;
   int cvv,mon1,year1;
    char password[10];
public:
    void pay_detail()
    {     cout << "\n\n\nHow would you like to pay?:\n";
        cout << "\n1.Debit Card \n2.Credit Card \n3.Net Banking";
        cout << "\n\nEnter your choice: ";
        cin >> choice1;
        switch(choice1)
        {
        case 1:
            cout << "\nEnter card no: ";
            cin >> card;

            if (card < 1000000000000000 || card > 9999999999999999)
        {
        cout << "\t\t\t Please Enter Only 16 Digits..." << endl;
        return pay_detail();
        }

            cout << "\nEnter Month of Card Expiry(MM):\t" <<endl;
            cin >> mon1;
            cout << "\nEnter Year of Card Expiry(YY):\t" <<endl;
            cin >> year1;

            if(mon1<=12 && (year1<=99 && year1>=23)){
            cout << "\nEnter CVV no:";
            cin >> cvv;
            if(cvv >= 100 && cvv <= 999){
            cout << "\nThank You For Reservation Your Transaction is Successful\n\n";
            }
            else{
            cout<<"\n !!! Kindly check your Card Details !!!\n";
            return pay_detail();
            }
            }
            else{
            cout<<"\n !!! Kindly check your Card Details !!!\n";
            return pay_detail();
            }
            break;
        case 2://condition
            cout << "\nEnter card no: ";
            cin >> card;

            if (card < 1000000000000000 || card > 9999999999999999)
            {
            cout << "\t\t\t Please Enter Only 16 Digits..." << endl;
            return pay_detail();
            }
            cout << "\nEnter Month of Card Expiry(MM):\t" <<endl;
            cin >> mon1;
            cout << "\nEnter Year of Card Expiry(YY):\t" <<endl;
            cin >> year1;
            if(mon1<=12 && (year1<=99 && year1>=23)){
            cout << "\nEnter password:";
            cin >> password;
            }else{
            cout<<"\n !!! Kindly check your Card Details !!!\n";
            return pay_detail();
            }
           cout << "\nTransaction Successful\n\n";
            break;
        case 3://condition
            cout << "\n\t\t\tBanks Available: \n\n\t\t\t1.Central Bank of India \n\t\t\t2.State Bank of India \n\t\t\t3.KVB Bank \n\t\t\t4.Indian Bank \n\t\t\t5.Others";
            cout << "\nSelect your bank:";
            cin >> bank;
            cout << "\nYou have selected:" << bank;
            cout << "\nEnter user id:";
            cin >> user_id;
            cout << "\nEnter password:";
            cin >> password;
            cout << "\nTransaction Successful\n\n";
            break;
        default://condition
            cout << "\nWrong input entered.\nTry again\n\n";
            return pay_detail();
        }
    }

};

void createfile(passenger p)
{  ofstream fin("domestic.txt",ios::binary|ios::app);
   fin.write((char*)&p,sizeof(p));
   fin.close();
}

void cancelticket(int x)
{  passenger p;
    int f=0;
   ifstream fout("domestic.txt",ios::binary|ios::app);
   ofstream fin("domestic1.txt",ios::binary|ios::app);
   fout.read((char *)&p,sizeof(p));
   while(fout)
   {
     if(p.getpnr()!=x)
      fin.write((char *)&p,sizeof(p));
      else
     {
         p.disp();
         cout<<"\nYour Above ticket is being canceled:\n" << "Amount refunded: $100\n";
         f++;
     }
     fout.read((char *)&p,sizeof(p));
   }
   if(f==0)
    cout<<"Ticket not found\n";
   fout.close();
   fin.close();
   remove("domestic.txt");
   rename("domestic1.txt","domestic.txt");

}

void checkticket(int x)
{  passenger p;
   int f=0;
   ifstream fout("domestic.txt",ios::binary);
   fout.read((char *)&p,sizeof(p));
   while(fout)
   {
     if(p.getpnr()==x)
     {p.disp();
      cout<<"\nYour ticket"<<endl;
      f++;
      break;
     }
     fout.read((char *)&p,sizeof(p));

   }
   fout.close();
   if(f==0)
   cout<<"Ticket not found"<<endl;

}
void createfilei(passenger p)
{  ofstream fin("international.txt",ios::binary|ios::app);
   fin.write((char*)&p,sizeof(p));
   fin.close();
}
void cancelticketi(int x)
{  passenger p;
   int f=0;
   ifstream fout("international.txt",ios::binary|ios::app);
   ofstream fin("international1.txt",ios::binary|ios::app);
   fout.read((char *)&p,sizeof(p));
   while(fout)
   {
     if(p.getpnri()!=x)
      fin.write((char *)&p,sizeof(p));
      else
     {
         p.dispi();
         cout<<"\n\n\t\tYour Above ticket is being deleted:\n"<<"Amount refunded: \"$100\"\n";
         f++;
     }
     fout.read((char *)&p,sizeof(p));
   }
   if(f==0)
    cout<<"\nTicket not found\n";
   fout.close();
   fin.close();
   remove("international.txt");
   rename("international1.txt","international.txt");
}
void checkticketi(int x)
{  passenger p;
   int f=0;
   ifstream fout("international.txt",ios::binary);
   fout.read((char *)&p,sizeof(p));
   while(fout)
   {
     if(p.getpnri()==x)
     {p.dispi();
      cout<<"\nYour ticket"<<endl;
      f++;
      break;
     }
     fout.read((char *)&p,sizeof(p));

   }
   fout.close();
   if(f==0)
   cout<<"Ticket not found"<<endl;

}


int main()
{

    class d_booking d1;
    class i_booking i1;
    class passenger p1;
    class payment p2;
    int ch,ch1,n;
    char input;
    do
    {
    	system("CLS");
    	    cout << "\n\n \t\t\t\t\t\t\t\t       JET AIRWAYS" << endl << endl;

    cout << "\n\n \t\t\t\t\t\t\tWelcome To AirlineFlight Booking System" << endl << endl;
    cout << "\n\n\t\t\t\t\t\t\t\t____________________\n\n\t\t\t\t\t\t\t\t     MAIN MENU    \n\t\t\t\t\t\t\t\t____________________\n\n\t\t\t\t\t\t\t\t| 1. Book Flight   |\n\t\t\t\t\t\t\t\t| 2. Cancel Fight  |\n\t\t\t\t\t\t\t\t| 3. Check Ticket  | \n\t\t\t\t\t\t\t\t| 4. Exit          |\n\t\t\t\t\t\t\t\t____________________" << endl;
    cout << "\n\n\n\t\t\t Please enter your choice:";
    cin >> ch;
      switch(ch)
      {
          case 1:
          system("CLS");
              cout << "\n\n1.Domestic Fights(1) \n2.International Flights(2)" << endl;
              cout << "\nPlease enter your option" << endl;
              cin >> ch1;
              switch(ch1)
              {
                   case 1:
                        p1.d_pnr();
                        p1.p_detail(1);
                        p1.gender_check();
                        //p1.mail_check();
                        p1.age_check();
                        p1.more_details();
                        p2.pay_detail();
                        p1.disp();
                        createfile(p1);
                        break;
                   case 2:
                           p1.p_detail(2);
                           p1.i_pnr();
                           p1.gender_check();
                            //p1.mail_check();
                           p1.age_check();
                           p1.more_details();
                           p2.pay_detail();
                           p1.dispi();
                           createfilei(p1);
                           break;
                   default:
                    cout << "Wrong input entered\nTry again\n\n\n" << endl;
                    return main();
              }
          break;
          case 2:

              system("CLS");
              cout << "1.Domestic Fights(1) \n2.International Flights(2)" << endl;
                 cout << "\nPlease enter your option" << endl;
                 cin >> ch1;
                  if(ch1==1)
                {
                   cout << "Please enter your PNR no.:" << endl;
                   cin>>n;
                   cancelticket(n);
                }
                 else if(ch1==2)
               {  cout << "Please enter your PNR no.:" << endl;
                  cin>>n;
                  cancelticketi(n);
               }
               else
               {
                   cout << "Wrong input entered\nTry again\n\n\n";
                   return main();
               }
               break;
          case 3:
          system("CLS");
                  cout << "1.Domestic Fights(1) \n2.International Flights(2)" << endl;
                  cout << "\nPlease enter your option" << endl;
                  cin >> ch1;
                  if(ch1==1)
                  {cout << "Please enter your PNR no.:" << endl;
                  cin>>n;
                  checkticket(n);}
                  else if(ch1==2)
                  {  cout << "Please enter your PNR no.:" << endl;
                     cin>>n;
                     checkticketi(n);
                  }
                   else
               {
                   cout << "Wrong input entered.\nTry again\n\n\n";
                   return main();
               }
               break;
            case 4:
			system("CLS");
			return 0;
          default:
            cout << "Wrong input entered\nTry again.\n\n\n\n" << endl;
            return main();
      }
    cout<<"\n\n\nDo you wish to continue:(y/n)" << endl;
    cin >> input;
  }while(input=='y');
}

