#include<stdio.h>
#include<stdlib.h>
struct node{                    // Making of a structure with a data part and address part 
	int data_part;
	struct node *address;       // here struct node is used as a data type
};
struct node *start=NULL;        // making of a start box and initializing with null(0)
void insert()                   // making of an insert function
{
	struct node *ptr,*temp;     // Making of two pointer(*ptr, *temp) having datatype structure
	
	temp=(struct node *)malloc(sizeof(struct node)); 
	/* Memory allocation to the temp pointer, means this temp will contain the address of 
	 the structure we have made above [i.e struct node]  */
	 
	printf("Enter the data you want:\n");  
	scanf("%d",&temp->data_part); // Inserting the data into the temp data part, indirectly in the first node
	temp->address=NULL;   // Filling the address of temp variable with NULL
	if(start==NULL)
	{
		start=temp;  
	}
	else
	{
		ptr=start;
		while(ptr->address!=NULL)
		{
			ptr=ptr->address;
		}
		ptr->address=temp;
	} // [5,2nd] 2nd[10,3rd] 3rd[56,NULL]  
}
int main()
{
	while(1)
	{
	insert();
	}
	exit(0);
	return 0;
}