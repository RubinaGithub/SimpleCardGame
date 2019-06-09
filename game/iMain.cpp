# include "iGraphics.h"
#include<stdlib.h>

/* 
	function iDraw() is called again and again by the system.
*/
int a,b,s=0,r=0,c,p;
int count1=0,count2=0,count3=0;
char scoreText1[100], scoreText2[100],scoreText3[100];

void iDraw()
{
	iClear();
	iShowBMP(0, 0, "front_R.bmp"); //background for the 1st page
	iShowBMP(170, 500, "SPIDER123.bmp"); //game name 
	iShowBMP(298, 288, "PLAY123.bmp"); //play button
	iShowBMP(298, 204, "ABOUT123.bmp"); //about button
	iShowBMP(298, 120, "SETTING123.bmp");//setting button

	//for play click
	if(a==1|| p==1)
	{
		iClear();

		//for background
		iShowBMP(0, 0, "background.bmp");

		iShowBMP(200, 605, "spider_name.bmp");

		//for my cards
		iShowBMP(80, 20, "card_A.bmp"); 
		iShowBMP(120, 20, "card_2.bmp"); 
		iShowBMP(160, 20, "card_3.bmp"); 
		iShowBMP(200, 20, "card_4.bmp"); 
		iShowBMP(240, 20, "card_5.bmp"); 
		iShowBMP(280, 20, "card_6.bmp"); 
		iShowBMP(320, 20, "card_7.bmp"); 
		iShowBMP(360, 20, "card_8.bmp"); 
		iShowBMP(400, 20, "card_9.bmp"); 
		iShowBMP(440, 20, "card_10.bmp");
		iShowBMP(480, 20, "card_J.bmp");
		iShowBMP(520, 20, "card_Q.bmp");
		iShowBMP(560, 20, "card_K.bmp");

		//for computer's card
		iShowBMP(80, 452, "card.bmp"); 
		iShowBMP(120, 452, "card.bmp"); 
		iShowBMP(160, 452, "card.bmp"); 
		iShowBMP(200, 452, "card.bmp"); 
		iShowBMP(240, 452, "card.bmp"); 
		iShowBMP(280, 452, "card.bmp"); 
		iShowBMP(320, 452, "card.bmp"); 
		iShowBMP(360, 452, "card.bmp"); 
		iShowBMP(400, 452, "card.bmp");
		iShowBMP(440, 452, "card.bmp"); 
		iShowBMP(480, 452, "card.bmp");
		iShowBMP(520, 452, "card.bmp");
		iShowBMP(560, 452, "card.bmp");

		if(s==0 && r==0)
		{
		//for middle card
		iShowBMP(300, 166, "card.bmp");
		iShowBMP(300, 304, "card.bmp");
		}

		//for turn button
		iShowBMP(420, 225, "your_turn.bmp");
		iShowBMP(100, 366, "computer_turn.bmp");

		iSetColor(70, 70, 70);
		iFilledRectangle(704,0, 148, 700);

		//for player A
		if(s==1)
		{
			iShowBMP(300, 166, "card_A.bmp");
		}
		else if(s==2)
		{
			iShowBMP(300, 166, "card_2.bmp");
		}
		else if(s==3)
		{
			iShowBMP(300, 166, "card_3.bmp");
		}
		else if(s==4)
		{
			iShowBMP(300, 166, "card_4.bmp");
		}
		else if(s==5)
		{
			iShowBMP(300, 166, "card_5.bmp");
		}
		else if(s==6)
		{
			iShowBMP(300, 166, "card_6.bmp");
		}
		else if(s==7)
		{
			iShowBMP(300, 166, "card_7.bmp");
		}
		else if(s==8)
		{
			iShowBMP(300, 166, "card_8.bmp");
		}
		else if(s==9)
		{
			iShowBMP(300, 166, "card_9.bmp");
		}
		else if(s==10)
		{
			iShowBMP(300, 166, "card_10.bmp");
		}
		else if(s==11)
		{
			iShowBMP(300, 166, "card_J.bmp");
		}
		else if(s==12)
		{
			iShowBMP(300, 166, "card_Q.bmp");
		}
		else if(s==13)
		{
			iShowBMP(300, 166, "card_K.bmp");
		}

		//for computer turn
		if(r==1)
		{
			iShowBMP(300, 304, "card_A.bmp");
		}
		else if(r==2)
		{
			iShowBMP(300, 304, "card_2.bmp");
		}
		else if(r==3)
		{
			iShowBMP(300, 304, "card_3.bmp");
		}
		else if(r==4)
		{
			iShowBMP(300, 304, "card_4.bmp");
		}
		else if(r==5)
		{
			iShowBMP(300, 304, "card_5.bmp");
		}
		else if(r==6)
		{
			iShowBMP(300, 304, "card_6.bmp");
		}
		else if(r==7)
		{
			iShowBMP(300, 304, "card_7.bmp");
		}
		else if(r==8)
		{
			iShowBMP(300, 304, "card_8.bmp");
		}
		else if(r==9)
		{
			iShowBMP(300, 304, "card_9.bmp");
		}
		else if(r==10)
		{
			iShowBMP(300, 304, "card_10.bmp");
		}
		else if(r==11)
		{
			iShowBMP(300, 304, "card_J.bmp");
		}
		else if(r==12)
		{
			iShowBMP(300, 304, "card_Q.bmp");
		}
		else if(r==13)
		{
			iShowBMP(300, 304, "card_K.bmp");
		}

		
		//for score
		iSetColor(122,129,234);
		iText(710, 515, "COMPUTER ", GLUT_BITMAP_TIMES_ROMAN_24);
		iText(735, 490, "SCORE ", GLUT_BITMAP_TIMES_ROMAN_24);
		_itoa_s(count1,scoreText1,10);
		iText(770, 465, scoreText1,GLUT_BITMAP_TIMES_ROMAN_24);

		iText(740, 350, "YOUR ", GLUT_BITMAP_TIMES_ROMAN_24);
		iText(735, 330, "SCORE ", GLUT_BITMAP_TIMES_ROMAN_24);
		_itoa_s(count2,scoreText2,10);
		iText(770,305, scoreText2,GLUT_BITMAP_TIMES_ROMAN_24);

		iText(740,212 , "DRAW ", GLUT_BITMAP_TIMES_ROMAN_24);
		_itoa_s(count3,scoreText3,10);
		iText(770,190, scoreText3,GLUT_BITMAP_TIMES_ROMAN_24);

		//for win part
		if(count1>=10)
		{
			iClear();
			iShowBMP(0,0,"computer_win.bmp");
			iShowBMP(220,260,"play_again_button.bmp");
			iShowBMP(504,260,"exit_button.bmp");
		}
		else if(count2>=10)
		{
			iClear();
			iShowBMP(0,0,"you_win.bmp");
			iShowBMP(220,260,"play_again_button.bmp");
			iShowBMP(504,260,"exit_button.bmp");
		}
		else if(count3>=10)
		{
			iClear();
			//iText(420, 366, "Draw!!!",GLUT_BITMAP_TIMES_ROMAN_24);
			iShowBMP(280,450,"draw.bmp");
			iShowBMP(220,260,"play_again_button.bmp");
			iShowBMP(504,260,"exit_button.bmp");
		}
		
		}
		
	//for about click
	else if(a==2)
	{
		iClear();
		//iShowBMP(0,0,"about_page.bmp");
		iShowBMP(0,0,"aboutpage1.bmp");
		iShowBMP(220,260,"play_again_button.bmp");
		iShowBMP(504,260,"exit_button.bmp");
	}

	/*for setting click
	else if(a>=298 && a<=426 && b>=142 && b<=206)
	{
		
	}*/

}



/* 
	function iMouseMove() is called when the user presses and drags the mouse.
	(mx, my) is the position where the mouse pointer is.
*/

void iMouseMove(int mx, int my)
{
	//place your codes here
}

/* 
	function iMouse() is called when the user presses/releases the mouse.
	(mx, my) is the position where the mouse pointer is.
*/
void iMouse(int button, int state, int mx, int my)
{
	if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		if(mx>=298 && mx<=554 && my>=310 && my<=374)
		{
			a=1;
		}
		else if(mx>=298 && mx<=426 && my>=226 && my<=290)
		{
			a=2;;
		}
		printf("%d  %d\n",mx,my);

		if(mx>=80 && mx<=120 && my>=20 && my<=148 )
		{
			s=1;
			r=rand()%13+1;
			if(s==1&&(r>=2 && r<=13))
			{
				count1++;
			}
			else if(s==1 && r==1)
			{
				count3++;
			}
			
		}
		else if(mx>=120 && mx<= 160 && my>=20 && my<=148 )
		{
			s=2;
			r=rand()%13+1;
			if(s==2 && (r>=3 && r<=13))
			{
				count1++;
			}
			else if(s==2 && r==1)
			{
				count2++;
			}
			else if(s==2 && r==2)
			{
				count3++;
			}
			
		}
		else if(mx>=160 && mx<= 200 && my>=20 && my<=148 )
		{
			s=3;
			r=rand()%13+1;
			if(s==3 && (r>=4 && r<=13))
			{
				count1++;
			}
			else if(s==3 && (r>=1 && r<=2))
			{
				count2++;
			}
			else if(s==3 && r==3)
			{
				count3++;
			}
			
		}
		else if(mx>=200 && mx<= 240 && my>=20 && my<=148 )
		{
			s=4;
			r=rand()%13+1;
			if(s==4 && (r>=5 && r<=13))
			{
				count1++;
			}
			else if(s==4 && (r>=1 && r<=3))
			{
				count2++;
			}
			else if(s==4 && r==4)
			{
				count3++;
			}
			
			
		}
		else if(mx>=240 && mx<= 280 && my>=20 && my<=148 )
		{
			s=5;
			r=rand()%13+1;
			if(s==5 && (r>=6 && r<=13))
			{
				count1++;
			}
			else if(s==5 && (r>=1 && r<=4))
			{
				count2++;
			}
			else if(s==5 && r==5)
			{
				count3++;
			}
			
		}
		else if(mx>=280 && mx<= 320 && my>=20 && my<=148 )
		{
			s=6;
			r=rand()%13+1;
			if(s==6 && (r>=7 && r<=13))
			{
				count1++;
			}
			else if(s==6 && (r>=1 && r<=5))
			{
				count2++;
			}
			else if(s==6 && r==6)
			{
				count3++;
			}
			
		}
		else if(mx>=320 && mx<=360 && my>=20 && my<=148 )
		{
			s=7;
			r=rand()%13+1;
			if(s==7 && (r>=8 && r<=13))
			{
				count1++;
			}
			else if(s==7 && (r>=1 && r<=6))
			{
				count2++;
			}
			else if(s==7 && r==7)
			{
				count3++;
			}
			
		}
		else if(mx>=360 && mx<=400 && my>=20 && my<=148 )
		{
			s=8;
			r=rand()%13+1;
			if(s==8 && (r>=9 && r<=13))
			{
				count1++;
			}
			else if(s==8 && (r>=1 && r<=7))
			{
				count2++;
			}
			else if(s==8 && r==8)
			{
				count3++;
			}
			
			
		}
		else if(mx>=400 && mx<=440 && my>=20 && my<=148 )
		{
			s=9;
			r=rand()%13+1;
			if(s==9 && (r>=9 && r<=13))
			{
				count1++;
			}
			else if(s==9 && (r>=1 && r<=8))
			{
				count2++;
			}
			else if(s==9 && r==9)
			{
				count3++;
			}
			
		}
		else if(mx>=440 && mx<=480 && my>=20 && my<=148 )
		{
			s=10;
			r=rand()%13+1;
			if(s==10 && (r>=11 && r<=13))
			{
				count1++;
			}
			else if(s==10 && (r>=1 && r<=9))
			{
				count2++;
			}
			else if(s==10 && r==10)
			{
				count3++;
			}
			
		}
		else if(mx>=480 && mx<=520 && my>=20 && my<=148 )
		{
			s=11;
			r=rand()%13+1;
			if(s==11 && (r>=12 && r<=13))
			{
				count1++;
			}
			else if(s==11 && (r>=1 && r<=10))
			{
				count2++;
			}
			else if(s==11 && r==11)
			{
				count3++;
			}
			
			
		}
		else if(mx>=520 && mx<=560 && my>=20 && my<=148 )
		{
			s=12;
			r=rand()%13+1;
			if(s==12 && r==13)
			{
				count1++;
			}
			else if(s==12 && (r>=1 && r<=11))
			{
				count2++;
			}
			else if(s==12 && r==12)
			{
				count3++;
			}
			
		}
		else if(mx>=560 && mx<=624 && my>=20 && my<=148 )
		{
			s=13;
			r=rand()%13+1;
			if(s==13 && (r>=1 && r<=12))
			{
				count2++;
			}
			else if(s==13 && r==13)
			{
				count3++;
			}
			
		}
		if((mx>=220 && mx<=348) && (my>=260 && my<=324))
		{
			p=1;
			count1=0;
			count2=0;
			count3=0;
			s=0;
			r=0;
		}
		else if((mx>=504 && mx<=632)&&(my>=260 && my<=324))
		{
			exit(0);
		}
	}
	 
	if(button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
		
	}
}

/*
	function iKeyboard() is called whenever the user hits a key in keyboard.
	key- holds the ASCII value of the key pressed. 
*/
void iKeyboard(unsigned char key)
{
	if(key == 'q')
	{
		//do something with 'q'
	}
	//place your codes for other keys here
}

/*
	function iSpecialKeyboard() is called whenver user hits special keys like-
	function keys, home, end, pg up, pg down, arraows etc. you have to use 
	appropriate constants to detect them. A list is:
	GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6, 
	GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12, 
	GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP, 
	GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT 
*/
void iSpecialKeyboard(unsigned char key)
{

	if(key == GLUT_KEY_END)
	{
		exit(0);	
	}
	//place your codes for other keys here
}

int main()
{
	iInitialize(852, 670, "Spider");
	return 0;
}	