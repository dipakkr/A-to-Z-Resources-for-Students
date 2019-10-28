typedef struct node
{
 int info;
 struct node *next;}NODE;
int delAt(NODE**,int *e,int pos);
void create(NODE**);
void disp(NODE*);

