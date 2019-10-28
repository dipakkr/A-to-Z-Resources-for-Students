winner(CLIST *cl)
{
 NODE *p,*q;
 int start=3;
 int skip=3;
 p=cl->head;
 int cnt=1;
 while(cnt!=start)
  {
   p=p->next;cnt++;}
  cnt=1;
  while(p!=p->next)
   { cnt=0;
     while(cnt!=skip)
      {
         q=p;p=p->next;
         cnt++;
      } 
    q->next=p->next;
    free(p);
   }
