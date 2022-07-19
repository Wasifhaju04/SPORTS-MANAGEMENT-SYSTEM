#include<iostream.h>
#include<conio.h>
#include<dos.h>
#include<string.h>



class Sport
{
  public:
	  char Team1[20],Team2[20],User[20],uname[20],player[20],Toss[10],Venue[20],T[2];
	  int i,Pass,opt,count,c,upass,dd,mm,yyyy,hr,min;

  public:
	  void Login();
	  void Teams_in()
	  {
	    cout<<"\n\t----------------->Teams<-----------------";
	    cout<<"\n\tTeam1:";
	    cin>>Team1;
	    cout<<"\n\tTeam2:";
	    cin>>Team2;
	  }
	  void Teams_out()
	  {
	    cout<<"\n\n\t----------------->Teams<------------------";
	    cout<<"\n\tTeam1:"<<Team1;
	    cout<<"\n\tTeam2:"<<Team2;
	  }
	  void Get_tp();
	  void Put_tp();
};
void Sport::Login()
{
	      cout<<"\n        SportSystem(CRICKET,KABBADI,volleyball,Football)     ";
	      cout<<"\n        ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^     ";
	      cout<<"\n\n        ********************->Menu<-*******************";

		 l:
		 cout<<"\n\t1.Login";
		 cout<<"\n\t2.Register";
		 cout<<"\n\t3.Exit";
		 cout<<"\n\tEnter Option:";
		 cin>>opt;
		 switch(opt)
		 {
		    case 1:
			 login:
			 cout<<"\n\t______________________________________________";
			 cout<<"\n\t>>>>>>>>>>>>>>>WELCOME TO LOGIN<<<<<<<<<<<<<<<";
			 cout<<"\n\t______________________________________________";
			 cout<<"\n\tEnter your Username :";
			 cin>>User;
			 cout<<"\n\tEnter your Password:";
			 cin>>Pass;
			 clrscr();
		    case 2:
			 cout<<"\n\t_______________________________________________";
			 cout<<"\n\t\tWELCOME TO REGISTRATION";
			 cout<<"\n\t_______________________________________________";
			 cout<<"\n\tEnter Uname :";
			 cin>>uname;
			 cout<<"\n\tEnter uPassword:";
			 cin>>upass;
			 if((strcmp(uname,User)==0) && (upass==Pass))
			 {
			   count=1;
			 cout<<"\n\t_______________________________________________";
			 cout<<"\n\t\tYOU ARE SUCESSFULLY REGISTRATION";
			 cout<<"\n\t_______________________________________________";
			 }
			 else
			 {
			 cout<<"\n\tPLEASE CHECK YOUR USENAME AND PASSWORD";
			  goto login;
			 }
			 break;
		    case 3:

			 break;
		    } //End of Switch

		    if(count==1)
		    {
		      cout<<"\n\tEnter any key if you ready to continue";
		      getch();
		      clrscr();
		    }
}
void Sport::Get_tp()
{
   cout<<"Player=";
   cin>>player;

}
void Sport::Put_tp()
{
    cout<<player<<endl;
}

class Cricket: public Sport
{
  public:
	char choice[10];
	int overs,ball,r,r1,fourths,fourths1,w,w1,six,six1;
	int Total1,Total2,wicket1,wicket2;
	long Time;
  public:
	void Tossing();
	void Info();
	void Scoresheet1();
	void Scoresheet2();
	void match1();
	void match2();
	void Final_re();
};
void Cricket::Info()
{

     cout<<"\n\tEnter Venue:";
     cin>>Venue;
     cout<<"\n\tEnter no. of Overs:";
     cin>>overs;
     ball=overs*6;

     cout<<"\n\tEnter Date(DD/MM/yyyy):";
     cin>>dd>>mm>>yyyy;

     cout<<"\n\tEnter Time(hr:min(Am/Pm)):";
     cin>>hr>>min>>T;
}

void Cricket::Tossing()
  {
     cout<<"\n\tToss(Head/Tail):";
     cin>>Toss;

     cout<<"\n\t=========================================";
     cout<<"\n\t*****************Tossing*****************";
     cout<<"\n\t=========================================";

     if((strcmp(Toss,"Head")==0))
     {
	  cout<<"\n\tToss Won by Team1:"<<Team1<<endl;
	  cout<<"\n\tEnter choice either Bowling or Batting:";
	  cin>>choice;
	  if((strcmp(choice,"Batting")==0))
	  {
	       cout<<"\n\t"<<Team1<<" Opted to "<<choice<<endl;
	       cout<<"\t"<<Team2<<" : Second team keep Bowlng";
	       match1();
	       match2();
	  }
	  else if((strcmp(choice,"Bowling")==0))
	  {
	       cout<<"\n\t"<<Team1<<" Opted to "<<choice<<endl;
	       cout<<"\t"<<Team2<<": Second team keep Batting";
	       match1();
	       match2();
	  }
     }
     else if((strcmp(Toss,"Tail")==0))
     {
	   cout<<"\n\tToss Won by Team2: "<<Team2;
	   cout<<"\n\tEnter choice either Bowling or Batting:";
	   cin>>choice;
	   if((strcmp(choice,"Batting")==0))
	   {
		cout<<"\n\t"<<Team2<<" Opted to "<<choice<<endl;
		cout<<"\t"<<Team1<<" : Second team keep Bowlng";
		match1();
		match2();
	    }
	    else if((strcmp(choice,"Bowling")==0))
	    {
		cout<<"\n\t"<<Team2<<" Opted to "<<choice<<endl;
		cout<<"\t"<<Team1<<": Second team keep Batting";
		match1();
		match2();
	    }
      }
     else
     {
	  cout<<"\n\tToss:";
	  cin>>Toss;
     }
  }

void Cricket::match1()
  {   int choice,runs,fb=100,b_dis;;
      char B_man[20],Bowler[20];
      fourths=0;
      six=0;
      r=0;
      w=0;
       wicket1=0;

       cout<<"\n\t<<<<<<<<<<<<<<<<<<<<<*>>>>>>>>>>>>>>>>>>>>";
       cout<<"\n\t                 Match 1";
       cout<<"\n\t<<<<<<<<<<<<<<<<<<<<<*>>>>>>>>>>>>>>>>>>>>";
       cout<<"\n\n\tEnter Batsman 1:";
       cin>>B_man;
       cout<<"\n\tEnter Bowler 1:";
       cin>>Bowler;
       if(ball>6)
	   {
	     overs+=overs;
	     cout<<"\n\tEnter next baller:";
	     cin>>Bowler;
	   }
      cout<<"\n\t___________________________________________"<<endl;
      for(i=1;i<=ball;i++)
      {
       overs=1;
       cout<<"\n\tEnter Choice:";
       cout<<"\n\t1.If run takes";
       cout<<"\n\t2.Check ball is less than fb dis/4'S takes/ 6's takes";
       cout<<"\n\t3.If Ball is Wide";
       cout<<"\n\t4.Out:";
       cin>>choice;

       switch(choice)
       {
	   case 1:
		 cout<<"\n\tEnter how many runs take by Batsmans:";
		 cin>>runs;
		 r=r+runs;
		 Total1=Total1+runs;
		 break;

	   case 2:
		 cout<<"\n\tEnter Dis of hitted ball:";
		 cin>>b_dis;
		 if(b_dis<fb)
		 {
		    r=r+2;
		   Total1=Total1+2;
		 }
		 else if(b_dis==fb)
		 {
		    fourths=fourths+4;
		   Total1=Total1+4;
		 }
		 else if(b_dis>=fb)
		 {
		   six=six+6;
		   Total1=Total1+6;
		 }
		 break;
	   case 3:
		 cout<<"\n\tWide Ball:";
		 w++;
		 Total1=Total1+1;
		 break;
	   case 4:
		 cout<<"\n\t________________-OUT-__________________";

		 wicket1++;
		 cout<<"\n\tOUT Batman:"<<B_man;
		 cout<<"\n\tEnter Batsman 1:";
		 cin>>B_man;
		 break;
	   default:
		 cout<<"\n\tNo Ball:";
	   }
      }
  }
  void Cricket::match2()
  {    int choice,fb=100,b_dis;
       char B_man[20],Bowler[20];
       int  runs=0;
       r1=0;
       fourths1=0;
       six1=0;
       w1=0;
       wicket2=0;

       cout<<"\n\t<<<<<<<<<<<<<<<<<<<<<*>>>>>>>>>>>>>>>>>>>>";
       cout<<"\n\t                  Match 2";
       cout<<"\n\t<<<<<<<<<<<<<<<<<<<<<*>>>>>>>>>>>>>>>>>>>>";
       cout<<"\n\tEnter no. of Overs:";
       cin>>overs;
       ball=overs*6;
       cout<<"\n\tEnter Batsman 1:";
       cin>>B_man;
       cout<<"\n\tEnter Bowler 1:";
       cin>>Bowler;
       if(ball>6)
	   {
	     overs+=overs;
	     cout<<"\n\tEnter next baller:";
	     cin>>Bowler;
	   }
      cout<<"\n\t________________________________________________"<<endl;
      for(i=1;i<=ball;i++)
      {
       overs=1;
       cout<<"\n\tEnter Choice:";
       cout<<"\n\t1.If run takes";
       cout<<"\n\t2.Check ball is less than fb dis/4'S takes/ 6's takes";
       cout<<"\n\t3.If Ball is Wide";
       cout<<"\n\t4.Out:";
       cin>>choice;

       switch(choice)
       {
	   case 1:
		 cout<<"\n\tEnter how many runs take by Batsmans:";
		 cin>>runs;
		 r1=runs+r1;
		 Total2=Total2+runs;
		 break;

	   case 2:
		 cout<<"\n\tEnter Dis of hitted ball:";
		 cin>>b_dis;
		 if(b_dis<fb)
		 {
		   r1=r1+runs;
		   Total2=Total2+2;
		 }
		 else if(b_dis==fb)
		 {
		   fourths1=fourths1+4;
		   Total2=Total2+4;
		 }
		 else if(b_dis>=fb)
		 {
		   six1=six1+6;
		   Total2=Total2+6;
		 }
		 break;
	   case 3:
		 cout<<"\n\tWide Ball:";
		 w1++;
		 Total2=Total2+1;
		 break;
	   case 4:
		 cout<<"\n\t_______________-OUT-_________________";

		 wicket2++;
		 cout<<"\n\tOUT Batman:"<<B_man;
		 cout<<"\n\tEnter Batsman 1:";
		 cin>>B_man;
		 break;
	   default:
		 cout<<"\n\tNo Ball:";

	   }
      }
  }
  void Cricket::Scoresheet1()
  {
     cout<<"\n\t|________________________________________________________|";
     cout<<"\n\t|Match Between:"<<Team1<<" vs "<<Team2<<"|";
     cout<<"\n\t|Overs:"<<overs<<" |";
     cout<<"\t|ball:"<<ball<<" |";
     cout<<"\t|Venue:"<<Venue<<" |";
     cout<<"\n\t|Date(DD/MM/yyyy):"<<dd<<"/"<<mm<<"/"<<yyyy<<"|";
     cout<<"\t|Time(hr:min(Am/Pm))="<<hr<<":"<<min<<" "<<T<<"|";
     cout<<"\n\t|________________________________________________________|";
     cout<<"\n\t|________________________________________________________|";
     cout<<"\n\t|Name of Players|"<<"\t|Runs|"<<"\t|4's|"<<"\t|6's|"<<"\t|wideball|";
     cout<<"\n\t|Batsman 1:     |"<<"\t|"<<r<<"|"<<"\t|"<<fourths<<"|"<<"\t|"<<six<<"|\t|"<<w<<"|";
     cout<<"\n\t|Batsman 2:     |";
     cout<<"\n\t|Batsman 3:     |";
     cout<<"\n\t|Batsman 4:     |";
     cout<<"\n\t|Batsman 5:     |";
     cout<<"\n\t|Batsman 6:     |";
     cout<<"\n\t|Batsman 7:     |";
     cout<<"\n\t|Batsman 8:     |";
     cout<<"\n\t|Batsman 9:     |";
     cout<<"\n\t|Batsman 10:     |";
     cout<<"\n\t|Batsman 11:     |";
     cout<<"\n\t|________________________________________________________|";
     cout<<"\n\t*Total Score:"<<Total1;
     cout<<"\n\t*Wickets:"<<wicket1;
     cout<<"\n\t|________________________________________________________|";


  }
  void Cricket::Scoresheet2()
  {
     cout<<"\n\t|________________________________________________________|";
     cout<<"\n\t|Match Between:"<<Team2<<" vs "<<Team1<<"|";
     cout<<"\n\t|Overs:"<<overs<<" |";
     cout<<"\n\t|ball:"<<ball<<" |";
     cout<<"\n\t|Venue:"<<Venue<<" |";
     cout<<"\n\t|Date(DD/MM/yyyy):"<<dd<<"/"<<mm<<"/"<<yyyy<<"|";
     cout<<"\t\t|Time(hr:min(Am/Pm))="<<hr<<":"<<min<<" "<<T<<"|";
     cout<<"\n\t|________________________________________________________|";
     cout<<"\n\t|________________________________________________________|";
     cout<<"\n\t|Name of Players|"<<"\t|Runs|"<<"\t|4's|"<<"\t|6's|"<<"\t|wideball|";
     cout<<"\n\t|Batsman 1:     |"<<"\t|"<<r1<<"|"<<"\t|"<<fourths1<<"|"<<"\t|"<<six1<<"|\t|"<<w<<"|";
     cout<<"\n\t|Batsman 2:     |";
     cout<<"\n\t|Batsman 3:     |";
     cout<<"\n\t|Batsman 4:     |";
     cout<<"\n\t|Batsman 5:     |";
     cout<<"\n\t|Batsman 6:     |";
     cout<<"\n\t|Batsman 7:     |";
     cout<<"\n\t|Batsman 8:     |";
     cout<<"\n\t|Batsman 9:     |";
     cout<<"\n\t|Batsman 10:     |";
     cout<<"\n\t|Batsman 11:     |";
     cout<<"\n\t|________________________________________________________|";
     cout<<"\n\t|*Total Score:"<<Total2<<"|";
     cout<<"\n\t|*Wickets:"<<wicket2<<"|";
     cout<<"\n\t|________________________________________________________|";


  }
 void Cricket::Final_re()
 {
      if((strcmp(Toss,"Head")==0))
      {
	    if((strcmp(choice,"Batting")==0))
	    {
		 if(Total1>Total2)
		 {
		      cout<<"\n\t<<<<<<<<<<<<<<>WINNER<>>>>>>>>>>>>>>>>>";
		      cout<<"\n\tTeam1:"<<Team1<<" is Winner";
		      cout<<"\n\t<<<<<<<<<<<<<<>WINNER<>>>>>>>>>>>>>>>>>";
		 }
		 else if((Total1<Total2) || (wicket1>wicket2))
		 {
		      cout<<"\n\t<<<<<<<<<<<<<<>WINNER<>>>>>>>>>>>>>>>>>";
		      cout<<"\n\tTeam1 "<<Team1<<" is Winner";
		      cout<<"\n\t<<<<<<<<<<<<<<>WINNER<>>>>>>>>>>>>>>>>>";
		 }
		 else if((Total1==Total2) && (wicket1==wicket2))
		 {

		      cout<<"\n\t###############>Super Over<################";
		      cout<<"\n\tStart the Game by 1 Over to both  teams";
		      cout<<"\n\t###############>Super Over<################";
		      match1();
		      match2();
		 }
	    }
	    else if((strcmp(choice,"Bowling")==0))
	    {
		 if(Total1>Total2)
		 {
		      cout<<"\n\t<<<<<<<<<<<<<<>WINNER<>>>>>>>>>>>>>>>>>";
		      cout<<"\n\tTeam2:"<<Team2<<" is Winner";
		      cout<<"\n\t<<<<<<<<<<<<<<>WINNER<>>>>>>>>>>>>>>>>>";
		 }
		 else if((Total1<Total2) || (wicket1>wicket2))
		 {
		      cout<<"\n\t<<<<<<<<<<<<<<>WINNER<>>>>>>>>>>>>>>>>>";
		      cout<<"\n\tTeam1:"<<Team2<<" is Winner";
		      cout<<"\n\t<<<<<<<<<<<<<<>WINNER<>>>>>>>>>>>>>>>>>";
		 }
		 else if((Total1==Total2) && (wicket1==wicket2))
		 {

		      cout<<"\n\t###############>Super Over<################";
		      cout<<"\n\tStart the Game by 1 Over to both  teams";
		      cout<<"\n\t###############>Super Over<################";
		      match1();
		      match2();
		 }
	    }
      }
      else if((strcmp(Toss,"Head")==0))
      {
	    if((strcmp(choice,"Batting")==0))
	    {
		 if(Total1>Total2)
		 {
		      cout<<"\n\t<<<<<<<<<<<<<<>WINNER<>>>>>>>>>>>>>>>>>";
		      cout<<"\n\tTeam1:"<<Team2<<" is Winner";
		      cout<<"\n\t<<<<<<<<<<<<<<>WINNER<>>>>>>>>>>>>>>>>>";
		 }
		 else if((Total1<Total2) || (wicket1>wicket2))
		 {
		      cout<<"\n\t<<<<<<<<<<<<<<>WINNER<>>>>>>>>>>>>>>>>>";
		      cout<<"\n\tTeam1:"<<Team2<<" is Winner";
		      cout<<"\n\t<<<<<<<<<<<<<<>WINNER<>>>>>>>>>>>>>>>>>";
		 }
		 else if((Total1==Total2) && (wicket1==wicket2))
		 {

		      cout<<"\n\t###############>Super Over<################";
		      cout<<"\n\tStart the Game by 1 Over to both  teams";
		      cout<<"\n\t###############>Super Over<################";
		      match1();
		      match2();
		 }
	    }
	    else if((strcmp(choice,"Bowling")==0))
	    {
		 if(Total1>Total2)
		 {
		      cout<<"\n\t<<<<<<<<<<<<<<>WINNER<>>>>>>>>>>>>>>>>>";
		      cout<<"\n\tTeam2:"<<Team1<<" is Winner";
		      cout<<"\n\t<<<<<<<<<<<<<<>WINNER<>>>>>>>>>>>>>>>>>";
		 }
		 else if((Total1<Total2) || (wicket1>wicket2))
		 {
		      cout<<"\n\t<<<<<<<<<<<<<<>WINNER<>>>>>>>>>>>>>>>>>";
		      cout<<"\n\tTeam1:"<<Team1<<" is Winner";
		      cout<<"\n\t<<<<<<<<<<<<<<>WINNER<>>>>>>>>>>>>>>>>>";
		 }
		 else if((Total1==Total2) && (wicket1==wicket2))
		 {

		      cout<<"\n\t##############>Super Over<###############";
		      cout<<"\n\tStart the Game by 1 Over to both  teams";
		      cout<<"\n\t##############>Super Over<###############";
		      match1();
		      match2();

		 }
	    }
      }


}
class Kabbadi: public Sport
{
    public:
	    int D;
	    int Bonus1,Bonus2,point1,point2,Total1,Total2,out,choice,o1,o2;
	    char T1Raider[20],T2Raider[20];
    public:
	  void Info();
	  void d_Info();
	  void Match();
	  void Scoresheet();
	  void Final_re();
};
void Kabbadi::Info()
{

     cout<<"\n\tEnter Venue:";
     cin>>Venue;

     cout<<"\n\tEnter Date(DD/MM/yyyy):";
     cin>>dd>>mm>>yyyy;

     cout<<"\n\tEnter Time(hr:min(Am/Pm)):";
     cin>>hr>>min>>T;
     cout<<"\n\tDuration of per Match(min):";
     cin>>D;
}
void Kabbadi::Match()
  {

       cout<<"\n\tToss(Head/Tail):";
       cin>>Toss;


     if((strcmp(Toss,"Head")==0))
     {

       cout<<"\n\t<<<<<<<<<<<<<<<<<<<<<*>>>>>>>>>>>>>>>>>>>>";
       cout<<"\n\t                   Match ";
       cout<<"\n\t<<<<<<<<<<<<<<<<<<<<<*>>>>>>>>>>>>>>>>>>>>";
       cout<<"\n\tToss Won by Team1:"<<Team1<<endl;
       cout<<"\n\tStart Raiding From Team 1";

       cout<<"\n\n\tEnter Raider 1:";
       cin>>T1Raider;
	  int var=5;
       do{
       cout<<"\n\tEnter Choice:";
       cout<<"\n\t1.If Raider outs Defender";
       cout<<"\n\t2.If Touched Bonus line";
       cout<<"\n\t3.If Raider is out:";
       cout<<"\n\t3.If Time Out:";
       cin>>choice;
       switch(choice)
       {
	   case 1:
		  if(T1Raider)
		  {
		    cout<<"\n\tEnter no of defenders which outs by Raider:";
		    cin>>out;
		    point1=point1+out;
		    Total1=Total1+point1;
		      cout<<"\n\n\tEnter Raider of Team2:";
		      cin>>T2Raider;

		  }
		  else if(T2Raider)
		  {
		     cout<<"\n\tEnter no of defenders which outs by Raider:";
		     cin>>out;
		     point2=point2+out;
		     Total2=Total2+point2;
		       cout<<"\n\n\tEnter Raider of Team1:";
		       cin>>T1Raider;

		  }
		  break;
	   case 2:
		  if(T1Raider)
		  {

		    Bonus1=Bonus1+1;
		    Total1=Total1+Bonus1;
		      cout<<"\n\n\tEnter Raider of Team2:";
		      cin>>T2Raider;

		  }
		  else if(T2Raider)
		  {
		     Bonus2=Bonus2+1;
		     Total2=Total2+Bonus2;
		       cout<<"\n\n\tEnter Raider of Team1:";
		       cin>>T1Raider;

		  }


		 break;
	   case 3:
		  if(T1Raider)
		  {
		      o2=o2+1;
		      Total2=Total2+o2;
		      cout<<"\n\n\tEnter Raider of Team 2:";
		      cin>>T2Raider;

		  }
		  else if(T2Raider)
		  {
		       o1=o1+1;
		       Total1=Total1+o1;
		       cout<<"\n\n\tEnter Raider of Team 1:";
		       cin>>T1Raider;

		  }



		 break;
	   case 4:
		  if(T1Raider)
		  {
		      cout<<"\n\n\tEnter Raider of Team 2:";
		      cin>>T2Raider;

		  }
		  else if(T2Raider)
		  {
		       cout<<"\n\n\tEnter Raider Team 1:";
		       cin>>T1Raider;
		  }
		 break;

	   }
	   var--;
      }while(var!=0);
      }
     else if(((strcmp(Toss,"Tail"))==0))
     {

       cout<<"\n\t<<<<<<<<<<<<<<<<<<<<<*>>>>>>>>>>>>>>>>>>>>";
       cout<<"\n\t                   Match ";
       cout<<"\n\t<<<<<<<<<<<<<<<<<<<<<*>>>>>>>>>>>>>>>>>>>>";
	cout<<"\n\tToss Won by Team2: "<<Team2;
	cout<<"\n\tStart Raiding From Team 2";
	cout<<"\n\n\tEnter Raider 1 of Team2:";
	cin>>T2Raider;
	 int var=5;
	do{
       cout<<"\n\tEnter Choice:";
       cout<<"\n\t1.If Raider outs Defender";
       cout<<"\n\t2.If Touched Bonus line";
       cout<<"\n\t3.If Raider is out:";
       cout<<"\n\t3.If Time Out:";
       cin>>choice;
       switch(choice)
       {
	   case 1:
		  if(T1Raider)
		  {
		    cout<<"\n\tEnter no of defenders which outs by Raider:";
		    cin>>out;
		    point1=point1+out;
		    Total1=Total1+point1;
		      cout<<"\n\n\tEnter Raider Team 2:";
		      cin>>T2Raider;

		  }
		  else if(T2Raider)
		  {
		     cout<<"\n\tEnter no of defenders which outs by Raider:";
		     cin>>out;
		     point2=point2+out;
		     Total2=Total2+point2;
		     cout<<"\n\n\tEnter Raider Team 1:";
		     cin>>T1Raider;

		  }
		  break;
	   case 2:
		  if(T1Raider)
		  {

		    Bonus1=Bonus1+1;
		    Total1=Total1+Bonus1;
		      cout<<"\n\n\tEnter Raider Team 2:";
		      cin>>T2Raider;

		  }
		  else if(T2Raider)
		  {
		     Bonus2=Bonus2+1;
		     Total2=Total2+Bonus1;
		       cout<<"\n\n\tEnter Raider Team 1:";
		       cin>>T1Raider;

		  }


		 break;
	   case 3:
		  if(T1Raider)
		  {
		      o2=o2+1;
		      Total2=Total2+o2;
		      cout<<"\n\n\tEnter Raider Team 2:";
		      cin>>T2Raider;

		  }
		  else if(T2Raider)
		  {
		       o1=o1+1;
		       Total1=Total1+o1;
		       cout<<"\n\n\tEnter Raider Team 1:";
		       cin>>T1Raider;
		  }
		 break;
	   case 4:
		  if(T1Raider)
		  {
		      cout<<"\n\n\tEnter Raider Team 2:";
		      cin>>T2Raider;

		  }
		  else if(T2Raider)
		  {
		       cout<<"\n\n\tEnter Raider Team 1:";
		       cin>>T1Raider;
		  }
		 break;

	   }
	   var--;
       }while(var!=5);
      }
     else
     {
	  cout<<"\n\tToss:";
	  cin>>Toss;
     }
  }
  void Kabbadi::d_Info()
  {
     cout<<"\n\t|________________________________________________________|";
     cout<<"\n\t|Match Between:"<<Team1<<" vs "<<Team2<<"|";
     cout<<"\n\t|Date(DD/MM/yyyy):"<<dd<<"/"<<mm<<"/"<<yyyy<<"|";
     cout<<"\t\t|Time(hr:min(Am/Pm))="<<hr<<":"<<min<<" "<<T<<"|";
     cout<<"\n\t|Duration:"<<D<<" min|";
     cout<<"\n\t|________________________________________________________|";
  }
  void Kabbadi::Scoresheet()
  {
     cout<<"\n\t|********************************************************|";
     cout<<"\n\t|                       Team1                            |";
     cout<<"\n\t|********************************************************|";
     cout<<"\n\t|Total Points of Team 1|"<<"\t|Bonus|"<<"\t|RaiderOut|";
     cout<<"\n\t|"<<point1<<"               |\t "<<Bonus1<<"|\t    |"<<o1<<"      |";
     cout<<"\n\t|________________________________________________________|";
     cout<<"\n\t*Total Score:"<<Total1<<"|";
     cout<<"\n\t|________________________________________________________|";
     cout<<"\n\n\n\t|********************************************************|";
     cout<<"\n\t|                       Team2                            |";
     cout<<"\n\t|********************************************************|";
     cout<<"\n\t|Total Points of Team 2|"<<"\t|Bonus|"<<"\t|RaiderOut|";
     cout<<"\n\t|"<<point2<<"\t|\t"<<Bonus2<<"\t|"<<o2<<"\t|";
     cout<<"\n\t|________________________________________________________|";
     cout<<"\n\t*Total Score:"<<Total2<<"|";
     cout<<"\n\t|________________________________________________________|";
  }
  void Kabbadi::Final_re()
 {

		 if(Total1>Total2)
		 {
		      cout<<"\n\t<<<<<<<<<<<<<<>WINNER<>>>>>>>>>>>>>>>>>";
		      cout<<"\n\tTeam1:"<<Team1<<" is Winner";
		      cout<<"\n\t<<<<<<<<<<<<<<>WINNER<>>>>>>>>>>>>>>>>>";
		 }
		 else if(Total1<Total2)
		 {
		      cout<<"\n\t<<<<<<<<<<<<<<>WINNER<>>>>>>>>>>>>>>>>>";
		      cout<<"\n\tTeam1:"<<Team2<<" is Winner";
		      cout<<"\n\t<<<<<<<<<<<<<<>WINNER<>>>>>>>>>>>>>>>>>";
		 }
		 else if(Total1==Total2)
		 {

		      cout<<"\n\t##################>Tie<###################";
		      cout<<"\n\tStart the Game For 2Minutes";
		      cout<<"\n\t##################>Tie<###################";
		      Match();
		 }



}
class Vollyball :public Sport
{
  public:
	int choice,service1,service2,v,point1,point2,Total1,Total2,out,D,Bonus1,Bonus2,o1,o2;
	char Team[20],T1Raider[20],T2Raider[20];
  public:
	  void Info();
	  void d_Info();
	  void Match();
	  void Scoresheet();
	  void Final_re();
};
void Vollyball::Info()
{
     cout<<"\n\tEnter Venue:";
     cin>>Venue;

     cout<<"\n\tEnter Date(DD/MM/yyyy):";
     cin>>dd>>mm>>yyyy;

     cout<<"\n\tEnter Time(hr:min(Am/Pm)):";
     cin>>hr>>min>>T;
     cout<<"\n\tDuration of per Match(min):";
     cin>>D;
}
void Vollyball::Match()
  {

       cout<<"\n\tToss(Head/Tail):";
       cin>>Toss;


     if((strcmp(Toss,"Head")==0))
     {

       cout<<"\n\t<<<<<<<<<<<<<<<<<<<<<*>>>>>>>>>>>>>>>>>>>>";
       cout<<"\n\t                   Match ";
       cout<<"\n\t<<<<<<<<<<<<<<<<<<<<<*>>>>>>>>>>>>>>>>>>>>";
       cout<<"\n\tToss Won by Team1:"<<Team1<<endl;
       cout<<"\n\tfirst Service by Team 1";
	int v=5;

	do
	{
       cout<<"\n\tEnter Choice:";
       cout<<"\n\t1.If Sucessfully Servicing the ball";
       cout<<"\n\t2.Hitting Ball";
       cout<<"\n\t3.If Ball is Fallen by defender's team:";
       cout<<"\n\t4.If Ball is Under the Net";
       cin>>choice;
       switch(choice)
       {
	   case 1:
		   cout<<"\n\tEnter value of variable(Team1=0/Team2=1):";
		   cin>>v;
		  if(v==0)
		  {
		    service1=service1+2;
		    Total1=Total1+service1;
		  }
		  else if(v==1)
		  {
		    service2=service2+2;
		    Total2=Total2+service2;
		  }
		  break;
	   case 2:
		  cout<<"\n\tBall is hitted by which team Either T1 or T2:";
		  cin>>Team;
		  if(strcmp(Team,"T1")==0)
		  {
		    point1=point1+1;
		    Total1=Total1+point1;

		  }
		  else if(strcmp(Team,"T1")==0)
		  {
		     point2=point2+1;
		     Total2=Total2+point2;


		  }
		   break;
	   case 3:
		  cout<<"\n\tBall is fallen by dependers team(T1,T2):";
		  cin>>Team;
		  if(strcmp(Team,"T1")==0)
		  {
		    point2=point2+1;
		    Total2=Total2+point2;

		  }
		  else if(strcmp(Team,"T1")==0)
		  {
		     point1=point1+1;
		     Total1=Total1+point1;


		  }
		   break;

	   case 4:
		  cout<<"\n\tBall is hitted under the net(By T1/T2):";
		  cin>>Team;
		  if(strcmp(Team,"T1")==0)
		  {
		    point2=point2+1;
		    Total2=Total2+point2;

		  }
		  else if(strcmp(Team,"T1")==0)
		  {
		     point1=point1+1;
		     Total1=Total1+point1;


		  }
		   break;

	   }
	   v--;
       }while(v!=0);
      }

      else if((strcmp(Toss,"Tail")==0))
     {

       cout<<"\n\t<<<<<<<<<<<<<<<<<<<<<*>>>>>>>>>>>>>>>>>>>>";
       cout<<"\n\t                   Match ";
       cout<<"\n\t<<<<<<<<<<<<<<<<<<<<<*>>>>>>>>>>>>>>>>>>>>";
       cout<<"\n\tToss Won by Team2:"<<Team2<<endl;
       cout<<"\n\tfirst Service by Team 1";


       do
       {
       cout<<"\n\tEnter Choice:";
       cout<<"\n\t1.If Sucessfully Servicing the ball";
       cout<<"\n\t2.Hitting Ball";
       cout<<"\n\t3.If Ball is Fallen by defender's team:";
       cout<<"\n\t4.If Ball is Under the Net";
       cin>>choice;
       switch(choice)
       {
	   case 1:
		   cout<<"\n\tEnter value of variable(T1=0/T2=1):";
		   cin>>v;
		  if(v==0)
		  {
		    service1=service1+2;
		    Total1=Total1+service1;
		  }
		  else if(v==1)
		  {
		    service2=service2+2;
		    Total2=Total2+service2;
		  }
		  break;
	   case 2:
		  cout<<"\n\tBall is hitted by which team Either T1 or T2:";
		  cin>>Team;
		  if(strcmp(Team,"T1")==0)
		  {
		    point1=point1+1;
		    Total1=Total1+point1;

		  }
		  else if(strcmp(Team,"T1")==0)
		  {
		     point2=point2+1;
		     Total2=Total2+point2;


		  }
		   break;
	   case 3:
		  cout<<"\n\tBall is fallen dependers team(by T1/T2):";
		  cin>>Team;
		  if(strcmp(Team,"T1")==0)
		  {
		    point2=point2+1;
		    Total2=Total2+point2;

		  }
		  else if(strcmp(Team,"T1")==0)
		  {
		     point1=point1+1;
		     Total1=Total1+point1;


		  }
		   break;

	   case 4:
		  cout<<"\n\tBall is hitted under the net(by T1/T2):";
		  cin>>Team;
		  if(strcmp(Team,"T1")==0)
		  {
		    point2=point2+1;
		    Total2=Total2+point2;

		  }
		  else if(strcmp(Team,"T1")==0)
		  {
		     point1=point1+1;
		     Total1=Total1+point1;
		  }
		   break;

	   }
	   v--;
       }while(v!=0);
       }
       else
       {
	  cout<<"\n\tToss:";
	  cin>>Toss;
       }
     }


void Vollyball::d_Info()
  {
     cout<<"\n\t|________________________________________________________|";
     cout<<"\n\t|Match Between:"<<Team1<<" vs "<<Team2<<"|";
     cout<<"\n\t|Date(DD/MM/yyyy):"<<dd<<"/"<<mm<<"/"<<yyyy<<"|";
     cout<<"\t\t|Time(hr:min(Am/Pm))="<<hr<<":"<<min<<" "<<T<<"|";
     cout<<"\n\t|Duration:"<<D<<" min|";
     cout<<"\n\t|________________________________________________________|";
  }
  void Vollyball::Scoresheet()
  {
     cout<<"\n\t|********************************************************|";
     cout<<"\n\t|                       Team1                            |";
     cout<<"\n\t|********************************************************|";
     cout<<"\n\t|Service Points|"<<"\t|points|"<<"\t\t|";
     cout<<"\n\t|"<<service1<<"\t      |\t"<<point1<<" \t\t|";
     cout<<"\n\t|________________________________________________________|";
     cout<<"\n\t*Total Score:"<<Total1<<"|";
     cout<<"\n\t|________________________________________________________|";
      cout<<"\n\n\n\t|********************************************************|";
     cout<<"\n\t|                       Team2                            |";
     cout<<"\n\t|********************************************************|";
     cout<<"\n\t|Service Points|"<<"\t|points|"<<"\t\t|";
     cout<<"\n\t|"<<service2<<"\t      |\t"<<point2<<" \t\t|";
     cout<<"\n\t|________________________________________________________|";
     cout<<"\n\t*Total Score:"<<Total2<<"|";
     cout<<"\n\t|________________________________________________________|";
  }
  void Vollyball::Final_re()
 {

		 if(Total1>Total2)
		 {
		      cout<<"\n\t<<<<<<<<<<<<<<>WINNER<>>>>>>>>>>>>>>>>>";
		      cout<<"\n\tTeam1:"<<Team1<<" is Winner";
		      cout<<"\n\t<<<<<<<<<<<<<<>WINNER<>>>>>>>>>>>>>>>>>";
		 }
		 else if(Total1<Total2)
		 {
		      cout<<"\n\t<<<<<<<<<<<<<<>WINNER<>>>>>>>>>>>>>>>>>";
		      cout<<"\n\tTeam1:"<<Team2<<" is Winner";
		      cout<<"\n\t<<<<<<<<<<<<<<>WINNER<>>>>>>>>>>>>>>>>>";
		 }
		 else if(Total1==Total2)
		 {

		      cout<<"\n\t##################>Tie<###################";
		      cout<<"\n\tStart the Game For 2Minutes";
		      cout<<"\n\t##################>Tie<###################";
		      Match();
		 }
}
class Football:public Sport
{
   public:
	int choice,service1,service2,v,point1,point2,Total1,Total2,out,D,Bonus1,Bonus2,o1,o2;
	char Team[20],T1Raider[20],T2Raider[20];
   public:
	void Info();
	void d_Info();
	void Match();
	void Scoresheet();
	void Final_re();
};
void Football::Info()
{

     cout<<"\n\tEnter Venue:";
     cin>>Venue;

     cout<<"\n\tEnter Date(DD/MM/yyyy):";
     cin>>dd>>mm>>yyyy;

     cout<<"\n\tEnter Time(hr:min(Am/Pm)):";
     cin>>hr>>min>>T;
     cout<<"\n\tDuration of per Match(min):";
     cin>>D;
}
void Football::Match()
  {

       cout<<"\n\tToss(Head/Tail):";
       cin>>Toss;


     if((strcmp(Toss,"Head")==0))
     {

       cout<<"\n\t<<<<<<<<<<<<<<<<<<<<<*>>>>>>>>>>>>>>>>>>>>";
       cout<<"\n\t                   Match ";
       cout<<"\n\t<<<<<<<<<<<<<<<<<<<<<*>>>>>>>>>>>>>>>>>>>>";
       cout<<"\n\tToss Won by Team1:"<<Team1<<endl;
       cout<<"\n\tfirst Service by Team 1";
	int v=5;

	do
	{
       cout<<"\n\tEnter Choice:";
       cout<<"\n\t1.If Sucessfully Servicing the ball";
       cout<<"\n\t2.Ball is passing in Goal by Which Team";
       cout<<"\n\t3.If Ball is Handover by defender's team:";
       cout<<"\n\t4.If Ball is Under the goal";
       cin>>choice;
       switch(choice)
       {
	   case 1:
		   cout<<"\n\tEnter value of variable(Team1=0/Team2=1):";
		   cin>>v;
		  if(v==0)
		  {
		    service1=service1+2;
		    Total1=Total1+service1;
		  }
		  else if(v==1)
		  {
		    service2=service2+2;
		    Total2=Total2+service2;
		  }
		  break;
	   case 2:
		  cout<<"\n\tBall is passing in Goal by which team Either T1 or T2:";
		  cin>>Team;
		  if(strcmp(Team,"T1")==0)
		  {
		    point1=point1+1;
		    Total1=Total1+point1;

		  }
		  else if(strcmp(Team,"T1")==0)
		  {
		     point2=point2+1;
		     Total2=Total2+point2;


		  }
		   break;
	   case 3:
		  cout<<"\n\tBall is Handover by dependers team(T1,T2):";
		  cin>>Team;
		  if(strcmp(Team,"T1")==0)
		  {
		    point2=point2+1;
		    Total2=Total2+point2;

		  }
		  else if(strcmp(Team,"T1")==0)
		  {
		     point1=point1+1;
		     Total1=Total1+point1;


		  }
		   break;

	   case 4:
		  cout<<"\n\tBall is hitted under the Goal(By T1/T2):";
		  cin>>Team;
		  if(strcmp(Team,"T1")==0)
		  {
		    point2=point2+1;
		    Total2=Total2+point2;

		  }
		  else if(strcmp(Team,"T1")==0)
		  {
		     point1=point1+1;
		     Total1=Total1+point1;


		  }
		   break;

	   }
	   v--;
       }while(v!=0);
      }

      else if((strcmp(Toss,"Tail")==0))
     {

       cout<<"\n\t<<<<<<<<<<<<<<<<<<<<<*>>>>>>>>>>>>>>>>>>>>";
       cout<<"\n\t                   Match ";
       cout<<"\n\t<<<<<<<<<<<<<<<<<<<<<*>>>>>>>>>>>>>>>>>>>>";
       cout<<"\n\tToss Won by Team2:"<<Team2<<endl;
       cout<<"\n\tfirst Service by Team 1";


       do
       {
       cout<<"\n\tEnter Choice:";
       cout<<"\n\t1.If Sucessfully Servicing the ball";
       cout<<"\n\t2.Ball is passingin Goal by which Team";
       cout<<"\n\t3.If Ball is Handover by defender's team:";
       cout<<"\n\t4.If Ball is Under the Goal";
       cin>>choice;
       switch(choice)
       {
	   case 1:
		   cout<<"\n\tEnter value of variable(T1=0/T2=1):";
		   cin>>v;
		  if(v==0)
		  {
		    service1=service1+2;
		    Total1=Total1+service1;
		  }
		  else if(v==1)
		  {
		    service2=service2+2;
		    Total2=Total2+service2;
		  }
		  break;
	   case 2:
		  cout<<"\n\tBall is passing by which team Either T1 or T2:";
		  cin>>Team;
		  if(strcmp(Team,"T1")==0)
		  {
		    point1=point1+1;
		    Total1=Total1+point1;

		  }
		  else if(strcmp(Team,"T1")==0)
		  {
		     point2=point2+1;
		     Total2=Total2+point2;


		  }
		   break;
	   case 3:
		  cout<<"\n\tBall is handover dependers team(by T1/T2):";
		  cin>>Team;
		  if(strcmp(Team,"T1")==0)
		  {
		    point2=point2+1;
		    Total2=Total2+point2;

		  }
		  else if(strcmp(Team,"T1")==0)
		  {
		     point1=point1+1;
		     Total1=Total1+point1;


		  }
		   break;

	   case 4:
		  cout<<"\n\tBall is hitted under the Goal(by T1/T2):";
		  cin>>Team;
		  if(strcmp(Team,"T1")==0)
		  {
		    point2=point2+1;
		    Total2=Total2+point2;

		  }
		  else if(strcmp(Team,"T1")==0)
		  {
		     point1=point1+1;
		     Total1=Total1+point1;
		  }
		   break;

	   }
	   v--;
       }while(v!=0);
       }
       else
       {
	  cout<<"\n\tToss:";
	  cin>>Toss;
       }
     }

void Football::d_Info()
  {
     cout<<"\n\t|________________________________________________________|";
     cout<<"\n\t|Match Between:"<<Team1<<" vs "<<Team2<<"|";
     cout<<"\n\t|Date(DD/MM/yyyy):"<<dd<<"/"<<mm<<"/"<<yyyy<<"|";
     cout<<"\t\t|Time(hr:min(Am/Pm))="<<hr<<":"<<min<<" "<<T<<"|";
     cout<<"\n\t|Duration:"<<D<<" min|";
     cout<<"\n\t|________________________________________________________|";
  }
  void Football::Scoresheet()
  {
     cout<<"\n\t|********************************************************|";
     cout<<"\n\t|                       Team1                            |";
     cout<<"\n\t|********************************************************|";
     cout<<"\n\t|Service Points|"<<"\t|points|"<<"\t\t|";
     cout<<"\n\t|"<<service1<<"\t      |\t"<<point1<<" \t\t|";
     cout<<"\n\t|________________________________________________________|";
     cout<<"\n\t*Total Score:"<<Total1<<"|";
     cout<<"\n\t|________________________________________________________|";
      cout<<"\n\n\n\t|********************************************************|";
     cout<<"\n\t|                       Team2                            |";
     cout<<"\n\t|********************************************************|";
     cout<<"\n\t|Service Points|"<<"\t|points|"<<"\t\t|";
     cout<<"\n\t|"<<service2<<"\t      |\t"<<point2<<" \t\t|";
     cout<<"\n\t|________________________________________________________|";
     cout<<"\n\t*Total Score:"<<Total2<<"|";
     cout<<"\n\t|________________________________________________________|";
  }
  void Football::Final_re()
 {

		 if(Total1>Total2)
		 {
		      cout<<"\n\t<<<<<<<<<<<<<<>WINNER<>>>>>>>>>>>>>>>>>";
		      cout<<"\n\tTeam1:"<<Team1<<" is Winner";
		      cout<<"\n\t<<<<<<<<<<<<<<>WINNER<>>>>>>>>>>>>>>>>>";
		 }
		 else if(Total1<Total2)
		 {
		      cout<<"\n\t<<<<<<<<<<<<<<>WINNER<>>>>>>>>>>>>>>>>>";
		      cout<<"\n\tTeam1:"<<Team2<<" is Winner";
		      cout<<"\n\t<<<<<<<<<<<<<<>WINNER<>>>>>>>>>>>>>>>>>";
		 }
		 else if(Total1==Total2)
		 {

		      cout<<"\n\t##################>Tie<###################";
		      cout<<"\n\tStart the Game For 2Minutes";
		      cout<<"\n\t##################>Tie<###################";
		      Match();
		 }
}

void main()
{
   clrscr();
   Sport p,p1[11];
   Cricket cr,*c;
   Kabbadi ka,*k;
   Vollyball vo,*v;
   Football fo,*f;
   int choice,num;
   char ch;
    p.Login();

    //start do-while loop
    do
   {
    cout<<"\n\n\n\t=============================================";
    cout<<"\n\t      >>>>>>>> Field Team Data <<<<<<<<<    ";
    cout<<"\n\t==============================================";
    p.Teams_in();
    cout<<"\n\tEnter no of players in your team:";
    cin>>num;
    cout<<"\n\tEnter Name of Players:"<<p.Team1<<endl;
    for(int i=1;i<=num;i++)
    {
	cout<<"\n\t"<<i<<".";
	p1[i].Get_tp();
    }
    cout<<"\n\t_______________________________________________";
    cout<<"\n\tEnter Name of Players:"<<p.Team2<<endl;
    for(i=1;i<=num;i++)
    {
	cout<<"\n\t"<<i<<".";
	p1[i].Get_tp();
    }
    cout<<"\n\t===============================================";


     cout<<"\n\tEnter choice:";
     cout<<"\n\tEnter 1 CRICKET";
     cout<<"\n\tEnter 2 KABBADI";
     cout<<"\n\tEnter 3 VOLLYBALL";
     cout<<"\n\tEnter 4 FOOTBALL";
     cin>>choice;
     switch(choice)       //Start Switch
     {
	case 1:
	      cout<<"\n\t**********************************************";
	      cout<<"\n\t          WELCOME IN CRICKET SYSTEM  ";
	      cout<<"\n\t**********************************************";
	      c=&cr;
	      c->Info();
	      p.Teams_out();
	      cout<<"\n\tName of Players:"<<p.Team1<<endl;
	      for(i=1;i<=num;i++)
	      {
		    cout<<"\t"<<i<<".";
		    p1[i].Put_tp();
	      }
	      cout<<"\n\t______________________________________________";
	      delay(4000);
	      clrscr();
	      cout<<"\n\tName of Players:"<<p.Team2<<endl;
	      for(i=1;i<=num;i++)
	      {
		    cout<<"\t"<<i<<".";
		    p1[i].Put_tp();
	      }
	      delay(4000);
	      cout<<"\n\t==============================================";
	      c->Tossing();
	      cout<<"\n\t=======================================";
	      cout<<"\n\t************>ScoreSheet1<**************";
	      cout<<"\n\t=======================================";
	      c->Scoresheet1();
	      cout<<"\n\t=======================================";
	      cout<<"\n\t************>ScoreSheet1<**************";
	      cout<<"\n\t=======================================";
	      c->Scoresheet2();
	      cout<<"\n\t""""""""""""""""""""""""""""""""""""""";
	      cout<<"\n\t       CRICKET WINNER";
	      cout<<"\n\t""""""""""""""""""""""""""""""""""""""";
	      c->Final_re();
	      break;
	case 2:
	      cout<<"\n\t**********************************************";
	      cout<<"\n\t          WELCOME IN KABBADI SYSTEM  ";
	      cout<<"\n\t**********************************************";
	      k=&ka;
	      k->Info();
	      p.Teams_out();
	      cout<<"\n\tName of Players:"<<p.Team1<<endl;
	      for(i=1;i<=num;i++)
	      {
		    cout<<"\t"<<i<<".";
		    p1[i].Put_tp();
	      }
	      cout<<"\n\t______________________________________________";
	      delay(4000);
	      clrscr();
	      cout<<"\n\tName of Players:"<<p.Team2<<endl;
	      for(i=1;i<=num;i++)
	      {
		    cout<<"\t"<<i<<".";
		    p1[i].Put_tp();
	      }
	      delay(4000);
	      cout<<"\n\t==============================================";
	      k->Match();
	      k->Scoresheet();
	      cout<<"\n\t""""""""""""""""""""""""""""""""""""""""""""";
	      cout<<"\n\t          KABBADI WINNER";
	      cout<<"\n\t""""""""""""""""""""""""""""""""""""""""""""";
	      k->Final_re();
	      break;
	case 3:
	      cout<<"\n\t**********************************************";
	      cout<<"\n\t          WELCOME IN VOLLYBALL SYSTEM  ";
	      cout<<"\n\t**********************************************";
	      v=&vo;
	      v->Info();
	      p.Teams_out();
	      cout<<"\n\tName of Players:"<<p.Team1<<endl;
	      for(i=1;i<=num;i++)
	      {
		    cout<<"\t"<<i<<".";
		    p1[i].Put_tp();
	      }
	      cout<<"\n\t______________________________________________";
	      delay(4000);
	      clrscr();
	      cout<<"\n\tName of Players:"<<p.Team2<<endl;
	      for(i=1;i<=num;i++)
	      {
		    cout<<"\t"<<i<<".";
		    p1[i].Put_tp();
	      }
	      delay(4000);
	      cout<<"\n\t==============================================";
	      v->Match();
	      v->Scoresheet();
	      cout<<"\n\t""""""""""""""""""""""""""""""""""""""""""""";
	      cout<<"\n\t            VOLLYBALL WINNER";
	      cout<<"\n\t""""""""""""""""""""""""""""""""""""""""""""";
	      v->Final_re();
	      break;
	case 4:
	      cout<<"\n\t**********************************************";
	      cout<<"\n\t         WELCOME IN FOOTBALL SYSTEM  ";
	      cout<<"\n\t**********************************************";
	      f=&fo;
	      f->Info();
	      p.Teams_out();
	      cout<<"\n\tName of Players:"<<p.Team1<<endl;
	      for(i=1;i<=num;i++)
	      {
		    cout<<"\t"<<i<<".";
		    p1[i].Put_tp();
	      }
	      cout<<"\n\t______________________________________________";
	      delay(4000);
	      clrscr();
	      cout<<"\n\tName of Players:"<<p.Team2<<endl;
	      for(i=1;i<=num;i++)
	      {
		    cout<<"\t"<<i<<".";
		    p1[i].Put_tp();
	      }
	      delay(4000);
	      cout<<"\n\t==============================================";
	      f->Match();
	      f->Scoresheet();
	      cout<<"\n\t""""""""""""""""""""""""""""""""""""""""""""";
	      cout<<"\n\t             FOOTBALL WINNER";
	      cout<<"\n\t""""""""""""""""""""""""""""""""""""""""""""";
	      f->Final_re();
	      break;
     }//End of Switch case
       cout<<"\nDo you want to continue[y/n]";
       cin>>ch;
   }while(ch=='y' ||ch=='Y');   //End of While loop

	      cout<<"\n\tExit.......";
	      delay(1000);
	      clrscr();
	      cout<<"\n\t\tThank You!!!!";
      getch();
}
