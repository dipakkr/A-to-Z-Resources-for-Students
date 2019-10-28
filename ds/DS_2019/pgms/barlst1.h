#define MAX 3
typedef struct arlst
{
 int *a;
 int size;
 int used_size;
}VARLST;
 void init(VARLST *pal);
 void array_alloc(VARLST*);  
 int append(VARLST *pal,int ele);
 int delLast(VARLST *pal,int *pe);
 void disp(VARLST*);
  

