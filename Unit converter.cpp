#include <stdio.h>

int main() {
  char category;
  int tempChoice;
  int currencyChoice;
  int massChoice;
  
  int userinputF;                   // User input Fahreinheit
  int userinputC;                   // User input Celsius
  int fahrenheitToCelcius;          // variable that stores the converted F->C
  int celciusToFahrenheit;          // variable that stores the converted C->F
  
  int userinputRupeetoEuro;         // User input for Rupee to EURO
  int userinputRupeetoUSD;          // User input for Rupee to USD
  int userinputRupeetoPound;        // User input for Rupee to Pounds
  float RupeetoEURO ;               // varaible that stores the converted Rupee->EURO
  float RupeetoUSD;                 // stores the converted Rupee->USD
  float RupeetoPound;               // stores the converted Rupee->Pounds
  
  int userinputKG;                  // User input for KG
  float KGtoPounds;                 // stores the converted KG->Pounds
  float KGtoTons;                   // stores the conerted KG->Pounds
  
  
  printf("----------------------Welcome to Unit Converter----------------------\n \n");
  printf("Here is a list of conversation to choose from: \n");
  printf("Temperature(T),Currency(C),Mass(M) \n");
  printf("Please enter the letter (T/C/M) you want to convert : ");
  scanf("%c",&category);
  
  if(category == 'T'){
      printf("\n\n----------------------Welcome to Temperature Converter---------------------- \n");
      printf("Here is a list of conversations to choose from: \n");
      printf("Enter 1 for Fahrenheit to Celsius. \n");
      printf("Enter 2 for Celsius to Fahrenheit. \n");
      printf(">>");
      scanf("%d",&tempChoice);
      if(tempChoice == 1){
          printf("\nPlease enter the Fahrenheit degree: ");
          scanf("%d",&userinputF);
          fahrenheitToCelcius =  ((userinputF-32) * (5.0/9.0));
          printf("Celcius: %d",fahrenheitToCelcius);
      }
      else if(tempChoice == 2){
        printf("\nPlease enter the Celcius degree: ");
        scanf("%d",&userinputC);
        celciusToFahrenheit = ((9.0/5.0)*userinputC + 32);
        printf("Fahrenheit: %d",celciusToFahrenheit);
      }
      else
        printf("Please enter the correct choice. \n");
   }
   
  
  else if(category == 'C') {
      printf("\n\n----------------------Welcome to Currency Converter---------------------- \n");
      printf("Here is a list of conversations to choose from: \n");
      printf("Enter 1 for convert IND rupee to Euro. \n");
      printf("Enter 2 for convert IND rupee to USD. \n");
      printf("Enter 3 for convert IND rupee to POUND. \n");
      printf(">>");
      scanf("%d",&currencyChoice);
      if(currencyChoice == 1){
          printf("\nPlease enter the rupee amount: ");
          scanf("%d",&userinputRupeetoEuro);
          RupeetoEURO = userinputRupeetoEuro * 0.011;
          printf("Euro: %.3f",RupeetoEURO);                                   // %.3f =  float up to only 2 decimal places;
      }
      else if(currencyChoice == 2){
          printf("\nPlease enter the rupee amount: ");
          scanf("%d",&userinputRupeetoUSD);
          RupeetoUSD = userinputRupeetoUSD * 0.012;
          printf("USD: %.3f",RupeetoUSD);
      }
      else if(currencyChoice == 3) {
        printf("\nPlease enter the rupee amount: ");
        scanf("%d",&userinputRupeetoPound);
        RupeetoPound = userinputRupeetoPound * 0.010;
        printf("Pounds: %.3f",RupeetoPound);
      }
      else
        printf("Please enter correct choice. \n");
   }
   
   
  else if(category == 'M'){
      printf("\n\n----------------------Welcome to Mass Converter---------------------- \n");
      printf("Here is a list of conversations to choose from: \n");
      printf("Enter 1 for KG to Pounds. \n");
      printf("Enter 2 for KG to Tons. \n");
      printf(">>");
      scanf("%d",&massChoice);
      if(massChoice == 1){
          printf("\nPlease enter the KG amount: ");
          scanf("%d",&userinputKG);
          KGtoPounds = userinputKG * 2.205;
          printf("Pounds: %.3f",KGtoPounds);
      }
      else if(massChoice == 2) {
          printf("\nPlease enter the KG amount: ");
          scanf("%d",&userinputKG);
          KGtoTons = userinputKG * 0.001;
          printf("Tons: %.3f",KGtoTons);
      }
      else 
        printf("Please enter the correct choice. \n");
   }
   
   printf("\n\n\n--------------------------------\n");
   printf("     UNIT CONVERTER BY VED");
   
  return 0;
}
