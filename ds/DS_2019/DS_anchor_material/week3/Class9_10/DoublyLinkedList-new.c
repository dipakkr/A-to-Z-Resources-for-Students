#include<stdlib.h>
#include<stdio.h>
#include<string.h>

typedef struct emp {
	char SSN[11];
	char Name[20];
	char Dept[10];
	char Desig[20];
	long int sal;
	long int phno;
	struct emp *plink;
	struct emp *nlink;	
} Employee;

Employee* getEmployee() {
	Employee* newEmployee = (Employee*)calloc(sizeof(Employee), 1);
	newEmployee->plink=NULL;
	newEmployee->nlink=NULL;
	printf("Enter Employee's SSN:\n");
	scanf("%s",newEmployee->SSN);
	printf("Enter Employee's Name:\n");
	scanf("%s",newEmployee->Name);
	printf("Enter Employee's Department:\n");
	scanf("%s",newEmployee->Dept);
	printf("Enter Employee's Designation:\n");
	scanf("%s",newEmployee->Desig);
	printf("Enter Employee's Salary:\n");
	scanf("%ld",&newEmployee->sal);
	printf("Enter Employee's Pn. No:\n");
	scanf("%ld",&newEmployee->phno);
	return newEmployee;
}

void displayEmployee(Employee *temp){
	printf("Employee details to be deleted are:\n\n");
	printf("Employee SSN: %s\n",temp->SSN);
	printf("Employee Name: %s\n",temp->Name);
	printf("Employee Department: %s\n",temp->Dept);
	printf("Employee Designation: %s\n",temp->Desig);
	printf("Employee Salary: %ld\n",temp->sal);
	printf("Employee Ph. NO.: %ld\n",temp->phno);
}

void insert_in_Front(Employee **head){
	Employee *newEmployee = getEmployee();
	if((*head) == NULL){
		(*head) = newEmployee;
		return;
	}
	newEmployee->nlink = (*head);
	(*head)->plink = newEmployee;
	(*head) = newEmployee;
}

void insert_at_End(Employee **head){
	Employee* newEmployee = getEmployee();
	Employee*temp = (*head);
	if((*head) == NULL){
		(*head) = newEmployee;
		return;
	}
	while(temp->nlink != NULL){
		temp = temp->nlink;
	}
	temp->nlink = newEmployee;
	newEmployee->plink = temp;
}

void insertAtPos(int pos, Employee **head){
	int i;
	Employee *newEmployee = getEmployee();
	Employee *temp = (*head);
	if((*head) == NULL){
		(*head) = newEmployee;
		return;
	}
	for(i=1;i<pos-1;i++){
		temp=temp->nlink;
	}
	newEmployee->nlink = temp->nlink;
	newEmployee->plink = temp;
	temp->nlink->plink = newEmployee;
	temp->nlink = newEmployee;
}

void delFront(Employee **head){
	Employee *temp = (*head);
	if(temp == NULL){
		printf("Empty\n");
		return;
	}
	(*head) = temp->nlink;
	(*head)->plink = NULL;
	displayEmployee(temp);
	free(temp);
}

void delEnd(Employee **head){
	Employee* temp = (*head);
	if(temp == NULL){
		printf("Empty\n");
		return;
	}
	while(temp->nlink != NULL){
		temp = temp->nlink;
	}
	temp->plink->nlink = NULL;
	displayEmployee(temp);
	free(temp);
}

void delAtPos(int pos, Employee **head){
	int i;
	Employee *temp = *head;
	if(temp == NULL){
		printf("Empty\n");
		return;
	}
	for(i=1;i<pos;i++){
		temp = temp->nlink;
	}
	temp->nlink->plink = temp->plink;
	temp->plink->nlink = temp->nlink;
	displayEmployee(temp);
	free(temp);
}



void displayList(Employee* head1){
	Employee *temp = head1;
	int count =0;
	while(temp->nlink != NULL){
		printf("[ %s | %s | %s | %s | %ld | %ld ]-->",temp->SSN,temp->Name,temp->Dept,temp->Desig,temp->sal,temp->phno);
		temp = temp->nlink;
		count++;
	}
	count++;
	printf("[ %s | %s | %s | %s | %ld | %ld ]-->NULL\n",temp->SSN,temp->Name,temp->Dept,temp->Desig,temp->sal,temp->phno);
	printf("No. of nodes: %d\n",count);
}

int main(){
	int ch,ch1,N,i,pos;
	Employee* head=NULL;
	Employee *front=NULL, *rear=NULL;

	do{
		printf("1.Insertion of N employee details\n2.Insertion\n3.Deletion\n4.Display\n5.EXIT\n");
		printf("Enter your choice 1-5\n");
		scanf("%d",&ch);
		switch(ch){
			case 1: printf("Enter no. of employees\n");
				scanf("%d",&N);
				for(i=0;i<N;i++)
					insert_at_End(&head);
				displayList(head);
				break;
			case 2: printf("1.Insert At Front\n2.Insert At End\n3.Insert At Position\nEnter your choice\n");
				scanf("%d",&ch1);
				switch(ch1){
					case 1: insert_in_Front(&head);
						break;
					case 2: insert_at_End(&head);
						break;
					case 3: printf("Enter the position\n");
						scanf("%d",&pos);
						insertAtPos(pos, &head);
						break;
				}
				break;
			case 3: printf("1.Delete At Front\n2.Delete At End\n3.Delete At Position\nEnter your choice\n");
				scanf("%d",&ch1);
				switch(ch1){
					case 1: delFront(&head);
						break;
					case 2: delEnd(&head);
						break;
					case 3: printf("Enter the position\n");
						scanf("%d",&pos);
						delAtPos(pos,&head);
						break;
				}
				break;
			case 4: displayList(head);
				break;
			
			case 5: break;
			default: printf("Invalid Input\n");
		}
	}while(ch != 5);
	return 0;
}
