# 🔐 Hashing - Data Structures & Algorithms

A comprehensive collection of hashing implementations and problem solutions in C++. This repository serves as both a learning resource and a reference guide for understanding hash-based data structures and their real-world applications.

## 📚 What's Inside

### Core Implementations
- **Custom Hash Table** - Built from scratch using separate chaining with dynamic resizing
- **STL Hash Structures** - Practical examples using `unordered_map` and `unordered_set`

### Problem Categories

#### 🎯 String & Array Problems
- Valid Anagram Detection
- Two Sum Problem
- Distinct Element Counting
- Union & Intersection of Arrays

#### 🌍 Real-World Applications
- Itinerary Reconstruction (Travel Routes)
- Majority Element Finding
- Subarray Sum Problems (with K sum variants)
- Largest Subarray with Zero Sum

## 🧠 Key Concepts Covered

**Hash Function Design**: Custom hash functions using character-based polynomial rolling
- Formula: `idx = Σ(char[i]² mod tableSize)`

**Collision Handling**: Separate chaining with linked lists for efficient collision resolution

**Dynamic Resizing**: Automatic rehashing when load factor (λ) exceeds 1.0 to maintain O(1) average operations

## ⚡ Complexity Analysis

| Operation | Average Case | Worst Case | Space |
|-----------|--------------|------------|-------|
| Insert | O(1) | O(n) | O(n) |
| Search | O(1) | O(n) | - |
| Delete | O(1) | O(n) | - |
| Rehashing | O(n) | O(n) | O(n) |

**Note**: Worst case occurs when all keys collide in the same bucket. Good hash functions minimize this probability.

## 🎓 Learning Path

1. Start with `hash_maps.cpp` - Understand STL basics
2. Explore `buildHash.cpp` - See custom implementation
3. Practice with problem files - Apply concepts to real scenarios
4. Study `anagram.cpp` & `pair_sum.cpp` - Common interview patterns

## 🛠️ Usage

```bash
# Compile any file
g++ -std=c++17 filename.cpp -o output

# Run
./output
```

## 💡 Why Hashing?

Hashing transforms the search problem from O(n) to O(1) average time by using keys as direct array indices. It's the backbone of:
- Database indexing
- Caching systems
- Password storage
- Cryptography
- Symbol tables in compilers

## 📈 Problem Difficulty

| File | Difficulty | Key Concept |
|------|------------|-------------|
| `anagram.cpp` | Easy | Frequency counting |
| `pair_sum.cpp` | Easy-Medium | Complement search |
| `planeTicket.cpp` | Medium | Graph traversal via maps |
| `buildHash.cpp` | Medium-Hard | Custom DS implementation |

---

**Built with** ❤️ **for learning and growth in DSA**

*Feel free to explore, learn, and contribute!*
