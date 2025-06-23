<p align="center">
  <img src="https://i.imgur.com/RR3r3to.png" width="150" alt="Ft_printf Badge Without Bonus">
</p>

<div align="center">

[![42 School](https://img.shields.io/badge/42-Common_Core-blue)](https://42.fr/en/homepage/)
[![Bonus](https://img.shields.io/badge/Bonus_❌-red)](https://github.com/baderelg/Ft_printf)
</div>

> [!WARNING]
> ![Eval](https://img.shields.io/badge/⏳_Awaiting_Evaluation-orange)\
> The project has not been evaluated yet.\
> Project files will be uploaded once the project is successfully completed.

> [!NOTE]
> <details>
> <summary><strong>What is 42?</strong></summary>
>   
> > [42 School](https://42.fr/en/homepage/) is a coding school that throws the traditional rulebook out the window. It’s all about peer-to-peer learning and being project-driven. \
> > You learn by doing, tackling programming projects, and collaborating with fellow students to solve problems and evaluate each other's work. \
> > You are given a project, a set of rules and objectives, and then it's up to you to figure out how to achieve the goal. \
> > It really pushes you to learn how to learn. It's intense, challenging, but also very rewarding.
> </details>
> 
> <details>
> <summary><strong>What is Ft_printf?</strong></summary>
> 
> > `ft_printf` is a fundamental project at 42 School.\
> > The objective is to recode the C function `printf()` from scratch with some limitations and while respecting the Norm V3 of 42.
> > This project forces a deep understanding of variadic functions (functions that can take a variable number of arguments) and requires handling different data types through a single function.
> > 
> > <b>📏 Norminette</b></br>
> > The Norm is a set of coding rules used in all 42 projects: 
> > ```markdown
> > - No more than 25 lines per function
> > - No more than 5 function definitions per file
> > - No ternary operators, no variable declarations after the first line of a function
> > - No for loops
> > - Function and file names must follow snake_case
> > - and many other rules...
> > ```  
> </details>
> 
> To make the journey entertaining, I chose to approach the project through the eyes and voice of a fictional character.
> 
> <details>
> <summary><strong>Why ?</strong></summary>
> 
> > Embodying a character while tackling a project isn't just entertaining, it forges stronger connections with the logic and makes it way more engaging.</br>
> > When you try to express what you just learned through the voice of a fictional character, it helps cement the newly acquired knowledge and even adds new perspectives.</br>
> > 
> </details>
> <details>
> <summary><strong>Why Donquixote Doflamingo?</strong></summary>
> 
> > This project isn't about printing. It's about control and forcing a chaotic ensemble of unrelated data types to conform to a specific format that you dictate.\
> > The function acts as a puppeteer and the arguments are its puppets, so who better to embody this than the master puppeteer of the Grand Line?
> </details>

---


<p align="center">
  <img src="https://i.imgur.com/fyeqrUD.png" alt="Doflamingo">
</p>

> Welcome to the stage where nothing is random. Not the numbers, not the characters, not the format. I’m Joker and I built a system where every symbol obeys.\
> Ft_printf isn't a function, it's a performance. My performance.

*Fufufu...* So you have chosen to replicate one of the most fundamental tools in C: `printf()`. Why?\
Because just like how the Celestial Dragons shape the world in their image, you must shape output, character by character and format by format.\
You are building your own underworld empire. And who better to guide you than the Heavenly Yaksha ?

Welcome to `ft_printf` where raw values bend to your will and formatted strings become your puppets, all dancing for you.\
Weaklings see a function that writes to the terminal. How quaint. I see an exhibition of power and an instrument of domination.

Welcome to my world.

# 🃏 Setting the stage

The goal is to create a function that can take any puppet (a character, string, number) and force it to appear on the stage, exactly how you command.

```c
int ft_printf(const char *format, ...);
```
What's with the `. . .` you ask ? *Fufufu...* That's an endless line of actors waiting for you to pull the strings.

## 🎭 The puppets on the stage - The formats

My `ft_printf` commands a troupe of performers. Each one is a different kind of string, a unique way to manipulate the data.\
These are the only ones you need to concern yourselves with for now:

<table align="center">
  <tr>
    <th align="center"><code>%c</code></th>
    <td align="center"><b>Character</b>, a single pawn</th>
    <td align="center">I only command it to show itself</th>
  </tr>
  <tr>
    <th align="center"><code>%s</code></th>
    <td align="center"><b>String</b>, a line of dialog</th>
    <td align="center">I force it to speak. And if it's <code>NULL</code> then it will say exactly <code>"(null)"</code>... Pathetic</th>
  </tr>
  <tr>
    <th align="center"><code>%p</code></th>
    <td align="center"><b>Pointer</b>, an address</th>
    <td align="center">I command it to reveal its location in hexadecimal, prefixed with <code>0x</code>. A <code>NULL</code> pointer is exposed as <code>"(nil)"</code></th>
   </tr>
  <tr>
    <th align="center"><code>%d</code><br><code>%i</code></th>
    <td align="center"><b>Integer</b>, a number, positive or negative</th>
    <td align="center">I'll make it display itself in base 10</th>
  </tr>
  <tr>
    <th align="center"><code>%u</code></th>
    <td align="center"><b>Unsigned integer</b>, a number without the weakness of the sign</th>
    <td align="center">It presents itself stripped of negativity</th>
  </tr>
  <tr>
    <th align="center"><code>%x</code></th>
    <td align="center"><b>Lowercase Hex</b>, a number in its base 16 form</th>
    <td align="center">This one shows appropriate humility</th>
  </tr>
  <tr>
    <th align="center"><code>%X</code></th>
    <td align="center"><b>Uppercase Hex</b>, a number in its base 16 form with delusions of grandeur</th>
    <td align="center">And this one appears in all CAPS, a futile attempt to match my stature</th>
  </tr>
  <tr>
    <th align="center"><code>%%</code></th>
    <td align="center"><b>Percent sign</b>, a simple symbol of obedience</th>
    <td align="center">It simply prints itself</th>
  </tr>
</table>

## 📜 The Celestial dragons' rules - Subject requirements

*Fufufu...* There is a set of laughable restrictions designed to keep weaklings in check.\
I adhere to them perfectly, not out of necessity mind you, but to showcase how effortlessly I can still operate, even within this pathetic cage.

- **Respecting 42's Norm**\
As if limiting my function length constrains my power... I'll simply delegate tasks to my Family.

- **Direct command**\
The original `printf()` buffers its output, gathering characters in a crowd before showing them.\
Your power must be displayed instantly. Every command is a direct `write` to the terminal and no buffering is allowed.

- **A curated cast**\
You will only concern yourself with the conversions `c` `s` `p` `d` `i` `u` `x` `X` and `%`.\
All others are irrelevant noise unfit for this performance.

- **A minimalist toolkit**\
They limit your tools to `malloc` `free` `write` and the `va_` family.\
These simple instruments are more than enough to build a masterpiece.

- **The packaged power**
The final performance must be sealed within a static library `libftprintf.a` using the power of the `ar` command.\
Using `libtool` is forbidden, as if such a crutch would ever be necessary for people like us.

## 🔺 A flawless hierarchy - Code architecture

My power is unquestionable because its structure is perfect.

<table align="center">
  <tr>
    <td align="center">
      <img src="https://i.imgur.com/TtKHde9.png" alt="Hierarchy" width="700">
    </td>
  </tr>
  <tr>
    <td align="center">
        Every member of the family performs their duty without question
    </td>
  </tr>
</table>

- `ft_printf.h`
The family register that lays down the law for the entire organization

- `ft_printf.c`
This is the throne room. The `ft_printf` function surveys the format string and calls `handle_conversion` which dispatches commands to the appropriate underlings

- `ft_printf_utils.c`
Forcing numbers and strings onto the stage

- `ft_printf_hex.c`
Handling the work of hexadecimal and pointer conversions

They believe limiting functions to 25 lines or 5 per file is a constraint...\
I see it as a simple way to build a superior organization. *Fufufu...*

# 🃏 The Performance

True power is the ability to handle an unknown and unlimited number of puppets in a single performance.\
That's the secret behind the `. . .` syntax: It's an invitation for any data to step onto the stage.

## 🧵 The mechanism of control - Variadic argument handling

But how does one control a crowd of anonymous actors ? This is where the true art lies.\
Enter `<stdarg.h>`, my control center.

<table align="center">
  <tr>
    <td align="center">
      <img src="https://i.imgur.com/dH01Moo.png" alt="Var var no Mi" width="1600">
    </td>
  </tr>
  <tr>
    <td align="center">
        The stage is set (<code>va_start</code>), a puppet is chosen (<code>va_arg</code>) one at at a time, until the show concludes (<code>va_end</code>).<br><br>
    </td>
  </tr>
</table>

### ➢ `va_list` The thread of fate

> ```c
> va_list args_ptr
> ```
> Think of it as a pointer which keeps track of which person in the crowd I'm about to grab next. *Fufufu...*

<table align="center">
  <tr>
    <td>
Before the show begins, I need a way to track my puppets.<br>
This is the very thread I follow from one puppet to the next, a special pointer that lets me step through each puppet, one by one, in the exact order they were given to me.
    </td>
  </tr>
</table>

### ➢ `va_start` Locating the first victim

> ```c
> va_start(args_ptr, format)
> ```
> This tells me to look at my last known argument (the `format`) and initialize my magic pointer (`va_list args_ptr`) to point to the very first unknown argument in the crowd.

<table align="center">
  <tr>
    <td>
The show begins but my thread of fate isn't anchored yet. How do I make it point to the first anonymous puppet?<br>
<i>Fufufu...</i> I whisper a name. The last known face in the crowd: here it's <code>format</code>.<br>
With this clue <code>va_start</code> positions my thread <code>va_list</code> directly after <code>format</code> in memory, precisely where the anonymous puppets are waiting in order.<br>
Now, the summoning may begin. <i>Fufufu...</i>
    </td>
  </tr>
</table>

### ➢ `va_arg` Pulling the string

> ```c
> va_arg(args_ptr, int)
> ```
> When I look at the `format` scroll, I see a `%d`. So I use my arguments pointer to grab the argument it's pointing at and I interpret it as an integer.

<table align="center">
  <tr>
    <td>
And now it's time for absolute control. When I call <code>va_arg</code>, I'm handling 2 tasks:<br><br>
    - First, I command the puppet that is currently under my pointer to reveal its true nature by providing a type (int, char *…). The raw data is then forced into the shape I desire.<br><br>
    - Second, and since I have extracted its value, the thread of fate `va_list` advances automatically to the next puppet in line. My focus is always on the next puppet.
    </td>
  </tr>
</table>

### ➢ `va_end` The curtain falls

> ```c
> va_end(args_ptr)
> ```
> Once I'm done with all the instructions on the `format` scroll. I dismiss my magic pointer to clean up the stage and walk away.

<table align="center">
  <tr>
    <td>
I must leave no traces of my methods. <code>va_end</code> cleans the stage. It invalidates the thread of fate and ensures that the puppets cannot be accidentally manipulated again.<br>
This signifies the absolute end of the show.
    </td>
  </tr>
</table>

## 👑 The inner workings of my Kingdom - Functions

Wanna know how the magic happens? *Fufufu...* Don't be naive, this isn't magic. It's control.

### ➢ Pulling the strings: Main function

The `ft_printf.c` is my throne room. From here I survey the format.

1. I initialize my `va_list` gathering all the puppet arguments that were handed to me.
2. I walk the format string, character by character.
3. Whenever I see a `%` I know it's time for a performance. The character that follows will determine which puppet to control.
4. I call upon my right-hand man `handle_conversion` to execute the command.
5. I'll need to keep a precise count of every character that appears on the stage, for this will be the return value and the proof of my flawless execution.

A king doesn't need to bother dirtying his hands with *cycling trivialities*. I have a family of loyal functions to handle the tasks handed over by `handle_conversion` from my main file.\
My power is absolute because my organization is flawless.

> [!IMPORTANT]
> Each of the following functions needs to return the number of characters it printed to `handle_conversion` which in turn becomes the final return value of `ft_printf`.
> What separates a performance from a mere display is the **return value**.\
> This number is not a suggestion. If I display 15 characters, I return 15.\
> When compared to the original <code>printf()</code> this value will be the ultimate judge.

### ➢ Diamante's crew - <code>ft_printf_utils.c</code>

<table align="center">
  <tr>
    <td align="center">
      <img src="https://i.imgur.com/KNHOa56.png" alt="Diamante's army" width="900">
    </td>
  </tr>
  <tr>
    <td align="center">
        Diamante, oversees the mundane spectacle in the Colosseum: chars, strings and numbers.
    </td>
  </tr>
</table>

```c
int  ft_putchar_len(char c)
```
<table align="center">
  <tr>
        <td align="center">
      <img src="https://i.imgur.com/gnX4kuj.png" alt="Pink" width="120">
    </td>
    <td align="center"><b>Señor Pink</b> handles the fundamental work of displaying one character <code>%c</code>. Every complex display you'll see will be built upon his simple and reliable work.</td>
  </tr>
</table>

```c
int  ft_putstr_len(char *str)
```
<table align="center">
  <tr>
            <td align="center">
      <img src="https://i.imgur.com/YPUjFIP.png" alt="Lao G" width="120">
    </td>
    <td align="center"><b>Lao G</b> handles the strings and releases the puppet's speech character by character. With his experience, he knows exactly what to do when he is passed a <code>NULL</code> string.</td>
  </tr>
</table>

```c
int  ft_putnbr_len(int nbr)
```
<table align="center">
  <tr>
            <td align="center">
      <img src="https://i.imgur.com/dH4KBJD.png" alt="Baby 5 & Buffalo" width="120">
    </td>
    <td align="center">The chaotic duo of <b>Baby 5</b> and <b>Buffalo</b> are enough to deal with positive and negatives integers. Whether <code>%d</code> (decimal) or <code>%i</code> (integer) is passed, the result is the same.<br>They know how to deal with even the lowliest of creatures (<code>INT_MIN</code>).</th>
  </tr>
</table>

```c
int  ft_putunbr_len(unsigned int unbr)
```
<table align="center">
  <tr>
            <td align="center">
      <img src="https://i.imgur.com/FaHfbql.png" alt="Machvise" width="120">
    </td>
    <td align="center"><b>Machvise</b> is dispatched with double the strength of Baby 5 and Buffalo, but he won't be dealing with negativity. I trust him to crush the task and print greater numbers.</th>
  </tr>
</table>

### ➢ Trébol's crew - <code>ft_printf_hex.c</code>

<table align="center">
  <tr>
    <td align="center">
      <img src="https://i.imgur.com/lC6tsh4.png" alt="Trébol's army" width="900">
    </td>
  </tr>
  <tr>
    <td align="center">
        This is where data is not only displayed, but also transformed.
    </td>
  </tr>
</table>

```c
int  ft_puthex_len(unsigned int unbr, char format)
```
<table align="center">
  <tr>
            <td align="center">
      <img src="https://i.imgur.com/hGVYWsp.png" alt="Jora" width="120">
    </td>
    <td align="center"><b>Jōra</b> turns a simple number into the art of hexadecimal. With her power she refashions data into a masterpiece and either offers it a muted lowercase style (<code>%x</code>) or a grotesque uppercase one (<code>%X</code>).</th>
  </tr>
</table>

```c
int  ft_putaddr_len(unsigned long addr)
```
<table align="center">
  <tr>
            <td align="center">
      <img src="https://i.imgur.com/fZjNSM7.png" alt="Sugar" width="120">
    </td>
    <td align="center"><b>Sugar</b> reveals the location of a puppet, its memory address. She first handles when a <code>NULL</code> pointer is sent her way. If not, she marks the target with a <code>0x</code> prefix and delegates the rest to her acolyte.</th>
  </tr>
</table>

> [!NOTE]
> - Why `unsigned long` for a pointer?\
> A pointer is a memory address. It must be handled by a type large enough to contain any possible addresses on the system, whether it's 32-bit or 64-bit.

```c
static int  print_address(unsigned long nb)
```
<table align="center">
  <tr>
            <td align="center">
      <img src="https://i.imgur.com/2GLP2eq.png" alt="Toysoldier" width="120">
    </td>
    <td align="center">Sugar's loyal <b>Toysoldier</b> carries out the dirty work of the conversion and printing. A perfect static subordinate with no will of its own.</th>
  </tr>
</table>

## 💥 Controlled chaos - Error handling

There are always vague rules... "undefined behaviour" they call them. Traps for fools.\
A pirate defines his own reality and doesn't concern himself with these trivialities.

### ➢ True delegation

You may have noticed that the `handle_conversion` function receives the thread of fate not as `va_list args` but as `va_list *args`, a pointer to the thread itself. Why? *Fufufu...*

I don't give my subordinates a mere copy of the puppet roster, for a copy is only a snapshot of reality that is ever changing.\
It's worthless. So instead, I give them access to the master list.

By passing a pointer, I allow my helper functions to modify the original roster in my own throne room.\
So, when `handle_conversion` calls `va_arg` it advances the one and only roster. No copies involved.

> [!TIP]
> On the 42 computers the program may work even when passing the `va_list` by value.\
> That's because on some systems (which use the x86-64 architecture) `va_list` can be implemented as an array type.\
> In C, when an array is passed to a function, what is actually passed is a pointer to the array's first element.\
> (C converts the array into a pointer to its first element)\
> This means passing it by value behaves like passing it by reference.
>
> On other architectures though, `va_list` could be a simple pointer. Passing it by value would create a worthless copy and the program would fail.\
> Passing `va_list *` ensures absolute control.

### ➢ Flawless even in failure

But what happens if the stage begins to crumble? What if the `write` system call itself fails?\
A lesser show would crash into a wall of segmentation fault. Pathetic.

My kingdom anticipates this. Every time a character is written its success is checked first.\
If any `write` call ever returns `-1` the performance is immediately declared a failure.\
So, I stop the show, clear the stage with `va_end` and then return `-1`.\
True control isn't just about success, it's about controlling failure itself.

### ➢ The void

*Fufufu...* And what happens if I'm asked to start a performance with nothing?
What if `format` is `NULL`? 

My spectacle begins with a simple contemptuous check: If the stage itself is a void, the show is over before it can begin.\
I will not grant it the dignity of a segmentation fault. Instead, I immediately return `-1`.\
I do not perform in a vacuum.

---

## Final Word

> You've had a glimpse behind the curtain.\
> The weak are data. The strong are those who format it. \
> Remember who holds the strings.

You might have heard whispers of more advanced techniques, flags like `-` `0` or `.`.\
That’s a different game, the kind that once belonged to someone too fond of silence.\
I don’t waste time polishing output like it’s some fragile thing. I command it.\
Right now, the strings are mine to pull and no one else touches the stage.


<p align="center">
  <img src="https://i.imgur.com/I4PYvah.png" width="300" alt="I want you to remember me smiling.">
</p>


<hr>
<p align="center">
<sub><i>FT_PRINTF badge © @Cadets for Cadets — used under MIT License.</i></sub>
<br>
<sub><a href="https://github.com/ayogun/42-project-badges/blob/main/LICENSE">See full license here</a></sub>
</p>
