#include<stdio.h>
#include<string.h>
int main(){
	//personal information//
	char name[]="Mazhar Hussain";
	char fathername[]="Ashfaq Hussain";
    int accountno=998877;
	int password=3202;
	float amount=100000;
	 //variable declaration//
    float remainingbalance;
	int newpin;
	int enteramount;
	int counter;
	int choice;
	int pin;
	int accountnum;
	int decision;
	
	location://all the procedure starts again from this step to onwards//
	
	printf("*************************************************************");
	printf("\n**************welcome to HBL Atm services****************\n");
	printf("***********************************************************\n");
	printf("---------------------insert your card---------------------\n");
	printf("***********************************************************\n");
	printf("***********************************************************\n");
	printf("............please wait................\n");
	printf("card inserted\n");
	
	location1://this step happens in case user enterd wrong pin//
		
	printf("enter your pin\n");
	scanf("%d",&pin);
	printf("\n--------\n");

	while(pin==password){
		location2://in case wrong choice is selected this step go back and ask to enter correct choice//
		
		printf("enter your choice \n");
		printf("1. cash withdraw\n");
		printf("2. check balance\n");
		printf("3. fast cash\n");
		printf("4. online cash transfer\n");
		printf("5. Bill payment\n");
		scanf("%d",&choice);
		switch(choice){
		case 1:
		point1://when enter amount is wrong program shift control to this step//
		printf("\nenter cash to withdraw\n");
		scanf("%d",&enteramount);
		if(enteramount>=amount){
			printf("enter valid amount becuse you have not sufficent balance\n");
			goto point1;//when enter amount is wrong program shift control to point 1//
		}
		else
		remainingbalance=amount-enteramount;
		goto point;//this step shift controls to end statemsnts and go out of loop//
		case 2:
		printf("\nyou are checking balance\n ");
		printf("\nyour name is %s\n",name);
		printf("\nyour name is %s\n",fathername);
		printf("\nyour account number is %d\n",accountno);
		printf("\nbalance in your account is %f\n",amount);
		printf("\ntake your card\n");
        printf("\n*********thankyou for using our services**********\n");
        goto location;	
		case 3:
		back://when wrong fast cash option is select the shift is send here//
			
        printf("enter your choice from following\n");
        printf("1.1000\n 2.2000\n 3.5000\n 4.10000\n 5.15000\n");
        scanf("%d",&decision);
        switch(decision){
        case 1:
       	remainingbalance=amount-1000;
		goto point;//this step shift controls to end statemsnts and go out of loop//
		case 2:
		remainingbalance=amount-2000;
		goto point;//this step shift controls to end statemsnts and go out of loop//
		case 3:
		remainingbalance=amount-5000;
		goto point;//this step shift controls to end statemsnts and go out of loop//
		case 4:
		remainingbalance=amount-10000;
		goto point;//this step shift controls to end statemsnts and go out of loop//
		case 5:
		remainingbalance=amount-15000;
		goto point;//this step shift controls to end statemsnts and go out of loop//
		default:
			printf("invalid choice selected\n");
		goto back;//when wrong fast cash option is select the shift is send to enter correct option//
	}
		case 4:
		printf("enter account no to which you want to send amount\n");
		scanf("%d",&accountnum);
		printf("\n--------\n");
		point2:
		printf("enter amount to send\n");
		scanf("%d",&enteramount);
		if(enteramount>25000){
		printf("enter valid amount less than equal to 25000 and also not enter amount greater than actualamount in your account\n");
		goto point2;
		}
		else
		printf("please wait\n");
		printf("\n--------\n");
		printf("%d amount is send on account number %d\n",enteramount,accountnum);
		remainingbalance=amount-enteramount;
		goto point;//this step shift controls to end statemsnts and go out of loop//
		
		case 5:
				printf("you are paying bill through ATM\n");
				printf("\n--------\n");
				printf("enter account no to which bill is to be paid\n");
				scanf("%d",&accountnum);
				printf("\n--------\n");
				point3:
				printf("enter amount to be send to %d account no\n",accountnum);
				scanf("%d",&enteramount);
					if(enteramount>50000){
			printf("enter valid amount less than equal to 50000 and also not enter amount greater than actualamount in your account\n");
			goto point3;
		}
		else
		printf("please wait\n");
	    printf("\n--------\n");
				printf("please wait..........................\nit is paying bill\n");
				printf("your bill is paid\n\n");
				remainingbalance=amount-enteramount;
				goto point;	//this step shift controls to end statemsnts and go out of loop//
        
		default:
        	printf("wrong choice entered\n");}
        goto location2;//in case wrong choice is selected this step go back and ask to enter correct choice//
        
		point://after some procedure and coming out of loop all process resumes here//
			area://when wrong choice entered ask to enter choice again//
			printf("would you like to take recipet\n");
			printf("1.YES\n2.NO\n");
			scanf("%d",&counter);
			switch(counter){
		case 1:
		printf("\ntake recipet\n ");
		printf("\nyour name is %s\n",name);
		printf("\nyour name is %s\n",fathername);
		printf("\nyour account number is %d\n",accountno);
		printf("\nbalance in your account is %f\n",remainingbalance);
		printf("\ncollect your cash\n");
		printf("\ntake your card\n");
		printf("\n--------\n");
        printf("\n*********thankyou for using our services**********\n\n\n");
		break;
		case 2:
		printf("\ncollect your cash\n");
		printf("\ntake your card\n");
		printf("\n--------\n");
        printf("\n*********thankyou for using our services**********\n\n\n");
		break;
		default:
			printf("invalid choice\n");
			goto area;//when wrong choice entered//
			break;
	}
      float temp=amount;
        amount=remainingbalance;
        remainingbalance=temp;
        goto location;//goto to the start of program//
   }
        printf("invalid pin\n");
        goto location1;//got location for entering correct pin//
   		return 0;
   }
