#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>


typedef struct Phonebook
   {
      char FirstName[20];
      char LastName[20];
      char PhoneNumber[20];
   } phone;


void AddEntry(phone * );
void DeleteEntry(phone * );
void PrintEntry(phone * );
void FreeContacts (phone * );


int counter = 0;


FILE *pRead;
FILE *pWrite;



int main (void)
   {




      phone *phonebook;
      phonebook = (phone*) malloc(sizeof(phone)*100);


      int iSelection = 0;


         if (phonebook == NULL)

         {

         printf("\n \n Something wrong happened \n \n. The program will now exit");
         return 1;
         }
         else {}

      do
      {



         system("cls");
         printf("\n\t\t_______________________________________________\n");
         printf("\t\t_______________________________________________\n");
         printf(" \n\t\t\t\tPhoneBook App Menu\n\n");
         printf("\t\t_______________________________________________\n");
         printf("\t\t_______________________________________________\n\n");
         printf("\n\n\t\t(1)\tAdd Friend \n");
         printf("\n\t\t(2)\tDelete Friend \n");
         printf("\n\t\t(3)\tDisplay Phonebook Entries \n");
         printf("\n\t\t(4)\tExit Phonebook \n");
         printf("\n\t\t_____________________________________________");
         printf("\n\t\t_____________________________________________\n");
         printf("\n\n\t\t What would you like to do? ");



         scanf("%d", &iSelection);
         getch();


         if (iSelection == 1)
         {
                  system("cls");
            AddEntry(phonebook);
            getch();
         }



         if (iSelection == 2)
         {
                  system("cls");
            DeleteEntry(phonebook);
            getch();
         }


         if (iSelection == 3)
         {
                  system("cls");
            PrintEntry(phonebook);
            getch();
         }


         if (iSelection == 4)
         {
            system("cls");
            printf("\n\n You have chosen to exit the Phonebook.\n\n");
            system("pause");
            FreeContacts(phonebook);
            return 0;
         }
      } while (iSelection <= 4);
   }


void AddEntry (phone * phonebook)
{
   int x,i;
   pWrite = fopen("phonebook.dat", "a");
   if ( pWrite == NULL )
   {
      printf("\n\n Something Wrong Happend. Program will Exit. ");
      return;
   }
      else
      {
         counter++;
         realloc(phonebook,sizeof(phone));





         printf("\nFirst Name: ");
         scanf("%s", phonebook[counter-1].FirstName);

         printf("Last Name: ");
         scanf("%s", phonebook[counter-1].LastName);

         printf("Phone Number: ");
         scanf("%s", phonebook[counter-1].PhoneNumber);




         printf("\n\tYour Friend successfully added to Phonebook\n");

         fprintf(pWrite, "%s \t %s \t%s \n", phonebook[counter-1].FirstName, phonebook[counter-1].LastName, phonebook[counter-1].PhoneNumber);
         fclose(pWrite);



      }
}

void DeleteEntry (phone * phonebook)
{
   int x = 0;
   int i = 0;
   char deleteFirstName[20];
   char deleteLastName[20];

     printf("Make Sure the Name is on the list\n");
      printf("\nFirst name: ");
      scanf("%s", deleteFirstName);
      printf("Last name: ");
      scanf("%s", deleteLastName);

      for (x = 0; x < counter; x++)
      {
         if (strcmp(deleteFirstName, phonebook[x].FirstName) == 0) //if it is true then proceed below
         {
            if (strcmp(deleteLastName, phonebook[x].LastName) == 0) //if true again proceed below
            {
                for ( i = x; i < counter - 1; i++ )
               {
                  strcpy(phonebook[i].FirstName, phonebook[i+1].FirstName);
                  strcpy(phonebook[i].LastName, phonebook[i+1].LastName);
                  strcpy(phonebook[i].PhoneNumber, phonebook[i+1].PhoneNumber);
               }

               printf("Record deleted from the phonebook.\n\n");

               --counter;
               return;
            }
         }
      }

   printf("\n\n\t OOops! \n\n  \n\nThat contact was not found, please try again.");
}


void PrintEntry (phone * phonebook)
{
   int x = 0;

   if(counter>0){
   printf("\nPhonebook Entries:\n\n ");
   pRead = fopen("phonebook.dat", "r");
   if ( pRead == NULL)
   {

      printf("\n\n OOoops!\n\nSomething Wrong Happened. \n\n The Program Will Exit now. ");
      return;
      //exit(EXIT_FAILURE);
   }
   else
   {
      for( x = 0; x < counter; x++)
      {
         printf("\n(%d)\n", x+1);
         printf("Name: %s %s\n", phonebook[x].FirstName, phonebook[x].LastName);
         printf("Number: %s\n", phonebook[x].PhoneNumber);
      }
   }
   fclose(pRead);
   }

   else if(counter==0)
   {
   printf("\n \n SHAME! \n\n You have no friends yet! \n ");
   }
}





void FreeContacts (phone * phonebook)
{
     --counter;
     for ( ; counter > 0; --counter)
     {
        free(phonebook[counter].FirstName);
        free(phonebook[counter].LastName);
        free(phonebook[counter].PhoneNumber);
        free(phonebook);
        counter = 0;
        return;
     }
}
