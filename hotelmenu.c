

#include <stdio.h>

int main()
{
   int tot=0,cnt=0,ch,c,ct;
   float finaltot,cgst,sgst;
   
   menu:
   printf("\n 1.Starter \n2.Veg Menu \n3.Non Veg Menu");
   printf("\nEnter Your Choice");
   scanf("%d",&ch);
   
   
   if(ch==1)
   {
       starter:
      
       printf("1. \nStarter 1  :200");
       printf("2. \nStarter 2  :300");
       printf("3. \nStarter 3  :400");
       printf("\nSelect Starter");
       scanf("%d",&ch);
       
       
       if(ch==1)
       {
           tot=tot+200;
           cnt++;
       }
        else if(ch==2)
       {
           tot=tot+300;
           cnt++;
       }
         else if(ch==3)
       {
           tot=tot+400;
           cnt++;
       }
       
       else
       {
           printf("Thank YOU");
       }
       
       printf("\n Do you want to continue \n 1 Continue \n 2 Next Order ");
       scanf("%d",&c);
       if(c==1)
       {
           
           goto starter;
       }
       
       
       
       printf("Total =%d",tot);
       
       
       
   }
   
   
   
   if(ch==2)
   {
       veg:
      
       printf("1. \n Veg 1  :200");
       printf("2. \n Veg 2  :300");
       printf("3. \n Veg 3  :400");
       printf("\nSelect Veg");
       scanf("%d",&ch);
       
       
       if(ch==1)
       {
           tot=tot+200;
           cnt++;
       }
        else if(ch==2)
       {
           tot=tot+300;
           cnt++;
       }
         else if(ch==3)
       {
           tot=tot+400;
           cnt++;
       }
       
       else
       {
           printf("Thank YOU");
       }
       
        printf("\n Do you want to continue \n 1 Continue \n 2 Next Order ");
       scanf("%d",&c);
       if(c==1)
       {
           
           goto veg;
       }
       
       
       
       printf("Total =%d",tot);
   }
       
       
       
 
   
   
   if(ch==3)
   {
       nonveg:
      
       printf("1. \nNon Veg 1  :200");
       printf("2. \nNon Veg 2  :300");
       printf("3. \nNon Veg 3  :400");
       printf("\nSelect Starter");
       scanf("%d",&ch);
       
       
       if(ch==1)
       {
           tot=tot+200;
           cnt++;
       }
        else if(ch==2)
       {
           tot=tot+300;
           cnt++;
       }
         else if(ch==3)
       {
           tot=tot+400;
           cnt++;
       }
       
       else
       {
           printf("Thank YOU");
       }
       
       printf("\n Do you want to continue \n 1 Continue \n 2 Next Order ");
       scanf("%d",&c);
       if(c==1)
       {
           
           goto nonveg;
       }
       
       
       
       printf("Total =%d",tot);
       
   }
   
   
    else
    {
        printf("Invalid Choice");
    }
    
    printf("Do You want to Continue ");
    scanf("%d",ct);
    if(ct==1)
    {
        goto menu;
    }
    
    
    sgst=tot*0.6;
    cgst=tot*0.6;
    
    finaltot=tot+sgst+cgst;
    
    if(cnt>0)
    {
        printf("Final Total \t\t :%f",finaltot);
        
    }
    
    
    
    
       
       
   
     
   
   

    return 0;
}