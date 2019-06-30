int comm_len(char *p, char *q)
{
	int len;

	if (!p || !q) {
		return 0;
	}

	len = 0;
	while (*p && (*p == *q)) {
		len++;
		p++;
		q++;
	}

	return len;
}
