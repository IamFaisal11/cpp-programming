# cpp-programming
c++ programming lab assigments
Assignment 1:qno1:Suppose you give a dinner party for six guests, but your table seats only four. In how many 
ways can four of the six guests arrange themselves at the table? Any of the six guests can 
sit in the first chair. Any of the remaining five can sit in the second chair. Any of the 
remaining four can sit in the third chair, and any of the remaining three can sit in the fourth 
chair. (The last two will have to stand.) So the number of possible arrangements of six 
guests in four chairs is 6*5*4*3, which is 360. Write a program that calculates the number 
of possible arrangements for any number of guests and any number of chairs. (Assume 
there will never be fewer guests than chairs.) Don’t let this get too complicated. A simple 
for loop should do it

Qno2:Write a program that will find the smallest, largest, and average values in a collection of 
N numbers Get the value of N before scanning each value in the collection of N numbers

Qno3:Modify your program to compute and display both the range of values in the data 
collection and the standard deviation of the data collection. To compute the standard 
deviation, accumulate the sum of the squares of the data values ( sum_squares ) in the 
main loop. After loop exit, use the formula 	standard_deviation=sqrt((sum_square/n)-(avg*avg))

Qno4:Modify your program to compute and display both the range of values in the data 
collection and the standard deviation of the data collection. To compute the standard 
deviation, accumulate the sum of the squares of the data values ( sum_squares ) in the 
main loop. After loop exit, use the formula 	standard_deviation=sqrt((sum_square/n)-(avg*avg))

Qno5:Write a program to process a collection of daily high temperatures. Your program should 
count and print the number of hot days (high temperature 85 or higher), the number of 
pleasant days (high temperature 60–84),and the number of cold days (high temperatures 
less than 60). It shouldalso display the category of each temperature. Test your program 
on the following data:
55 62 68 74 59 45 41 58 60 67 65 78 82 88 91
92 90 93 87 80 78 79 72 68 61 59

Qno6:Write a program to process a collection of daily high temperatures. Your program should 
count and print the number of hot days (high temperature 85 or higher), the number of 
pleasant days (high temperature 60–84),and the number of cold days (high temperatures 
less than 60). It shouldalso display the category of each temperature. Test your program 
on the following data:
55 62 68 74 59 45 41 58 60 67 65 78 82 88 91
92 90 93 87 80 78 79 72 68 61 59 Modified program to display the average temperature (a real number) at the end of 
Assignment 2:

Qno1:Keith’s Sheet Music needs a program to implement its music teacher’s discount policy.The program prompts the user to enter the purchase total and indicate whether the purchaser is a teacher. Music teachers receive a 10% discount on their sheet music purchases unless the purchase total is $100 or higher. In that case, the discount is 12%. The discount calculation occurs before the addition of the 5% sales tax. Here are two sample outputs —one for a teacher and one for a nonteacher. Use necessary manipulators to format your output.

(For Teacher) Total purchases $122.00 Teacher's discount (12%) 14.64 Discounted total 107.36 Sales tax (5%) 5.37 Total $112.73 (For Non-teacher) Total purchases $ 24.90 Sales tax (5%) 1.25 Total $ 26.15

Qno2:Write a program that calculates the user’s body mass index (BMI) and categorizes it as underweight, normal, overweight, or obese, based on the following table from the United States Centers for Disease Control:
To calculate BMI based on weight in pounds ( wt_lb ) and height in inches ( ht_in ), use this formula (rounded to tenths): 703 * wt_lb /ht_in2 Prompt the user to enter weight in pounds and height in inches.\

Qno3:The National Earthquake Information Center has asked you to write a program implementing the following decision table to characterize an earthquake based on its Richter scale number.
Could you handle this problem with a switch statement? If so, use a switch statement; if not, explain Why? BMI Weight Status Below 18.5 Underweight 18.5–24.9 Normal 25.0–29.9 Overweight 30.0 and above Obese Richter Scale Number (n) Characterization n < 5.0 Little or no damage 5.0<=n< 5.5 5 Some damage 5.5<=n< 6.5 Serious damage: walls may crack or fall 5.6<=n< 7.5 Disaster: houses and buildings may collapse higher Catastrophe: most buildings destroyed

Qno4:Write a program that takes the x – y coordinates of a point in the Cartesian plane and prints a message telling either an axis on which the point lies or the quadrant in which it is found. Sample lines of output: (-1.0, -2.5) is in quadrant III (0.0, 4.8) is on the y-axis
