/*  General Requierments:
	Hash Method: ...
	Collision Resolution: ...
	Hash Array Size: ...
	__________________
	Efficiency Factor->
	# of Collisions: ...
	Load Factor: ... (#of filled spots / #array size)

*/


/* Action Plan for this example
	Hash Method: 
	Collision Resolution: linked list
	Hash Array Size: ...
	__________________
	Efficiency Factor->
	# of Collisions: ...
	Load Factor: ... (#of filled spots / #array size)
*/


// Defining Linked List nodes for collision resolution
typedef struct node STUDENT_NAME
{
	int key;
	struct node *next;
};	


// hash function: Modulo
int hash (int key, int hash_array_size);


/* hash function: direct hashing
int hash (int key)
{
	return key;
}
*/


// insert the key into hash array (hash table) at index = hash value
void insert (int data, int index);

