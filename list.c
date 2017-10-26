#include<stdio.h>
typedef struct NODE{   
	int value;
	struct Node *next;
}Node;
typedef Node List;
List* CreatList(int value)   //创建一个链表，其实就是一个表头节点，返回其指针
{
	List *list;
	list = (List*)malloc(sizeof(List));
	list->value = value;
	list->next = NULL;
	return list;
}
void InsertNode(List* list,int num)
{
	Node *node = malloc(sizeof(Node));
	node->value = num;
	
	node->next = p->next;
	p->next = node;
}
List* DeleteNode(List* list,int num)
{
	if(list->next==NULL&&list->value==num)
	{
		free(list);
		return 0;
	}
	if(list->value == num)
	{
		list = list->next;
		return list;
	}
	
	Node* PreNode = list;
	Node* CurNode = list->next;
	while(list!=NULL)
	{
		
		if(CurNode->value = num)
		{
			PreNode->next = CurNode->next;
			free(CurNode);
			return list;
		}
		CurNode=CurNode->next;
		PreNode = PreNode->next;
	}
	return list;
}
void TraversalList(List* list)   //遍历一个链表,输出所有节点数据
{
	while(list!=NULL)
	{
		printf("%d ",list->value);
		list = list->next;
	}
	printf("\n");
}
List* AddNodeInHead(List* list,int value)  //在一个链表表头插入一个带数据的节点
{
	Node *node;
	node = (Node*)malloc(sizeof(Node));
	node->value = value;
	node->next = list;
	return node;
}
void AddNodeInTail(List* list,int value)   //在一个链表表尾插入一个带数据的节点
{
	Node *node = (Node*)malloc(sizeof(Node));
	node->next = NULL;
	node->value = value;
	while(list->next!=NULL)
		list = list->next;
	list->next = node;
}
List* ArrayToList(int a[],int len)        //数组变为链表,返回链表头;数组名作为参数会退化成指针，不能用sizeof(a)/sizeof(int)来求数组长度
{
	List *list = CreatList(a[len-1]);
	int num = len-1;
	while(num)
	{
		list = AddNodeInHead(list,a[num-1]);
		num--;
	}
	return list;
}
List* ReversalList(List* list)           //翻转链表1->2->3->4->null to 4->3->2->1->null 
{
	Node *p1,*p2,*p;
	p1 = NULL;
	p2 = list;
	while(p2!=NULL)
	{
		p = p2->next;
		p2->next = p1;
		p1 = p2;
		p2 = p;
	}
	list = p1;
	return list;
}
void DeleteNodeByPointer(List *list,Node *node)    //node为要删除的节点
{
	List *p = list;
	while(p!=NULL)
	{
		if(p = node)    //一般情况
		{
			
		}
	}
}
int main()
{
	int num;
	int a[5] = {1,2,3,4,5};
	scanf("%d",&num);
	/*List *mylist = CreatList(num);
	mylist = AddNodeInHead(mylist,10);
	mylist = AddNodeInHead(mylist,90);
	AddNodeInTail(mylist,20);
	TraversalList(mylist);*/
	List *mylist = ArrayToList(a,sizeof(a)/sizeof(*a));
	TraversalList(mylist);
	mylist = ReversalList(mylist);
	TraversalList(mylist);
	return 0;
}





