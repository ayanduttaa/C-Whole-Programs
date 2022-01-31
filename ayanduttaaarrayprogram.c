#include<stdio.h>
int main()
{
  int size=0,arr[size];
    printf("Welcome to my Array Program !\n");
    printf("Let's create an array.\n");
    sizeagain:
    printf("Enter size of your array : ");
    scanf("%d",&size);
if(size>0)
  {
    printf("Let's add elements inside your array\n");
    for(int i=0;i<size;i++)
    {
        int ele;
        printf("Enter element for %d index : ",i);
        scanf("%d",&ele);
        arr[i]=ele;
    }
    printf("Showing array\n");
    for(int i=0;i<size;i++)
    {
      printf("Your element at index %d is : %d\n",i,arr[i]);
    }
    int choice;
    chooseagain:
    printf("Enter operation that you want to perform on your array :\n");
    printf("Press 1 to insert new element\n");
    printf("Press 2 to delete an element\n");
    printf("Press 3 to search for an element\n");
    printf("Press 4 to sort your array\n");
    printf("Press 5 to EXIT the program\n");
    printf("Press 6 to view your array\n");
    printf("Enter you choice : ");
    scanf("%d",&choice);
    if(choice==1 || choice==2 || choice==3 || choice==4 || choice==5 || choice==6)
    {
      switch(choice)
        {
          case 1:
            {
               int newele,index;
               anotherinsert:
               printf("Welcome to the array insertion program\n");
               printf("Enter the element you want to add : ");
               scanf("%d",&newele);
               printf("Enter the index where you want to add new element : ");
               scanf("%d",&index);
               for(int i=size;i>=index;i--)
                 {
                   arr[i+1]=arr[i];
                 }
               arr[index]=newele;
               size+=1;
               for(int i=0;i<size;i++)
                 {
                   printf("Your element at index %d is : %d\n",i,arr[i]);
                 }
               int exitchoice;
               printf("Operation is completed.\nEnter 1 to go back to the menu\nPress 2 to perform another operation\nEnter 0 to EXIT program\n");
               printf("Enter choice : ");
               scanf("%d",&exitchoice);
              switch(exitchoice)
                 {
                   case 1:
                       goto chooseagain;
                   case 2:
                       goto anotherinsert;
                   case 0:
                       goto end;
                 }

             }
           case 2:
             {
                int delindex;
                anotherdelete:
                printf("Welcome to the element deletion program\n");
                printf("Enter the index of the element you want to delete : ");
                scanf("%d",&delindex);
                for(int i=delindex;i<size;i++)
                  {
                    arr[i]=arr[i+1];
                  }
                size=size-1;
                printf("The element at index %d is successfully deleted\n",delindex);
                printf("Showing your array\n");
                for(int i=0;i<size;i++)
                  {
                    printf("Your element at index %d is : %d\n",i,arr[i]);
                  }
                  int exitchoice;
                  printf("Operation is completed.\nEnter 1 to go back to the menu\nPress 2 to perform another operation\nEnter 0 to EXIT program\n");
                  printf("Enter choice : ");
                  scanf("%d",&exitchoice);
                  switch(exitchoice)
                    {
                      case 1:
                          goto chooseagain;
                      case 2:
                          goto anotherdelete;
                      case 0:
                          break;
                    }
             }
           case 3:
             {
               int searchele;
               anothersearch:
               printf("Enter the element you want ro search : ");
               scanf("%d",&searchele);
               for(int i=0;i<size;i++)
                 {
                   reloop:
                   if(arr[i]==searchele)
                     {
                       printf("Element '%d' is at index %d\n",searchele,i);
                     }
                   else
                     {
                       i=i+1;
                       if(i+1<size+1)
                         {

                           goto reloop;
                         }
                       else
                         {
                           goto goahead;
                         }
                     }
                 }
                 int exitchoice;
                 goahead:
                 printf("Operation is completed.\nEnter 1 to go back to the menu\nPress 2 to perform another operation\nEnter 0 to EXIT program\n");
                 printf("Enter choice : ");
                 scanf("%d",&exitchoice);
                 switch(exitchoice)
                   {
                     case 1:
                         goto chooseagain;
                     case 2:
                         goto anothersearch;
                     case 0:
                         goto end;
                   }
             }
           case 4:
             {
                int orderchoice;
                anothersort:
                printf("Welcome to the Array sort program\n");
                printf("Press 1 for sort your array in ascending order\n");
                printf("Press 2 for sort your array in descending order\n");
                printf("Enter your choice : ");
                scanf("%d",&orderchoice);
                if(orderchoice==1)

                      {
                        for(int i=0;i<size;i++)
                          {
                             for(int j=i;j<size;j++)
                               {
                                 if(arr[i]>=arr[j])
                                   {
                                     int a;
                                     a=arr[j];
                                     arr[j]=arr[i];
                                     arr[i]=a;
                                   }
                               }
                          }
                        for(int i=0;i<size;i++)
                          {
                            printf("Your element at index %d is : %d\n",i,arr[i]);
                          }
                      }
                    else if(orderchoice==2)
                      {
                        for(int i=0;i<size;i++)
                          {
                             for(int j=i;j<size;j++)
                               {
                                 if(arr[i]<=arr[j])
                                   {
                                     int a;
                                     a=arr[j];
                                     arr[j]=arr[i];
                                     arr[i]=a;
                                   }
                               }
                          }
                            for(int i=0;i<size;i++)
                                {
                                   printf("Your element at index %d is : %d\n",i,arr[i]);
                                }
                      }

                  int exitchoice;
                  printf("Operation is completed.\nEnter 1 to go back to the menu\nPress 2 to perform another operation\nEnter 0 to EXIT program\n");
                  printf("Enter choice : ");
                  scanf("%d",&exitchoice);
                  switch(exitchoice)
                    {
                      case 1:
                          goto chooseagain;
                      case 2:
                          goto anothersort;
                      case 0:
                          goto end;
                    }
             }
           case 5:
             {
               end:
               printf("Thank you for visiting my array program.\n-Ayan");
               break;
             }
           case 6:
             {
               for(int i=0;i<size;i++)
                 {
                   printf("Your element at index %d is : %d\n",i,arr[i]);
                 }
               goto chooseagain;
             }
        }
    }
    else
    {
      printf("Please enter a valid choice\n");
      goto chooseagain;
    }
  }
else
  {
    printf("Size should be atleast 1 or more\n");
    goto sizeagain;
  }
  return 0;
}
