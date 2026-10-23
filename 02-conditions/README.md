# 02 - Conditions: Decision Making

Practice programs from **Programming Fundamentals and Problem Solving**,
BS Computer Science, Quaid-i-Azam University.

These programs make decisions based on user input using `if`, `else if` and `else`.

## Programs

| # | File | What it does |
|---|------|--------------|
| 1 | `internet_cost_calculator.cpp` | Takes the data used by a subscriber in GB and prints the charge for the matching tier. Rejects zero or negative input. |

### Internet charge tiers

| Data used | Charges |
|-----------|---------|
| Up to 1 GB | 250 |
| More than 1 GB, up to 2 GB | 500 |
| More than 2 GB, up to 5 GB | 1000 |
| More than 5 GB, up to 10 GB | 1500 |
| More than 10 GB | 2000 |
| 0 or less | "You entered bad data" |

## Concepts practiced
- `if` / `else if` / `else` chains
- Relational operators (`>`, `<=`)
- Logical operator `&&` to check a range (for example `data_usage > 1.0 && data_usage <= 2.0`)
- Handling invalid input with a final `else`
- Thinking carefully about boundary values (exactly 1, 2, 5 and 10 GB)

## Example runs

```
Enter the amount of data used by the subscriber in GBs: 0.5
You have used 0.5 GBs data and your charges are: 250
```
```
Enter the amount of data used by the subscriber in GBs: 5
You have used 5 GBs data and your charges are: 1000
```
```
Enter the amount of data used by the subscriber in GBs: 12
You have used 12 GBs data and your charges are: 2000
```
```
Enter the amount of data used by the subscriber in GBs: -3
You entered bad data
```

## How to run
From inside this folder:
```bash
g++ internet_cost_calculator.cpp -o internet_cost_calculator
./internet_cost_calculator
```
On Windows, run `internet_cost_calculator.exe`.

## Known limitations (things I want to improve)
- The same `cout` line is repeated in every branch. A cleaner version sets the charge first and prints once at the end.
- The output doesn't show the currency or end with a new line.
- Non-numeric input (for example letters) is not handled yet.

## Coming next
- Revisit `perpendicular_bisector.cpp` from `01-basics` to handle vertical and horizontal lines.
- More condition-based programs as the course covers `switch` and nested conditions.

[Back to main README](../README.md)