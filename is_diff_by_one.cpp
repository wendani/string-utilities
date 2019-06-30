bool isDiffByOne(const string &a, const string &b)
{
	if (a.length() != b.length()) {
		return false;
	}

	int diff = 0;
	auto it_a = a.begin();
	auto it_b = b.begin();
	while (it_a != a.end()) {
		if (*it_a != *it_b) {
			diff++;
			if (diff > 1) {
				return false;
			}
		}

		it_a++;
		it_b++;
	}

	if (!diff) {
		return false;
	}

	return true;
}
