#include<18f4550.h>
#fuses hs,nowdt
#use delay(clock=4000000)
#include<lcd.c>
#include<kbd1.c>
#include<math.h>

int X=0;
int Y=0;
float A=0;
float B=0;
float C=0;

void main()
{
   char K;
   int T;
   lcd_init();
   kbd_init();
   port_b_pullups(true);
   int ban=0;
   
   //pass
  printf(lcd_putc,"Ingrese el pass");
  do
  {
   
    K=kbd_getc();
      T=k-48;
      if((K!=0)&&(K!='D')&&(k!='*')&&(k!='A')&&(k!='B')&&(k!='C')&&(k!='#'))
      {
         A=(A*10)+T;
         X++;
         lcd_gotoxy(x,2);
         printf(lcd_putc,"%d",T);
         delay_ms(5);
      }
      if(K=='#')
      {
         if(A==1234)
         {
            X=0;
            A=0;
            B=0;
            C=0;
            ban=1;
         }
         
      }
      
  }while(ban!=1);
    printf(lcd_putc,"\f");
    printf(lcd_putc,"Acceso");
    delay_ms(300);
     printf(lcd_putc,"\f");
   ////////////////////
   
   do
   {
      K=kbd_getc();
      T=k-48;
      if((K!=0)&&(K!='D')&&(k!='*')&&(k!='A')&&(k!='B')&&(k!='C')&&(k!='#'))
      {
         A=(A*10)+T;
         X++;
         lcd_gotoxy(X,1);
         printf(lcd_putc,"%d",T);
         delay_ms(5);
      }
      
      if(K=='*')
      {
         X=0;
         A=0;
         B=0;
         C=0;
         printf(lcd_putc,"\f");
      }
      
      
      
      //seno//
      
      if(K=='D')
      {
         X++;
         Y=1;
         printf(lcd_putc,"sen");
         
         do
         {
            K=kbd_getc();
            T=K-48;
            if((K!=0)&&(K!='D')&&(k!='*')&&(k!='A')&&(k!='B')&&(k!='C')&&(k!='#'))
            {
               B=(B*10)+T;
               X++;
               lcd_gotoxy(X,1);
               printf(lcd_putc,"%d",T);
               delay_ms(5);
            }
            
            if(K=='#')
            {
               C=A*3.1415926535/180;
               C=sin(C);
              // C=A+B;
               lcd_gotoxy(1,2);
               printf(lcd_putc,"%.6f",C);
               delay_ms(5);
            }
            
            
            if(K=='*')
            {
               Y=0;
               X=0;
               A=0;
               B=0;
               C=0;
               printf(lcd_putc,"\f");
      }
            
         }while(Y==1);
      }
      
      
 
      //coseno //
      
      if(K=='A')
      {
         X++;
         Y=1;
         printf(lcd_putc,"cos");
         
         do
         {
            K=kbd_getc();
            T=K-48;
            if((K!=0)&&(K!='D')&&(k!='*')&&(k!='A')&&(k!='B')&&(k!='C')&&(k!='#'))
            {
               B=(B*10)+T;
               X++;
               lcd_gotoxy(X,1);
               printf(lcd_putc,"%d",T);
               delay_ms(5);
            }
            
            if(K=='#')
            {
                C=A*3.1415926535/180;
               C=cos(C);
               //C=A-B;
               lcd_gotoxy(1,2);
               printf(lcd_putc,"%.6f",C);
               delay_ms(5);
            }
            
            
            if(K=='*')
            {
               Y=0;
               X=0;
               A=0;
               B=0;
               C=0;
               printf(lcd_putc,"\f");
      }
            
         }while(Y==1);
      }
      
      //Tangente //
      
      
      
      
      if(K=='B')
      {
         X++;
         Y=1;
         printf(lcd_putc,"tan");
         
         do
         {
            K=kbd_getc();
            T=K-48;
            if((K!=0)&&(K!='D')&&(k!='*')&&(k!='A')&&(k!='B')&&(k!='C')&&(k!='#'))
            {
               B=(B*10)+T;
               X++;
               lcd_gotoxy(X,1);
               printf(lcd_putc,"%d",T);
               delay_ms(5);
            }
            
            if(K=='#')
            {
               C=A*3.1415926535/180;
               C=tan(C);
               //C=A*B;
               lcd_gotoxy(1,2);
               printf(lcd_putc,"%.6f",C);
               delay_ms(5);
            }
            
            
            if(K=='*')
            {
               Y=0;
               X=0;
               A=0;
               B=0;
               C=0;
               printf(lcd_putc,"\f");
      }
            
         }while(Y==1);
      }
      
      
      //Raiz cubica//
      
      
      if(K=='C')
      {
         X++;
         Y=1;
         printf(lcd_putc,"raiz cubica");
         
         do
         {
            K=kbd_getc();
            T=K-48;
            if((K!=0)&&(K!='D')&&(k!='*')&&(k!='A')&&(k!='B')&&(k!='C')&&(k!='#'))
            {
               B=(B*10)+T;
               X++;
               lcd_gotoxy(X,1);
               printf(lcd_putc,"%d",T);
               delay_ms(5);
            }
            
            if(K=='#')
            {
               C=pow(A,(double)1/3);
               //C=A/B;
               lcd_gotoxy(1,2);
               printf(lcd_putc,"%.3f",C);
               delay_ms(5);
            }
            
            
            if(K=='*')
            {
               Y=0;
               X=0;
               A=0;
               B=0;
               C=0;
               printf(lcd_putc,"\f");
      }
            
         }while(Y==1);
      }
      
      
      
   }while(true);
   
}
