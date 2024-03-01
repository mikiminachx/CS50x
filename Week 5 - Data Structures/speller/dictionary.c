// Implements a dictionary's functionality

#include <ctype.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <strings.h>
#include <math.h>

#include "dictionary.h"

// Represents a node in a hash table
typedef struct node
{
    char word[LENGTH + 1];
    struct node *next;
} node;

// TODO: Choose number of buckets in hash table
const unsigned int N = 200000;

// Count for number of words in dict
int count = 0;

// Hash table
node *table[N];

// Returns true if word is in dictionary, else false
bool check(const char *word)
{
    // Hash the word to get hash value
    int index = hash(word);

    // Move along the linked list
    node *c = table[index];

    while (c != NULL)
    {
        if (strcasecmp(c->word, word) == 0)
        {
            return true;
        }
        c = c->next;
    }
    return false;
}

// Hashes word to a number
unsigned int hash(const char *word)
{
    unsigned int roll_sum = 0;
    unsigned int squared = 0;

    for (int i = 0; i < strlen(word); i++)
    {
        squared = pow(toupper(word[i]), 2);

        if (i == round(strlen(word) / 2))
        {
            roll_sum = roll_sum + round(sqrt(roll_sum)) + 17;
        }

        roll_sum = squared + roll_sum + 47;
    }

    return roll_sum % N;
}

// Loads dictionary into memory, returning true if successful, else false
bool load(const char *dictionary)
{
    // Open the dictionary file
    FILE *file = fopen(dictionary, "r");
    if (file == NULL)
    {
        return false;
    }

    else if (file != NULL)
    {
        char buffer[LENGTH + 1];
        int hash_index = 0;
        while(fscanf(file, "%s", buffer) != EOF)
        {
            node *n = malloc(sizeof(node));
            if (n == NULL)
            {
                return false;
                break;
            }
            else if (n != NULL)
            {
                strcpy(n->word, buffer);
                n->next = NULL;

                hash_index = hash(buffer);

                if (table[hash_index] == NULL)
                {
                    table[hash_index] = n;
                }
                else if (table[hash_index] != NULL)
                {
                    n->next = table[hash_index];
                    table[hash_index] = n;
                }
                count++;
            }
        }
        fclose(file);
        return true;
    }
    else
    {
        return false;
    }
}

// Returns number of words in dictionary if loaded, else 0 if not yet loaded
unsigned int size(void)
{
    return count;
}

// Unloads dictionary from memory, returning true if successful, else false
bool unload(void)
{
    for (int i = 0; i < N; i++)
    {
        node *tmp = table[i];
        node *c = table[i];

        while (tmp != NULL)
        {
            c = c->next;
            free(tmp);
            tmp = c;
        }
    }
    return true;
}
