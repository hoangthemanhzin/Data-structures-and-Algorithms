#include<iostream>
#include<math.h>

using namespace std;

struct node{
	int data;
	node *left;
	node *right;
};
node *insert(node *t, int x){
	if (t == NULL){
		node *temp = new node;
		temp->data =x;
		temp->left = NULL;
		temp->right = NULL;
		return temp;
	} else{
		if (x < t->data){
			t->left = insert(t->left, x);
		} else{
			t->right = insert(t->right, x);
		}
	}
}
int bacTree(node *t){
    if(t == NULL){
        return -1;
    }
    return 1 + max(bacTree(t->left),bacTree(t->right));
}
bool kiemtra(node *t){
    if(abs(bacTree(t->right) - bacTree(t->left)) <= 1){
        return true;
    }else{
        return false;
    }
}
node *xoayphai(node *t){
    node *b =  t->left;
	node *d = b->right;
	t->left = d;
	b->right = t;
    return b;
}
node *xoaytrai(node *t){
	node *b = t->right;
    node *c = b->left;
	t->right = c;
	b->left = t;
	return b;
}
node *nangcap(node *t){
	if(abs(bacTree(t->right) - bacTree(t->left)) > 1){
		if(bacTree(t->right) > bacTree(t->left)){
			node *p = t->right;
                if(bacTree(p->right) > bacTree(p->left)){
					t = xoaytrai(t);
				}else{
					t->right = xoayphai(t->right);
					t = xoaytrai(t);
				}
		}else{
			node *p = t->left;
			if(bacTree(p->left) > bacTree(p->right)){
				t = xoayphai(t);
			}else{
				t->left = xoaytrai(t->left);
				t = xoayphai(t);
			}
		}
	}
	if (t->left != NULL) t->left =nangcap(t->left);
	if (t->right != NULL) t->right = nangcap(t->right);
	return t;
}
int main(){
	int n, temp;
	cin >> n;
	node * t = NULL;
	for (int i = 0; i < n; i++){
		cin >> temp;
		t = insert(t, temp);
	}
	while(!kiemtra(t)){
		t = nangcap(t);
	}
	cout<<bacTree(t);
}