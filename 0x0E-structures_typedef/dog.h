#ifndef DOG_H
#define DOG_H

/**
 *struct dog - a dog's basix info
 *@name: First member
 *@age: Second member
 *@owner: Third member
 *Decsription: this struct is for the dog
 */
struct dog
{
	char *name;
	float *age;
	char *owner;
};
 /**
 *dog_t - typedef fofr the struct dog
 */
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
