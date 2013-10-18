#include <stdlib.h>
#include "list.h"

int main(int argc, char * argv[]) {
	List * l=new List();
	int k=atoi(argv[1]);
	for (int i=2;i<argc;i++) {
		l->add(atoi(argv[i]));
	}
	l->print();
	List::Node * p=l->head;
	List::Node * q=l->head;
	for (int i=0;i<k;i++) {
		if (q==NULL) return -1;
		q=q->next;
	}
	while(q!=NULL) {
		p=p->next;
		q=q->next;
	}
	cout<<p->data<<endl;
	return 0;
}

