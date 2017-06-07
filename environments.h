#ifndef _ENVIRONMENTS_H_
#define _ENVIRONMENTS_H_

#include "structures.h"

/**
 * Environment constructor and destructor types.
 */
typedef Env (*EnvConstructor)(void*);
typedef void (*EnvDestructor)(Env);

Env newBlankEnv(void*);
Env buildEnv(int, void*);

void disposeEnv(Env);
void autoDisposeEnv(Env);

/**
 * A type that represent functions that
 * search an environment for a variable.
 */
typedef ExpVal (*EnvSearcher)(char*, Env);

/**
 * Looks up the value of the variable associated with a given
 * identifier in a given environment.
 *
 * Type: {char*, Env} -> ExpVal
 */
ExpVal apply_env(char*, Env);

#endif
