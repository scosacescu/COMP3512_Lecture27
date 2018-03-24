#pragma once

template <typename Container>
Container getMax(const Container& c){
	Container max = c[0];
	for (typename Container::const_iterator it = c.begin(); it != c.end(); ++it ) 
	{
		if (*it > max) {
			max = *it;
		}
	}
	return max;
}