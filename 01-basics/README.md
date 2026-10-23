# 01 - Basics: Input/Output and Arithmetic

Practice programs from **Programming Fundamentals and Problem Solving**,
BS Computer Science, Quaid-i-Azam University.

These programs focus on reading input, doing calculations, and printing clear output.
Most of them turn a real-world word problem into inputs, formulas and results.

## Programs

| # | File | What it does |
|---|------|--------------|
| 1 | `gift_budget.cpp` | Takes monthly income and a yearly gift percentage, then calculates how much can be spent on gifts in a year. |
| 2 | `vacation_petrol_cost.cpp` | Calculates the petrol cost of a trip to a vacation home, one way and round trip, from distance, petrol price and fuel average. |
| 3 | `paper_reams_calculator.cpp` | Works out how many reams of paper are needed to print a report for everyone at a meeting plus extra copies (rounds up with `ceil`). |
| 4 | `perpendicular_bisector.cpp` | Takes two points and prints the equation of the perpendicular bisector of the line joining them (slope, midpoint, y-intercept). |
| 5 | `stock_profit_calculator.cpp` | Calculates the cost of buying shares, the sale amount, both broker commissions, and the net difference between selling and buying. |
| 6 | `paint_job_estimator.cpp` | Estimates gallons of paint, labor hours, and the total cost of painting a wall of a given area. |
| 7 | `freezer_temperature.cpp` | Converts time since a power failure (HH MM) into hours and calculates the freezer temperature using a given formula. |
| 8 | `final_exam_score_needed.cpp` | Calculates the score needed on the final exam to reach a minimum course average, given the current average and the final's weight. |
| 9 | `cookie_recipe_adjuster.cpp` | Scales the sugar, butter and flour in a recipe up or down for the number of cookies you want to make. |
| 10 | `cookie_calorie_counter.cpp` | Calculates calories consumed from the number of cookies eaten, using cookies per bag, servings per bag and calories per serving. |
| 11 | `ascii_tree.cpp` | Prints a tree made of `/`, `\` and `:` characters using escape sequences (`\n`, `\t`, `\\`) and careful tab alignment. |

## Concepts practiced
- Variables and data types (`int`, `float`)
- Input and output with `cin` and `cout`
- Arithmetic expressions and operator precedence
- Compound assignment operators (`*=`)
- `ceil()` from `<cmath>` for rounding up
- Escape sequences: `\n`, `\t`, `\\`
- Breaking a word problem into steps: inputs, formulas, outputs

## Example run

`freezer_temperature.cpp`:
```
Enter the time elapsed since power failure in this format HH [space] MM: 2 30
Temperature in Freezer is: -14.4444°C
```

## How to run
From inside this folder:
```bash
g++ gift_budget.cpp -o gift_budget
./gift_budget
```
On Windows, run `gift_budget.exe` instead of `./gift_budget`.

## Known limitations (things I want to improve)
- `perpendicular_bisector.cpp` divides by zero when both points have the same x or y value. I plan to fix this using conditions (see `02-conditions`).
- Counts such as people or cookies use `float`, which should be `int` where the value is always whole.
- `ascii_tree.cpp` relies on 8-character tab stops, so the trunk may shift in terminals with a different tab width. It can be rewritten with loops later.
- Output formatting (decimal places, units) is basic. I plan to use `<iomanip>` later.

[Back to main README](../README.md)