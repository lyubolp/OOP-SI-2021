1. Какво ще върне следният фрагмент от код ?

   ```c++
   #include <iostream>
   
   class Number{
   public:
       Number(const int var = 5): value(var) {}
       Number operator+(const Number& second) const{
           return Number(this->value + second.value + 5);
       }
   
       friend std::ostream& operator<<(std::ostream& out, const Number& from);
   private:
       int value;
   };
   
   std::ostream& operator<<(std::ostream& out, const Number& from)
   {
       out << from.value;
   
       return out;
   }
   template <class T>
   T foo(const T& first, const T& second)
   {
       return (first + second);
   }
   
   int main()
   {
       int first_int(5), second_int = 3;
   
       Number first_number(12), second_number;
   
       std::cout << foo<int>(first_int, second_int) << " ";
       std::cout << foo<Number>(first_number, second_number) << std::endl;
       return 0;
   }
   ```

   **a) `8 22`**

   b) `3 12`

   c) `3 17`

   d) `8 17`

2. Какво ще върне следният фрагмент код

   ```c++
   #include <iostream>
   
   class Base{
   public:
       Base()
       {
           std::cout << "Base()" << std::endl;
       }
   
       Base(const int& value)
       {
           std::cout << "Base(" << value << ")" << std::endl;
       }
   
       Base& operator=(const Base& from)
       {
           std::cout << "Base=" << std::endl;
           return *this;
       }
   };
   
   class Derived: public Base
   {
   public:
       Derived():Base(5)
       {
           std::cout << "Derived()" << std::endl;
       }
   
       Derived(const int& value)
       {
           std::cout << "Derived(" << value << ")" << std::endl;
       }
   };
   int main()
   {
       Base a(5);
       Base b = a;
       Derived c;
       Derived d(3);
       return 0;
   }
   ```

   a)

   ```
   Base(5)
   Base=
   Base()
   Derived()
   Base(3)
   Derived(3)
   ```

   b)

   ```
   Base()
   Base=
   Base(5)
   Derived()
   Base()
   Derived(3)
   ```

   **c)**

   ```
   Base(5)
   Base(5)
   Derived()
   Base()
   Derived(3)
   ```

   d) Няма да се компилира

   

3. Какво ще изведе следния фрагмент код:

   ```c++
   #include <iostream>
   
   template <class T>
   class Foo
   {
   private:
       T value;
   public:
       void set_value(T to)
       {
           value = to;
       }
   };
   
   class Bar
   {
   public:
       Bar()
       {
           std::cout << "Bar()" << std::endl;
       }
       Bar(const Bar& from)
       {
           std::cout << "Bar() copy" << std::endl;
       }
   
       Bar& operator=(const Bar& from)
       {
           std::cout << "Bar=" << std::endl;
           return *this;
       }
   };
   int main()
   {
       Foo<Bar> baz;
       Bar b;
       baz.set_value(b);
       return 0;
   }
   ```

   a)

   ```
   Bar()
   ```

   b)

   ```
   Bar()
   Bar=
   ```

   **c)**

   ```
   Bar()
   Bar()
   Bar() copy
   Bar=
   ```

   d)

   ```
   Bar()
   Bar()
   Bar=
   ```


4. Очакваме следният код да изведе на екрана `10`. Когато го пуснем, обаче, на екрана се извежда `5`. Защо ? (Опишете с няколко думи къде е проблема и как бихте го оправили)

   ```c++
   #include <iostream>
   
   class Foo
   {
   public:
       Foo():value(5) {}
       Foo(const int& from): value(from) {}
       Foo(const Foo& from): value(from.value) {}
   
       void print_value()
       {
           std::cout << this->value << std::endl;
       }
   private:
       int value;
   };
   
   class Bar: public Foo
   {
   public:
       Bar():Foo() {}
       Bar(const int& from) {}
       Bar(const Bar& from): Foo(from) {}
   };
   
   int main()
   {
       Bar b(10);
       b.print_value();
       return 0;
   }
   ```

   *Конструкторът с параметри не извиква конструкторът с параметри на класа Foo. Трябва да е Bar(const int& from): Foo(from) {}*

5. Очакваме следният код да изведе `10 3.14`, но кодът не се компилира - защо ? (Опишете с няколко думи къде е проблема и как бихте го оправили)

   ```c++
   #include <iostream>
   
   class Foo
   {
   public:
       Foo():value(5) {}
       Foo(const int& from): value(from) {}
       Foo(const Foo& from): value(from.value) {}
   private:
       int value;
   };
   
   class Bar: public Foo
   {
   public:
       Bar():Foo() {}
       Bar(const int& from): Foo(from)  {}
       Bar(const Bar& from): Foo(from) {}
   
       void print_value()
       {
           std::cout << this->value << std::endl;
       }
   };
   
   int main()
   {
       Bar b(10);
       b.print_value();
       return 0;
   }
   ```

   *Променливата `value` е private в класа Foo. Трябва да бъде направена `protected`*