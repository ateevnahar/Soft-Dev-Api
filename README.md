# Soft-Dev-Api

Object Class Functionality:

```
virtual bool equals (Object* other);

virtual size_t hash();

virtual size_t hash_me () ;

virtual void print();
```

String Class Functionality:


```
size_t hash_me() ;

bool equals(Object *o);

void print();

String* concat(String* c);
```


Array Class Functionality:


```
size_t hash();

void remove(size_t index);

void insert(Object to_add, size_t index);

size_t len();

Object* get(size_t index);

bool is_empty();

void print_index(size_t index);

void print();

void append(Object to_add);

```

If you have any questions or concerns please reach out to us!
Ateev & Omkar
