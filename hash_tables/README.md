# Hash Tables Project

This project is part of the **Low-Level Programming** curriculum at Holberton School.  
It focuses on implementing and understanding **hash tables** — a fundamental data structure that maps keys to values for very fast data retrieval.

---

## 📚 Learning Objectives

By the end of this project, you should be able to explain (without Google):

- What is a hash function  
- What makes a good hash function  
- What is a hash table, how they work, and how to use them  
- What is a collision and the main ways of handling collisions  
- What are the advantages and drawbacks of using hash tables  
- The most common use cases for hash tables  

---

## 🧠 Concepts Covered

| Concept | Description |
|----------|--------------|
| **Hash Function** | Converts a key into an array index |
| **Good Hash Function** | Distributes keys evenly, fast to compute |
| **Collision** | When two keys produce the same index |
| **Chaining** | Handling collisions by linking multiple nodes at the same index |
| **Hash Table** | Data structure with an array of linked lists |
| **Use Cases** | Dictionaries, caches, fast lookup systems |

---

## ⚙️ Requirements

- **Editors:** `vi`, `vim`, `emacs`  
- **Compilation:**  
  ```bash
  gcc -Wall -Werror -Wextra -pedantic -std=gnu89
