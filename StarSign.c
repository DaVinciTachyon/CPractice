#include <stdio.h>
int main() {
  int d,
      m;
  printf("What is the month of your birth (0-12)? ");
  scanf("%d",&m);
  printf("What is the date of your birth? ");
  scanf("%d",&d);

  if(((m==1&&d>=21)||(m==2&&d<=19))){
    printf("You are a Aquarius.\n");
  }
  else if((m==2&&d>=20)||(m==3&&d<=20)){
    printf("You are a Pisces.\n");
  }
  else if((m==3&&d>=21)||(m==4&&d<=20)){
    printf("You are a Aries.\n");
  }
  else if((m==4&&d>=21)||(m==5&&d<=21)){
    printf("You are a Taurus.\n");
  }
  else if((m==5&&d>=22)||(m==6&&d<=21)){
    printf("You are a Gemini.\n");
  }
  else if((m==6&&d>=22)||(m==7&&d<=23)){
    printf("You are a Cancer.\n");
  }
  else if((m==7&&d>=24)||(m==8&&d<=23)){
    printf("You are a Leo.\n");
  }
  else if((m==8&&d>=24)||(m==9&&d<=23)){
    printf("You are a Virgo.\n");
  }
  else if((m==9&&d>=24)||(m==10&&d<=23)){
    printf("You are a Libra.\n");
  }
  else if((m==10&&d>=24)||(m==11&&d<=22)){
    printf("You are a Scorpio.\n");
  }
  else if((m==11&&d>=23)||(m==12&&d<=22)){
    printf("You are a Sagittarius.\n");
  }
  else{
    printf("You are a Capricorn.\n");
  }

  return 0;
}
