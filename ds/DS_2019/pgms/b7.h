typedef struct node
{
 int info;
 struct node *next;
}NODE;
void init(NODE **h);
void create(NODE**);
int delAt(NODE** h,int* pe,int pos);
void disp(NODE*);
int insAfter(NODE** h,int ele,int ginfo);

