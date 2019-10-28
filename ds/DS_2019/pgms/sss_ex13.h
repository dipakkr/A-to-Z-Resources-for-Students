typedef struct node
{
 int info;
 struct node *next;}NODE;
int delAt(NODE**,int *e,int pos);
void create(NODE**);
void disp(NODE*);
void rev(NODE**);
int insOrder(NODE**,int e);
void revhalf(NODE **h);
int checkorder(NODE *p) ;


