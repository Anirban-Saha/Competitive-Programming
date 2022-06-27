// Coding Challenge #2
// Use the BMI example from Challenge #1, and the code you already wrote, and
// improve it.
// Your tasks:
// 1. Print a nice output to the console, saying who has the higher BMI. The message
// is either "Mark's BMI is higher than John's!" or "John's BMI is higher than Mark's!"
// 2. Use a template literal to include the BMI values in the outputs. Example: "Mark's
// BMI (28.3) is higher than John's (23.9)!"
// Hint: Use an if/else statement 😉
const heightOfMark = 1.69;
const weightOfMark = 78;
const heightOfJohn = 1.95;
const weightOfJohn = 92;
var bmiOfMark = weightOfMark / heightOfMark ** 2;
var bmiOfJohn = weightOfJohn / heightOfJohn ** 2;
var markHigherBMI = bmiOfMark > bmiOfJohn;
if (bmiOfJohn > bmiOfMark) {
  console.log(
    `John's BMI(${bmiOfJohn}) is higher than Mark's BMI(${bmiOfMark})!`
  );
} else {
  console.log(
    `John's BMI(${bmiOfJohn}) is lower than Mark's BMI(${bmiOfMark})!`
  );
}
