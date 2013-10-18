#include<iostream>
#include<stdlib.h>
#include"list.h"

using namespace std;

int main(int argc, char * argv[]) {
	List * l=new List();
	for (int i=0;i<argc;i++) {
		l->add(atoi(argv[i]));
	}
	l->print();
	List::Node * p=l->head;
	List::Node * q=l->head;
	while(p!=NULL) {
		q=p->next;
		while(q!=NULL) {
			if (q->data==p->data) {
				List::Node * tmp = q->next;
				q->data=tmp->data;
				q->next=tmp->next;
				delete tmp;
			}
			else q=q->next;
		}
		p=p->next;
	}
	l->print();
	return 0;
}


