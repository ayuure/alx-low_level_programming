#ifndef DOG_H
#define DOG_H
/**
 * struct dog - body
 * @name: one
 * @age: two
 * @owner: three
 *
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */

