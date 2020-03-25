{
	listint_t *new;

	if (*head == NULL);
		return (NULL);

	new = malloc(sizeof(listint_t));
		if(new == NULL)
			return (NULL);
	new->n = n;
	n->next = 
