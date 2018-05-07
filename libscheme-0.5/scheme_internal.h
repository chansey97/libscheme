//
//  scheme_internal.h
//  scheme
//
// File added to libscheme by idz.

#ifndef scheme_internal_h
#define scheme_internal_h

void scheme_init_fun(Scheme_Env* env);
void scheme_init_char(Scheme_Env* env);
void scheme_init_error(Scheme_Env* env);
void scheme_init_syntax(Scheme_Env* env);
void scheme_init_char(Scheme_Env* env);
void scheme_init_symbol(Scheme_Env* env);
void scheme_init_bool(Scheme_Env* env);

int scheme_strlen(const char* s);

#endif /* scheme_internal_h */
