<h1 align="center">✋ BEWARE ✋</h1>

## If you are a 42 Student, do not copy/paste this project, it will be considered cheating and you will be grated -42.

# 42 Wolfsburg Cursus 
## Push_swap
## Because Swap_push isn't as natural

# Contents

1. [Introduction](#intro)
2. [Objectives](#objectives)
3. [Common Instructions](#common)
4. [Mandatory Part](#manda)
5. [Bonus Part](#bonus)

# <a name="intro">Introduction</a>

| Introduction | ![Logo_Monolith_small](https://user-images.githubusercontent.com/120580537/209333599-dc44418d-8ee7-42b6-8a4a-7ff328778d87.png) |
| ----- | ----- |
| The **Push swap** project is a very simple and a highly straightforward algorithm project: data must be sorted. |
| You have at your disposal a set of integer values, 2 stacks, and a set of instructions to manipulate both stacks. |
| Your goal? Write a program in C called **push_swap** which calculates and displays on the standard output the smallest program, made of *Push swap language* instructions, that sorts the integers received as arguments.|
| Easy? |
| We’ll see... |

<p align="right">
 <a href="https://github.com/Cerberus2290/push_swap/blob/main/README.md#-beware-">back to top</a>
</p>

# <a name="objectives">Objectives</a>

| Objectives | ![Logo_Monolith_small](https://user-images.githubusercontent.com/120580537/209333599-dc44418d-8ee7-42b6-8a4a-7ff328778d87.png) |
| ----- | ----- |
| Writing a sorting algorithm is always a very important step in a developer’s journey. It is often the first encounter with the concept of [complexity](https://en.wikipedia.org/wiki/Analysis_of_algorithms). |
| Sorting algorithms and their complexity are part of the classic questions discussed during job interviews. It’s probably a good time to look at these concepts since you’ll have to face them at some point. |
| The learning objectives of this project are rigor, use of C, and use of basic algorithms. Especially focusing on their complexity. |
| Sorting values is simple. To sort them the fastest way possible is less simple. Especially because from one integers configuration to another, the most efficient sorting solution can differ. |

<p align="right">
 <a href="https://github.com/Cerberus2290/push_swap/blob/main/README.md#-beware-">back to top</a>
</p>

# <a name="common">Common Instructions</a>

| Common Instructions | ![Logo_Monolith_small](https://user-images.githubusercontent.com/120580537/209333599-dc44418d-8ee7-42b6-8a4a-7ff328778d87.png) |
| ----- | ----- |
* Your project must be written in C.
* Your project must be written in accordance with the Norm. <br>If you have bonus files/functions, they are included in the norm check and you will receive a 0 if there is a norm error inside.
* Your functions should not quit unexpectedly (segmentation fault, bus error, double free, etc) apart from undefined behaviors. <br>If this happens, your project will be considered non functional and will receive a 0 during the evaluation.
* All heap allocated memory space must be properly freed when necessary. No leaks will be tolerated.
* If the subject requires it, you must submit a Makefile which will compile your source files to the required output <br>with the flags **-Wall**, **-Wextra** and **-Werror**, use cc, and your Makefile must not relink.
* Your **Makefile** must at least contain the rules **$(NAME)**, **all**, **clean**, **fclean** and **re**.
* To turn in bonuses to your project, you must include a rule bonus to your Makefile, which will add all the various headers, <br>librairies or functions that are forbidden on the main part of the project. <br>Bonuses must be in a different file **_bonus.{c/h}** if the subject does not specify anything else. <br>Mandatory and bonus part evaluation is done separately.
* If your project allows you to use your **libft**, you must copy its sources and its associated **Makefile** in a **libft** folder with its associated Makefile. Your project’s **Makefile** must compile the library by using its **Makefile**, then compile the project.
* We encourage you to create test programs for your project even though this work **won’t have to be submitted and won’t be graded**. <br>It will give you a chance to easily test your work and your peers’ work. You will find those tests especially useful during your defence. <br>Indeed, during defence, you are free to use your tests and/or the tests of the peer you are evaluating.
* Submit your work to your assigned git repository. Only the work in the git repository will be graded. <br>If Deepthought is assigned to grade your work, it will be done after your peer-evaluations. <br>If an error happens in any section of your work during Deepthought’s grading, the evaluation will stop.

<p align="right">
 <a href="https://github.com/Cerberus2290/push_swap/blob/main/README.md#-beware-">back to top</a>
</p>

# <a name="manda">Mandatory part</a>

| Mandatory part | ![Logo_Monolith_small](https://user-images.githubusercontent.com/120580537/209333599-dc44418d-8ee7-42b6-8a4a-7ff328778d87.png) |
| ----- | ----- |
## IV.1 - The rules

* You have 2 [stacks](https://en.wikipedia.org/wiki/Stack_(abstract_data_type)) named a and b.
* At the beginning:
* The stack a contains a random amount of negative and/or positive numbers which cannot be duplicated.
* The stack b is empty.
* The goal is to sort in ascending order numbers into stack a. To do so you have the
following operations at your disposal:

**sa (swap a):** Swap the first 2 elements at the top of stack a. Do nothing if there is only one or no elements.<br>
**sb (swap b):** Swap the first 2 elements at the top of stack b. Do nothing if there is only one or no elements.<br>
**ss (swap a and b):** sa and sb at the same time.<br>
**pa (push a):** Take the first element at the top of b and put it at the top of a.Do nothing if b is empty.<br>
**pb (push b):** Take the first element at the top of a and put it at the top of b. Do nothing if a is empty.<br>
**ra (rotate a):** Shift up all elements of stack a by 1. The first element becomes the last one.<br>
**rb (rotate b):** Shift up all elements of stack b by 1. The first element becomes the last one.<br>
**rr (rotate a and b):** ra and rb at the same time.<br>
**rra (reverse rotate a):** Shift down all elements of stack a by 1.
The last element becomes the first one.<br>
**rrb (reverse rotate b):** Shift down all elements of stack b by 1. The last element becomes the first one.<br>
**rrr (reverse rotate a and b):** rra and rrb at the same time.<br>

## IV.2 Example

To illustrate the effect of some of these instructions, let’s sort a random list of integers. In this example, we’ll consider that both stacks grow from the right.

<img width="607" alt="Example_push_swap" src="https://user-images.githubusercontent.com/120580537/218683838-b4492585-9cb4-485c-b952-9fa8d9e67a24.png">
