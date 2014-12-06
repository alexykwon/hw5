#include <stdio.h>
/* print catalog entry */
void catalog(const char *name, const char *species, int teeth, int age)
{
	printf("%s is a %s with %i teeth. He is %i\n",
			name, species, teeth, age);
}

/* print label  for tank */
void label(const char *name, const char *species, int teeth, int age)
{
	printf("Name:%s\nSpecies:%s\n%i years old, %i teeth\n",
			name, species, teeth, age);
}

int main()
{
	catalog("Snappy", "Piranha", 69, 4);
	label("Snappy", "Piranha", 69, 4);
	return 0;
}