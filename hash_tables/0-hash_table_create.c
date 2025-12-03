#include "hash_tables.h"

/**
 *  hash_table_create - Creates a hash table
 *  @size: Size of the array
 *  Return: A pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *create_table = NULL; /* will store new hash table */

	create_table = malloc(sizeof(hash_table_t)); /* allocating for new hash table */

	if (create_table == NULL) /* if allocation fails */
	{
		return (NULL);
	}
	create_table->size = size; /* sets the size */
	create_table->array = malloc(sizeof(void *) * size); /* allocates for the array */

	if (create_table->array == NULL) /* if allocating the array fails */
	{
		free(create_table);
		return (NULL);
	}
	return (create_table); /* return new table */
}
