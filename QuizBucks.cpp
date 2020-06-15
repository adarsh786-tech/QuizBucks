#include <iostream>
#include <windows.h>
#include<mmsystem.h>
#include<time.h>
#include<cstdlib>
#include<iomanip>
using namespace std;


class login
{
    char nm[20],gender;
    int age;
    char pno[10];

public:
    void getLogin()
    {
        cout<<"Enter your Details:"<<endl;
        cout<<"NAME(First Name only): ";
        cin>>nm;//
        cout<<endl<<"GENDER(M/F): ";
        cin>>gender;
        cout<<endl<<"AGE: ";
        cin>>age;
        cout<<endl<<"PHONE NO.: ";
        cin>>pno;
    }
    void setLogin()
    {
        cout<<"Your Details are:"<<endl;
        cout<<"Name= "<<nm<<endl<<"Gender= "<<gender<<endl<<"Age= "<<age<<endl<<"Phone no.: "<<pno<<endl;
    }
};


class qandans
{
public:
    char qn[95];
    char corans;

    void fngetqa(char a[95],char b)
    {
       strcpy(qn,a);
       corans=b;
    }

    void printq()
    {
        cout<<"\n"<<qn<<"\n";
    }
    char fnretans()
    {
        return corans;
    }
};



class options: public qandans
{
private:

    char opa[20],opb[20],opc[20],opd[20];
public:
    void fngetopt(char a[20],char b[20],char c[20],char d[20])
    {
        strcpy(opa,a);
        strcpy(opb,b);
        strcpy(opc,c);
        strcpy(opd,d);
    }

    void printa()
    {
        cout<<endl<<setw(20)<<opa;
    }
    void printb()
    {
        cout<<"\t"<<setw(20)<<opb;
    }
    void printc()
    {
        cout<<"\n"<<setw(20)<<opc;
    }
    void printd()
    {
        cout<<"\t"<<setw(20)<<opd<<"\n";
    }
};


char fnAnswer(options opt)
{
    char x;
    cout<<"Enter your Answer Choice- a/b/c/d "<<endl;
    cin>>x;
    if(x==opt.corans)
        return x;
    else
        cout<<"Wrong Answer....."<<endl;
    exit(0);

}

//-------------------------------------------------------------------------------
void lifeLines(options opt)
{
	int choice;
	char i;

	cout<<"\tLIFELINES"<<endl;
	cout<<"\t1.Audience Poll\n";
	cout<<"\t2.50:50\n";
	cout<<"\t3.Expert Advice\n"<<endl;

	cout<<"Enter your choice :\t";
	cin>>choice;
	cout<<"\n";

	switch(choice)
	{
		case 1: cout<<"You have selected Audience poll\n";
				for(i=97;i<101;i++)
				{
					if(i == opt.corans)
						cout<<i<<" :\t 70%\n";
				    if(i==97 && i!=opt.corans)
				        cout<<i<<" :\t 15%\n";
				    if(i==98 && i!=opt.corans)
				        cout<<i<<" :\t 10%\n";
				    if(i==99 && i!=opt.corans)
				        cout<<i<<" :\t 5%\n";
				    if(i==100 && i!=opt.corans)
				        cout<<i<<" :\t 5%\n";
				}
				break;
		case 2: cout<<"You have selected 50:50\n";
				for(i=97;i<101;i++)
				{
					if(i == opt.corans)
					{
						cout<<opt.corans<<"\n";
						//display correct answer
					}
				}
				for(i=0;i<1;i++)
				{
					char c=97;
					if((c==97||c==98||c==99||c==100) && c!=opt.corans)
					{
						cout<<c;
						//display c i.e.,another option
					}
					c++;
				}

				break;
		case 3: cout<<"You have selected Expert Advice\n";
				//include delay
				for(i=97;i<101;i++)
				{
					if(i == opt.corans)
					{
						cout<<"correct answer = "<<opt.corans;
						//display correct answer
					}
				}

	}
}



//--------------------------------------------------------------------------------




int main()
{

    options opt;

//PlaySound(TEXT("Kbc Awesome (1).wav"),NULL,SND_SYNC);
    int index=0,choice,count,ans;
    count=0;
    long int prize[10]={50000,100000,320000,640000,1250000,2500000,5000000,10000000,45000000,70000000};
    long int totalPrize[10]= {0};

    cout<<"----------------------------WELCOME TO THE MINIATURE VERSION OF K.B.C.------------------------------------------"<<endl<<endl;
    cout<<"----------------------------           THE QuIzBuCkS                 ------------------------------------------"<<endl<<endl;
    cout<<"---------------------------------------------------------------------------------------------------------------"<<endl<<endl;
    cout<<"                                  INSTRUCTIONS ARE AS FOLLOWS:-                                              "<<endl<<endl;

    login l;
    srand(time(NULL));
    l.getLogin();
    cout<<endl<<"Your Data is Processing.....please wait for few seconds"<<endl;
    Sleep(3000);
    cout<<endl;
    l.setLogin();

    char playChoice;
    cout<<endl<<"So lets start the game.....shall we"<<endl;
    cout<<"Y/N:"<<endl;
    cin>>playChoice;
    if(playChoice=='Y')
        cout<<"Ok, So lets get started...."<<endl;
    else
        return 0;
    options geog[10],hist[10],sports[10],econ[10];
    char quen[95];
    char o1[20],o2[20],o3[20],o4[20];
    strcpy(quen,"What is the name given to the great Indian desert?");
    strcpy(o1,"Chari");
    strcpy(o2,"Thar");
    strcpy(o3,"Gobi");
    strcpy(o4,"Kalahari");
    geog[0].fngetqa(quen,'b');
    geog[0].fngetopt(o1,o2,o3,o4);


     strcpy(quen,"Towards conservation of which endangered species is Gir National park dedicated?");
    strcpy(o1,"Black buck");
    strcpy(o2,"Nilgiri Tahr");
    strcpy(o3,"Indian rhino");
    strcpy(o4,"Asiatic lion");

    geog[1].fngetqa(quen,'d');
    geog[1].fngetopt(o1,o2,o3,o4);

     strcpy(quen,"Coastal areas of which of the following states don't belong to Konkan coast?");
    strcpy(o1,"Maharastra");
    strcpy(o2,"Goa");
    strcpy(o3,"Kerala");
    strcpy(o4,"Karnataka");
    geog[2].fngetqa(quen,'c');
    geog[2].fngetopt(o1,o2,o3,o4);

      strcpy(quen,"Name the largest freshwater lake in India.");
    strcpy(o1,"Wular Lake");
    strcpy(o2,"Bhimtal Lake");
    strcpy(o3,"Salt Lake");
    strcpy(o4,"Dul Lake");
    geog[3].fngetqa(quen,'a');
    geog[3].fngetopt(o1,o2,o3,o4);

      strcpy(quen,"Which is the deepest freshwater lake in the world?");
    strcpy(o1,"Lake Malawi");
    strcpy(o2,"Lake Baikal");
    strcpy(o3,"Lake Vostok");
    strcpy(o4,"Lake Tanganyika");
    geog[4].fngetqa(quen,'b');
    geog[4].fngetopt(o1,o2,o3,o4);

      strcpy(quen,"What is the length of Indian coastline?");
    strcpy(o1,"7320 km");
    strcpy(o2,"7516.6 km");
    strcpy(o3,"7420 km");
    strcpy(o4,"7680.5 km");
    geog[5].fngetqa(quen,'b');
    geog[5].fngetopt(o1,o2,o3,o4);

     strcpy(quen,"Badwater basin is the lowest point of which nation?");
    strcpy(o1,"Canada");
    strcpy(o2,"Australia");
    strcpy(o3,"USA");
    strcpy(o4,"Brazil");
    geog[6].fngetqa(quen,'c');
    geog[6].fngetopt(o1,o2,o3,o4);

     strcpy(quen,"Which amongst the following countries is not a basin country of the Caspian Sea?");
    strcpy(o1,"Kazakhstan");
    strcpy(o2,"Yemen");
    strcpy(o3,"Turkmenistan");
    strcpy(o4,"Iran");
    geog[7].fngetqa(quen,'b');
    geog[7].fngetopt(o1,o2,o3,o4);

     strcpy(quen,"Which amongst the following is a river in Denmark?");
    strcpy(o1,"Murrumbid");
    strcpy(o2,"Warrego");
    strcpy(o3,"Gudena");
    strcpy(o4,"Flinders");
    geog[8].fngetqa(quen,'c');
    geog[8].fngetopt(o1,o2,o3,o4);

     strcpy(quen,"Which of the following Swiss river drains into the Adriatic Sea?");
    strcpy(o1,"Piave");
    strcpy(o2,"Arno");
    strcpy(o3,"Tiber");
    strcpy(o4,"Volturna");
    geog[9].fngetqa(quen,'d');
    geog[9].fngetopt(o1,o2,o3,o4);


     strcpy(quen,"In the absence of Virat Kohli,who captained the Indian cricket team in Nidahas trophy?");
    strcpy(o1,"Kedhar Jadhav");
    strcpy(o2,"Rohit Sharma");
    strcpy(o3,"R Ashwin");
    strcpy(o4,"Bhuvaneshwar Kumar");
    sports[0].fngetqa(quen,'b');
    sports[0].fngetopt(o1,o2,o3,o4);

    strcpy(quen,"How many international centuries,Indian batsman,Virat Kohli had made as of March 2019?");
    strcpy(o1,"49");
    strcpy(o2,"53");
    strcpy(o3,"67");
    strcpy(o4,"65");
     sports[1].fngetqa(quen,'d');
    sports[1].fngetopt(o1,o2,o3,o4);

     strcpy(quen,"Which of the following football clubs never had Cristiano Ronaldo in their team ?");
    strcpy(o1,"Sporting CP");
    strcpy(o2,"FC Barcelona");
    strcpy(o3,"Juventus");
    strcpy(o4,"Real Madrid");
     sports[2].fngetqa(quen,'b');
    sports[2].fngetopt(o1,o2,o3,o4);

     strcpy(quen,"How many Olympic gold medals have been won by American swimmer Michael Phelps?");
    strcpy(o1,"17");
    strcpy(o2,"19");
    strcpy(o3,"23");
    strcpy(o4,"25");
     sports[3].fngetqa(quen,'c');
    sports[3].fngetopt(o1,o2,o3,o4);

     strcpy(quen,"When did Yuvraj Singh play his first ODI match?");
    strcpy(o1,"19 March,2000");
    strcpy(o2,"3 October,2000");
    strcpy(o3,"6 September,2000");
    strcpy(o4,"23 August,2000");
     sports[4].fngetqa(quen,'b');
    sports[4].fngetopt(o1,o2,o3,o4);

     strcpy(quen,"Name the best badminton player of 2018?");
    strcpy(o1,"Lin Dan");
    strcpy(o2,"Lee Chang Wei");
    strcpy(o3,"Gao Ling");
    strcpy(o4,"Wang Yihan");
     sports[5].fngetqa(quen,'b');
    sports[5].fngetopt(o1,o2,o3,o4);

     strcpy(quen,"After 1896,when did Summer Olympics take place in Greece?");
    strcpy(o1,"2004");
    strcpy(o2,"1976");
    strcpy(o3,"1984");
    strcpy(o4,"1988");
     sports[6].fngetqa(quen,'a');
    sports[6].fngetopt(o1,o2,o3,o4);

     strcpy(quen,"How many nations did participate in Summer Olympics of Mexico,1968?");
    strcpy(o1,"98");
    strcpy(o2,"104");
    strcpy(o3,"135");
    strcpy(o4,"112");
     sports[7].fngetqa(quen,'d');
    sports[7].fngetopt(o1,o2,o3,o4);

     strcpy(quen,"When was Real Madrid formed?");
    strcpy(o1,"1912");
    strcpy(o2,"1920");
    strcpy(o3,"1902");
    strcpy(o4,"1926");
     sports[8].fngetqa(quen,'c');
    sports[8].fngetopt(o1,o2,o3,o4);

     strcpy(quen,"In 1998 by defeating whom Mike Tyson became the lineal champion?");
    strcpy(o1,"Michael Spinks");
    strcpy(o2,"Larry Holmes");
    strcpy(o3,"Frank Burno");
    strcpy(o4,"Buster Douglas");
     sports[9].fngetqa(quen,'a');
    sports[9].fngetopt(o1,o2,o3,o4);


     strcpy(quen,"Which country had highest GDP in 2018?");
    strcpy(o1,"UK");
    strcpy(o2,"China");
    strcpy(o3,"USA");
    strcpy(o4,"Germany");
    econ[0].fngetqa(quen,'c');
    econ[0].fngetopt(o1,o2,o3,o4);

     strcpy(quen,"In 2017 which country overtook India as the fastest growing big economy?");
    strcpy(o1,"UK");
    strcpy(o2,"China");
    strcpy(o3,"Italy");
    strcpy(o4,"Germany");
    econ[1].fngetqa(quen,'b');
    econ[1].fngetopt(o1,o2,o3,o4);

     strcpy(quen,"Among the given countries,which country has the highest GDP?");
    strcpy(o1,"Italy");
    strcpy(o2,"Russia");
    strcpy(o3,"India");
    strcpy(o4,"Germany");
    econ[2].fngetqa(quen,'d');
    econ[2].fngetopt(o1,o2,o3,o4);

     strcpy(quen,"When was the famous Indian economist Amartya Sen awarded Nobel Memorial Prize in Economic Sciences?");
    strcpy(o1,"1992");
    strcpy(o2,"1998");
    strcpy(o3,"1989");
    strcpy(o4,"1999");
    econ[3].fngetqa(quen,'b');
    econ[3].fngetopt(o1,o2,o3,o4);

     strcpy(quen,"Which among the following countries is not a member of G20?");
    strcpy(o1,"Turkey");
    strcpy(o2,"South Korea");
    strcpy(o3,"UAE");
    strcpy(o4,"Mexico");
    econ[4].fngetqa(quen,'c');
    econ[4].fngetopt(o1,o2,o3,o4);

     strcpy(quen,"When did 'The Great Depression' begin in USA?");
    strcpy(o1,"September,1929");
    strcpy(o2,"July,1929");
    strcpy(o3,"December,1929");
    strcpy(o4,"January,1930");
    econ[5].fngetqa(quen,'a');
    econ[5].fngetopt(o1,o2,o3,o4);

     strcpy(quen,"Name the sector which contributes most to the Russian exports.");
    strcpy(o1,"Precious Metals");
    strcpy(o2,"Weapons");
    strcpy(o3,"Fossil fuels");
    strcpy(o4,"Forest products");
    econ[6].fngetqa(quen,'c');
    econ[6].fngetopt(o1,o2,o3,o4);

     strcpy(quen,"When did Russia move towards a market oriented economy?");
    strcpy(o1,"1984");
    strcpy(o2,"1989");
    strcpy(o3,"1986");
    strcpy(o4,"1992");
    econ[7].fngetqa(quen,'c');
    econ[7].fngetopt(o1,o2,o3,o4);

    strcpy(quen,"Who played a major role in an unexpected revival of German economy after world war 2?");
    strcpy(o1,"Ludwig Erhard");
    strcpy(o2,"Peter Bofinger");
    strcpy(o3,"Walter Eucken");
    strcpy(o4,"Wilhelm Abel");
    econ[8].fngetqa(quen,'c');
    econ[8].fngetopt(o1,o2,o3,o4);

    strcpy(quen,"Which famous Thai economist was Secretary General of UNCTAD from 2005 to 2013?");
    strcpy(o1,"Supachai Panitchpakdi");
    strcpy(o2,"Chaturon Chaisang");
    strcpy(o3,"Puey Ungphakom");
    strcpy(o4,"Somkid Jatusripitak");
    econ[9].fngetqa(quen,'a');
    econ[9].fngetopt(o1,o2,o3,o4);


    strcpy(quen,"Who among the following is not associated with medicine in ancient India?");
    strcpy(o1,"Charaka");
    strcpy(o2,"Susruta");
    strcpy(o3,"Aryabhatta");
    strcpy(o4,"Dhanvantri");
    hist[0].fngetqa(quen,'c');
    hist[0].fngetopt(o1,o2,o3,o4);

     strcpy(quen,"Who was defeated by Babur in first battle of Panipat?");
    strcpy(o1,"Ibrahim Lodhi");
    strcpy(o2,"Feroz Tughlaq");
    strcpy(o3,"Qutab ud din");
    strcpy(o4,"Sikandar Lodhi");
    hist[1].fngetqa(quen,'a');
    hist[1].fngetopt(o1,o2,o3,o4);

    strcpy(quen,"What post did Francisco De Almeida hold in India?");
    strcpy(o1,"English Viceroy");
    strcpy(o2,"Portugese Viceroy");
    strcpy(o3,"French Viceroy");
    strcpy(o4,"Dutch Viceroy");
    hist[2].fngetqa(quen,'b');
    hist[2].fngetopt(o1,o2,o3,o4);

    strcpy(quen,"The Sultan who called him 'Naib-e-Khuda was?");
    strcpy(o1,"Balban");
    strcpy(o2,"Iltutmish");
    strcpy(o3,"Alauddin Khilji");
    strcpy(o4,"Ibrahim Lodhi");
    hist[3].fngetqa(quen,'a');
    hist[3].fngetopt(o1,o2,o3,o4);

    strcpy(quen,"The  Sikh Guru who was killed on the orders of Aurangzeb was?");
    strcpy(o1,"Guru Ramdas");
    strcpy(o2,"Guru Tegh Bahadur");
    strcpy(o3,"Guru Gobind Singh");
    strcpy(o4,"Guru Arjun Dev");
    hist[4].fngetqa(quen,'b');
    hist[4].fngetopt(o1,o2,o3,o4);

     strcpy(quen,"The earliest known Indian script is?");
    strcpy(o1,"Devanagri");
    strcpy(o2,"Kharosti");
    strcpy(o3,"Mori");
    strcpy(o4,"Brahmi");
    hist[5].fngetqa(quen,'d');
    hist[5].fngetopt(o1,o2,o3,o4);

    strcpy(quen,"Which of the following ancient towns was home to three scholar sages Kapila,Gargi and Maitreya?");
    strcpy(o1,"Kaashi");
    strcpy(o2,"Mithila");
    strcpy(o3,"Ujjaini");
    strcpy(o4,"Patliputra");
    hist[6].fngetqa(quen,'c');
    hist[6].fngetopt(o1,o2,o3,o4);

    strcpy(quen,"In which year the battle between Porus and Alexander took place?");
    strcpy(o1,"335 BC");
    strcpy(o2,"320 BC");
    strcpy(o3,"326 BC");
    strcpy(o4,"324 BC");
    hist[7].fngetqa(quen,'c');
    hist[7].fngetopt(o1,o2,o3,o4);

    strcpy(quen,"What do the paintings of Ajanta depict?");
    strcpy(o1,"Ramayana");
    strcpy(o2,"Mahabhrata");
    strcpy(o3,"Jatakas");
    strcpy(o4,"Panchtantra");
    hist[8].fngetqa(quen,'c');
    hist[8].fngetopt(o1,o2,o3,o4);

    strcpy(quen,"When did The Magadhan king Ajatashatru die?");
    strcpy(o1,"475 BC");
    strcpy(o2,"460 BC");
    strcpy(o3,"463 BC");
    strcpy(o4,"456 BC");
    hist[9].fngetqa(quen,'b');
    hist[9].fngetopt(o1,o2,o3,o4);

    long int sum=0;

    char x;

    for(int i=0;i<10;i++)
    {

        index= rand()%4;
        //cout<<i<<endl;
        //cout<<index<<endl;
        cout<<endl;
          switch(index)
        {

        case 0:Sleep(2000);
                cout<<"So the Qno. "<<(i+1)<<" on your Computer Screen is"<<endl;
                //PlaySound(TEXT("Kbc.wav"),NULL,SND_SYNC);
                //Question of History display
                hist[i].printq();
                Sleep(3000);
                cout<<"And your Options are: "<<endl;

                hist[i].printa();
                hist[i].printb();
                hist[i].printc();
                hist[i].printd();
                //Options of the particular History question which is displayed
                Sleep(1000);
                for(;;)
               {
                cout<<"Do you want to:"<<endl;
                cout<<"1. Answer this Question"<<endl<<"2. Use a Life Line"<<endl<<"3. Quit"<<endl;
                cin>>choice;
                if(choice==1)
                {
                    cout<<"Answer chosen"<<endl;
                    x=fnAnswer(hist[i]);
                    totalPrize[i]= totalPrize[i]+prize[i];
                    cout<<"Congratulations, You have won Rs. "<<totalPrize[i]<<endl;

                    break;
                }
                else if(choice==2)
                {
                    cout<<"Life-Line Chosen"<<endl;
                    lifeLines(hist[i]);
                   /* count++;
                    if(count=3)
                    {cout<<"You can't use any Lifeline now"<<endl;}*/

                }
                else if(choice==3)
                {
                    cout<<"Quit Enabled"<<endl;
                    cout<<"Thanks for playing with us...Have a nice day"<<endl;
                    cout<<"You recieved Rs. "<<totalPrize[i]<<endl;
                   return 0;
                }
                else
                {
                    cout<<"Invalid Chioice"<<endl;
                    return 0;
                }
        }
    break;

case 1:         cout<<"So the Qno. "<<(i+1)<<" on your Computer Screen is"<<endl;
             //   PlaySound(TEXT("Kbc.wav"),NULL,SND_SYNC);
                Sleep(2000);
                geog[i].printq();
                //Question of History display
                Sleep(3000);
                cout<<"And your Options are: "<<endl;

                geog[i].printa();
                geog[i].printb();
                geog[i].printc();
                geog[i].printd();
                //Options of the particular History question which is displayed
                Sleep(1000);
                for(;;)
               {
                cout<<"Do you want to:"<<endl;
                cout<<"1. Answer this Question"<<endl<<"2. Use a Life Line"<<endl<<"3. Quit"<<endl;
                cin>>choice;
                if(choice==1)
                {
                    cout<<"Answer chosen"<<endl;
                    x=fnAnswer(geog[i]);
                    totalPrize[i]= totalPrize[i]+prize[i];
                    cout<<"Congratulations, You have won Rs. "<<totalPrize[i]<<endl;

                    //fnAnswer();
                    break;
                }
                else if(choice==2)
                {
                    cout<<"Life-Line Chosen"<<endl;
                    lifeLines(geog[i]);
                   /* count++;
                    if(count=3)
                    {cout<<"You can't use any Lifeline now"<<endl;}*/
                     break;
                }
                else if(choice==3)
                {
                    cout<<"Quit Enabled"<<endl;
                    cout<<"Thanks for playing with us...Have a nice day"<<endl;
                    cout<<"You recieved Rs. "<<totalPrize[i]<<endl;
                    return 0;
                }
                else
                {
                    cout<<"Invalid choice"<<endl;
                    return 0;
                }

        }
        break;



        case 2:
                cout<<"So the Qno. "<<(i+1)<<" on your Computer Screen is"<<endl;
                //PlaySound(TEXT("Kbc.wav"),NULL,SND_SYNC);
                Sleep(2000);
                econ[i].printq();
                //Question of History display
                Sleep(3000);
                cout<<"And your Options are: "<<endl;
                econ[i].printa();
                econ[i].printb();
                econ[i].printc();
                econ[i].printd();
                //Options of the particular History question which is displayed
                Sleep(1000);
                for(;;)
               {
                cout<<"Do you want to:"<<endl;
                cout<<"1. Answer this Question"<<endl<<"2. Use a Life Line"<<endl<<"3. Quit"<<endl;
                cin>>choice;
                if(choice==1)
                {
                    cout<<"Answer chosen"<<endl;
                    x=fnAnswer(econ[i]);
                    totalPrize[i]= totalPrize[i]+prize[i];
                    cout<<"Congratulations, You have won Rs. "<<totalPrize[i]<<endl;
                    break;
                }
                else if(choice==2)
                {
                    cout<<"Life-Line Chosen"<<endl;
                    lifeLines(econ[i]);
                    count++;
                    /* count++;
                    if(count=3)
                    {cout<<"You can't use any Lifeline now"<<endl;}*/
                    break;
                    //fnLife();
                }
                else if(choice==3)
                {
                    cout<<"Quit Enabled"<<endl;
                    cout<<"Thanks for playing with us...Have a nice day"<<endl;
                    cout<<"You recieved Rs. "<<totalPrize[i]<<endl;
                    return 0;
                }
                else
                {
                    cout<<"Invalid choice"<<endl;
                    return 0;
                }
        }
        break;


        case 3:
                cout<<"So the Qno. "<<(i+1)<<" on your Computer Screen is"<<endl;
              //  PlaySound(TEXT("Kbc.wav"),NULL,SND_SYNC);
                Sleep(2000);
                sports[i].printq();
                //Question of History display
                Sleep(3000);
                cout<<"And your Options are: "<<endl;

                sports[i].printa();
                sports[i].printb();
                sports[i].printc();
                sports[i].printd();
                //Options of the particular History question which is displayed
                Sleep(1000);
                for(;;)
               {
                cout<<"Do you want to:"<<endl;
                cout<<"1. Answer this Question"<<endl<<"2. Use a Life Line"<<endl<<"3. Quit"<<endl;
                cin>>choice;
                if(choice==1)
                {
                    cout<<"Answer chosen"<<endl;
                    x=fnAnswer(sports[i]);
                    totalPrize[i]= totalPrize[i]+prize[i];
                    cout<<"Congratulations, You have won Rs. "<<totalPrize[i]<<endl;
                    break;
                }
                else if(choice==2)
                {
                    cout<<"Life-Line Chosen"<<endl;
                    lifeLines(sports[i]);
                    /* count++;
                    if(count=3)
                    {cout<<"You can't use any Lifeline now"<<endl;}*/
                    break;
                    //fnLife();
                }
                else if(choice==3)
                {
                    cout<<"Quit Enabled"<<endl;
                    cout<<"Thanks for playing with us...Have a nice day"<<endl;
                    cout<<"You recieved Rs. "<<totalPrize[i]<<endl;
                    return 0;
                }
                else
                {
                    cout<<"Invalid Choice"<<endl;
                    return 0;
                }
        }
break;


    }

    }


    return 0;
}


/*
*/
