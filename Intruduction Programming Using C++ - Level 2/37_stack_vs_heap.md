````md id="ram-layout-steps"
# RAM: Memory Layout

---

## 1️⃣ Source Code / Instructions
- Contains the compiled program instructions
- This is the executable code of the program

---

## 2️⃣ Static / Global
- Stores:
  - Global variables
  - Static variables
- Lifetime:
  - Exists for the entire duration of the program

### Example:
```cpp
int g = 5;
static int x = 10;

---

## 3️⃣ Stack

* Stores:

  * Local variables
  * Function calls
  * Pointers (the variable itself)

### Features:

* Fast
* Automatically managed
* Uses LIFO (Last In First Out)
* Limited size

### Example:

```cpp
int main() {
    int a = 10;   // stack
    int* p;       // pointer itself in stack
}
```

---

## 4️⃣ Heap

* Stores:

  * Dynamic variables
  * Objects / arrays created using `new`

### Features:

* Manually managed
* Slower than stack
* Large size

### Example:

```cpp
int* p = new int(20); // value in heap
```

```cpp
delete p; // free memory
```

---

## 🔥 Important Note

```cpp
int* p = new int(50);
```

* `p` → stored in Stack
* `50` → stored in Heap

```
````
