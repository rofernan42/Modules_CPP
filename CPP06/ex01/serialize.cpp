#include "serialize.hpp"

void	*serialize(void)
{
	char		*data = new char[16 + sizeof(int)];
	std::string	alphanum("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789");

	std::srand(time(NULL));
	for (int i = 0; i < 8; i++)
		data[i] = alphanum[rand() % alphanum.length()];
	*reinterpret_cast<int*>(data + 8) = std::rand();
	for (int i = 8 + sizeof(int); i < 20; i++)
		data[i] = alphanum[rand() % alphanum.length()];
	return (data);
}

Data	*deserialize(void *raw)
{
	Data *data = new Data;
	char *rawdata = reinterpret_cast<char*>(raw);

	data->s1 = std::string(rawdata, 8);
	data->n = *reinterpret_cast<int*>(rawdata + 8);
	data->s2 = std::string(rawdata + 8 + sizeof(int), 8);
	return (data);
}
