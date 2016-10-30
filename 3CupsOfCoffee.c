#include <stdio.h>
#include <math.h>
#include <string.h>
#define e 2.71828
int main()
{
  /*Introduction*/

    printf("\nThis program finds for a number of people the temperature of the coffee they are drinking.\n\tIt uses the temperature and the heat transfer constant of the room,\n\tThe temperature and amount of coffee when it was served,\n\tThe temperature, the amount, and the time the milk was poured if served, and\n\tWhen the coffee was drank.\n\n");

  /*Initialisations*/

    /*Universal*/
    char  dumpChar;   /*Used to dump enter characters after collecting a character*/

    /*Program Related*/
    int   n; /*Number of People*/

    float rt,         /*Room Temperature (ºC)*/
          k,          /*Heat Transfer Constant for the room*/
          ict,        /*Initial Coffee Temperature (ºC)*/
          imt[2],     /*Initial Milk Temperature (ºC)*/
          cml[n],     /*Amount of coffee (ml)*/
          mml[n][2],  /*Amount of milk (ml)*/
          tpm[n],     /*Time passed before putting milk after being served (minutes)*/
          tpc[n],     /*Time passed before drinking coffee after being served (minutes)*/
          fct[n],     /*Final Coffee Temperature (ºC)*/
          fmt[n],     /*Final Milk Temperature (ºC)*/
          ft[n];      /*Final Temperatures*/

    char  name[n][20],/*Names*/
          mw[10];     /*Milk Warmth*/

    /*End of Initialisations*/

  /*Declarations*/

    /*Room Temperature*/
    printf("What is the room temperature (ºC) where the people are drinking coffee?\n\t");
    scanf("%f%c",&rt,&dumpChar);
    printf("\nrt = %f\n",rt);
    printf("\n");


    /*Heat Transfer Constant for the room*/
    printf("What is the heat transfer constant in that room?\nIf the value of the heat transfer constant for the room is known input it (e.g. 0.001), or else type '-1'.\n\t");
    scanf("%f%c",&k,&dumpChar);
    printf("\nk = %f\n",k);
    printf("\n");

    printf("How many people were drinking coffee in that room?\n\t");
    scanf("%d%c",&n,&dumpChar);
    printf("\nn = %d\n",n);
    printf("\n");

    /*People's Names*/
    for(int i = 0; i < n; i++)/*For all of the people*/
    {
      printf("What is the name of person number %d?\n\t",i+1);
      scanf("%s",name[i]);
      printf("\nname[%d] = %s\n",i,name[i]);
    }
    printf("\n");

    /*Coffee Temperature*/
    printf("At what temperature was the coffee served (ºC)?\n\t");
    scanf("%f%c",&ict,&dumpChar);
    printf("\nict = %f\n",ict);
    printf("\n");

    /*Amount of Coffee*/
    for(int i = 0; i < n; i++)/*For all of the people*/
    {
      printf("How much coffee did %s have (ml)?\n\t",name[i]);
      scanf("%f%c",&cml[i],&dumpChar);
      printf("\ncml[%d] = %f\n",i,cml[i]);
    }
    printf("\n");

    /*Milk Temperature*/
    printf("Was the milk they had available 'warm', 'cold', 'both' or 'none' was available?\n\t");
    scanf("%s%c",mw,&dumpChar);
    printf("\nmw = %s\n",mw);
    if(strcmp(mw, "warm")==0||strcmp(mw, "cold")==0)/*If the milk is warm xor cold*/
    {
      printf("At what temperature was the milk served (ºC)?\n\t");
      scanf("%f%c",&imt[0],&dumpChar);
      printf("\nimt[0] = %f\n",imt[0]);
    }/*End of if the milk is warm xor cold*/
    else if(strcmp(mw, "both")==0)/*If the milk is warm and cold*/
    {
      printf("At what temperature was the warm milk served (ºC)?\n\t");
      scanf("%f%c",&imt[0],&dumpChar);
      printf("\nimt[0] = %f\n",imt[0]);
      printf("At what temperature was the cold milk served (ºC)?\n\t");
      scanf("%f%c",&imt[1],&dumpChar);
      printf("\nimt[1] = %f\n",imt[1]);
    }/*End of if the milk is warm and cold*/
    printf("\n");

    /*Amount of Milk*/
    if(strcmp(mw, "warm")==0||strcmp(mw, "cold")==0)/*If the milk is warm xor cold*/
    {
      for(int i = 0; i < n; i++)/*For all of the people*/
      {
        printf("How much milk did %s have (ml)?\n\t",name[i]);
        scanf("%f%c",&mml[i][0],&dumpChar);
        printf("\nmml[%d][0] = %f\n",i,mml[i][0]);
      }
    }/*End of if the milk is warm xor cold*/
    else if(strcmp(mw, "both")==0)/*If the milk is warm and cold*/
    {
      for(int i = 0; i < n; i++)/*For all of the people*/
      {
        printf("How much warm milk did %s have (ml)?\n\t",name[i]);
        scanf("%f%c",&mml[i][0],&dumpChar);
        printf("\nmml[%d][0] = %f\n",i,mml[i][0]);
        printf("How much cold milk did %s have (ml)?\n\t",name[i]);
        scanf("%f%c",&mml[i][1],&dumpChar);
        printf("\nmml[%d][1] = %f\n",i,mml[i][1]);
      }
    }/*End of if the milk is warm and cold*/
    printf("\n");

    /*Milk Pouring Time*/
    if(strcmp(mw, "warm")==0||strcmp(mw, "cold")==0||strcmp(mw, "both")==0)/*If the milk is warm or cold*/
    {
      for(int i = 0; i < n; i++)/*For all of the people*/
      {
        printf("After how long did %s put milk in the coffee after it was served (mins)?\n\t",name[i]);
        scanf("%f%c",&tpm[i],&dumpChar);
        printf("\ntpm[%d] = %f\n",i,tpm[i]);
      }
    }
    printf("\n");

    /*Coffee Drinking Time*/
    if(strcmp(mw, "none")==0) /*If there is no milk*/
    {
      for(int i = 0; i < n; i++)/*For all of the people*/
      {
        printf("After how long did %s drink the coffee after the coffee was served (mins)?\n\t",name[i]);
        scanf("%f%c",&tpc[i],&dumpChar);
        printf("\ntpc[%d] = %f\n",i,tpc[i]);
      }
    }
    else /*If there is milk*/
    {
      for(int i = 0; i < n; i++)/*For all of the people*/
      {
        printf("\ntpm[%d] = %f\n",i,tpm[i]);
          printf("After how long did %s drink the coffee after the coffee was served (mins)?\n\t",name[i]);
          //printf("\ntpm[%d] = %f\n",i,tpm[i]);
          scanf("%f%c",&tpc[i],&dumpChar);
          printf("\ntpc[%d] = %f\n",i,tpc[i]);
          printf("\ntpm[%d] = %f\n",i,tpm[i]);
          // if(tpc[i]>=tpm[i])
          // {
          //  printf("tpc[%d] = %1f and tpm[%d] = %1f",i,tpc[i],i,tpm[i]);
          //  printf("Coffee was drunk at same time as milk poured or later\n\n");
          // }
          // else
          // {
          //   printf("tpc[%d] = %1f and tpm[%d] = %1f",i,tpc[i],i,tpm[i]);
          //   printf("Are you trying to travel in time?\n\n");
          // }
      }
    }
    printf("\n");

    /*End of Declarations*/

  /*Calculations & Results*/
    if(n==1) printf("The temperature of the coffee at the time of drinking was:\n");
    else printf("The temperatures of the coffees at the time of drinking were:\n");
    for (int i = 0; i < n; i++)/*For all of the people*/
    {
      printf("%s's coffee:\n\t",name[i]);
      if(strcmp(mw, "warm")==0||strcmp(mw, "cold")==0)/*If the milk is warm xor cold*/
      {
        if (k == -1)
        {
          printf("%.1f + %.1fe^(-%.0fk) ºC\n",rt,((cml[i] * (ict - rt)) + (mml[i][0] * (imt[0] - rt)))/(mml[i][0] + cml[i]),tpc[i]);
        }
        if (k != -1)
        {
          ft[i] = rt + ((cml[i] * (ict - rt)) + (mml[i][0] * (imt[0] - rt)))/(mml[i][0] + cml[i]) * pow(e, -1 * tpc[i] * k);
          printf("%.1f ºC\n",ft[i]);
        }
      }/*End of if the milk is warm xor cold*/
      else if(strcmp(mw, "both")==0)/*If the milk is warm and cold*/
      {
        if (k == -1)
        {
          printf("%.1f + %.1fe^(-%.0fk) ºC\n",rt,((cml[i] * (ict - rt)) + (mml[i][0] * (imt[0] - rt)) + (mml[i][1] * (imt[1] - rt)))/(mml[i][0] + mml[i][1] + cml[i]),tpc[i]);
        }
        if (k != -1)
        {
          ft[i] = rt + ((cml[i] * (ict - rt)) + (mml[i][0] * (imt[0] - rt)) + (mml[i][1] * (imt[1] - rt)))/(mml[i][0] + mml[i][1] + cml[i]) * pow(e, -1 * tpc[i] * k);
          printf("%.1f ºC\n",ft[i]);
        }
      }/*End of if the milk is warm and cold*/
      else if(strcmp(mw, "none")==0)/*If there is no milk*/
      {
        if (k == -1)
        {
          printf("%.1f + %.1fe^(-%.0fk) ºC\n",rt,ict - rt,tpc[i]);
        }
        if (k != -1)
        {
          ft[i] = rt + (ict - rt) * pow(e, -1 * tpc[i] * k);
          printf("%.1f ºC\n",ft[i]);
        }
      }/*End of if there is no milk*/
    }
    printf("\n");

    /*End of Calculations & Results*/

  return 0;
} /*End of Main*/
