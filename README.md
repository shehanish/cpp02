<h1 align="center">
  <img src="https://upload.wikimedia.org/wikipedia/commons/1/18/ISO_C%2B%2B_Logo.svg" width="100" />
  <br>
  C++ Module 02
</h1>

<p align="center">
  <img src="https://img.shields.io/badge/Language-C%2B%2B98-blue?style=for-the-badge&logo=c%2B%2B" />
  <img src="https://img.shields.io/badge/Concept-Ad--hoc%20Polymorphism-orange?style=for-the-badge" />
  <img src="https://img.shields.io/badge/School-42-black?style=for-the-badge" />
</p>

---

## 📖 Introduction

This module focuses on **Ad-hoc Polymorphism**, **Operator Overloading**, and the **Orthodox Canonical Class Form**. The primary goal is to implement a fixed-point number class, providing a deeper understanding of how C++ handles custom types and mathematical operations.

## 🛠️ Exercises

### [ex00: My First Class in Orthodox Canonical Form](ex00/)
The introduction to the set of rules that ensure a class behaves correctly when copied or assigned.
- **Concepts**: Default constructor, Copy constructor, Copy assignment operator, and Destructor.
- **Goal**: Implement a basic fixed-point number class with a fixed bit-width (8 fractional bits).

### [ex01: Towards a more useful fixed-point number class](ex01/)
Enhancing the class to handle conversions between different types.
- **Features**: Constructors for `int` and `float`, methods for conversion to `float` and `int`.
- **Operator Overloading**: Implementing the insertion (`<<`) operator for easy printing.

### [ex02: Now we’re talking](ex02/)
Completing the class with a full suite of mathematical and logical operators.
- **Overloaded Operators**:
    - Comparison: `>`, `<`, `>=`, `<=`, `==`, `!=`
    - Arithmetic: `+`, `-`, `*`, `/`
    - Increment/Decrement: `++`, `--` (both prefix and postfix)
- **Static Member Functions**: `min`, `max` (with overloads for const and non-const).

## 📝 Learning Objectives

- Understanding **Fixed-Point Arithmetic** versus Floating-Point.
- Mastering the **Orthodox Canonical Class Form**.
- Implementing **Operator Overloading** for custom classes.
- Managing internal bit-representation for precision.

## 🚀 Usage

1. Navigate to an exercise folder:
   ```bash
   cd ex02
   ```
2. Build the project:
   ```bash
   make
   ```
3. Run the tests:
   ```bash
   ./fixed
   ```

---

<p align="center">
  <i>Part of the 42 C++ Pool. Developed by shkaruna.</i>
</p>
