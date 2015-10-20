# Slurry-management-profit-model
Input: revenue - (international &amp; domestic prices &amp; purity), quality of raw ore; Costs - water, electricity (by tier), other costs. 
Output: mixture and rate of slurry that maximizes profit while not overloading equipment or choke points.

Genesis:
The newly promoted general manager of an iron mill was faced with a number of challeges left to him when the previous manager quit:
  1. The flotation tanks were constantly breaking down from overload
  2. The EPA had filed injunctions because the tailing's moisture content was damgerously high
  3. The SAG mill kept breaking down from improper regulation of volumetric flow and imbalance of feed (raw ore and water)
  4. Prices and purity requirements on foreign and domestic markets required different SAG mill speeds and feed rates
  5. Density samples took several hours to analyze which left too much lag-time for contenuous slurry flow management
  
  6. One solution was to install millions of dollars of sensors and suffer hundreds of hours of down time
  7. The other solution was to develop a mathematical model and statistical analysis tool that calculated and prediced the most      efficient mill operational speeds 

The plan:
  1. Predict grinding material consumption rates
  2. Develop a system of equations to calculate and manage the flow of slurry to prevent damaging equipment

Legend of Variables:
V=volume/time, 
D=Dilution ratio, 
u=underflow, 
o=overflow, 
t=tailings, 
c=concentrate
P=Percent of dry solids, 
ρ=s.g.(density) of dry solids, 
f=feed
s=specific gravity (density of the slurry)



Questions and inquiries for further development:
Questions and Investigation Notes:
1. What are the dimensions of P∙s  (percent of dry solids in the liquid times Specific gravity of the slurry)?
 	 P∙s = %∙g/ml = ? the volume of dry solids which requires the known G of the dry solids.
	This raises a follow on question. Isn’t the G of the underflow that doesn’t pass through the shaker screen lower than the G that does pass? More importantly, does it matter since the material not passing returns to the SAG mill?

2. What are the dimensions of G (specific gravity of the dry solids)?
	=grams/ml

3. Can the G be calculated mathematically without using a Marcy scale?


4. Can s.g. be calculated using P and s?


5. Does the system of equations for slurry flow work? 


6. Can the dilution ratio D be used as a coefficient for the system of equations?


7. Could a combination of ρ,G,s,P be used in a system of equations that would yield the same flow rates?


8. Can the values ρ,G,s,P,D be estimated or calculated (based on the ratio of low and high grade crushed ore and feed rates of water at various stages of refinement)?


9. Why does P change between the SAG Mill discharge and the SAG Cyclone Feed (approximately from 70% to 55%)?
	Assumptions: Additional water dilution. Two sumps feed into the shaker screen, new water goes to SAG Mill.

10. Where does the water from the sumps come from?
	Assumptions: reclaimed from drying process.

11. What is the Vp (Volumetric Loading =? % of total volume [total volume of what, the mill?]) which is the variable for the circulating load calculation.


12. Is the SAG/Ball Mill feed talking about tons of slurry or crushed ore per hour?


13. Is the SAG Mill discharge the same as the slurry going into the SAG Mill Discharge Pumpbox?

14. Does the equation P_F∙G_F=P_U∙G_U+P_B∙G_B hole.
