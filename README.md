# Optimization of Marginal Profit (mill operations)
Input: revenue - (international &amp; domestic prices &amp; purity); quality of raw ore; variable costs - fuel, water, and electricity (by tier); and other fixed costs. 

Output: Optimal feed rates and ratios (maximizing profit, protecting equipment, and managing choke points).

Genesis:
The newly promoted general manager of an iron mill faced several challeges when the previous manager quit:
  1. The flotation tank damage from overload
  2. The EPA injunctions for excessive moisture content in the tailings
  3. The SAG mill damage from improper feed rates of grinding material, raw ore, and water
  4. Meeting different market demands (foreign and domestic markets)
  5. Relying on density samples as a management tool indcuces significant lag-time 
  7. The GM wanted a realtime management tool for plant operations
SAG mill rotational speed and feed rates effect all of the above

Solutions that could provide real time data:  
  1. One solution: install sensors costing as much as $50 million dollars in time and equipment
  2. A second solution: develop a mathematical model and statistical analysis tool
  	- Advantages of the second solution: cost, analysis, and prediction 

Phases for software development:
  1. Calculate grinding material volume for SAG mill (complete)
  2. Calculate circulating load of the SAG mill (complete)
  3. Calculate slurry flow at each stage of the milling process (needs customization)
  4. Develop long term (1 year) data collection model (planning stage)
  5. Develop operational management tool to maximize profits (mathematical model stage)
  

Questions and inquiries for Phase 3:
1. What are the dimensions of P∙s  (percent of dry solids in the liquid times Specific gravity of the slurry)?
 	P∙s = %∙g/ml =  the volume of dry solids which requires the known G of the dry solids.
	This raises a follow on question: 
	Isn’t the G of the underflow that doesn’t pass through the shaker screenlower than the G that does pass? 
	Or, is it simply the size of the chunck not the consistency of iron in the chunck?
	More importantly, does it matter since the material not passing returns to the SAG mill?
2. What are the dimensions of G (specific gravity of the dry solids)?
	=grams/ml
3. Can the G be calculated mathematically without using a Marcy scale?
4. Can s.g. be calculated using P and s?
5. Does the system of equations for slurry flow work? 
6. Can the dilution ratio D be used as a coefficient for the system of equations?
7. Could a combination of ρ,G,s,P be used in a system of equations that would yield the same flow rates?
8. Can the values ρ,G,s,P,D be estimated or calculated (based on the ratio of low and high grade crushed ore and feed rates  of water at various stages of refinement)?
9. Why does P change between the SAG Mill discharge and the SAG Cyclone Feed (approximately from 70% to 55%)?
	Assumptions: Additional water dilution. Two sumps feed into the shaker screen, new water goes to SAG Mill.
10. Where does sump water come from?

	Assumptions: reclaimed from drying process.
11. What is the Vp (Volumetric Loading =? % of total volume [total volume of what, the mill?]) which is the variable for the circulating load calculation.
12. Is the SAG Mill discharge the same as the slurry going into the SAG Mill Discharge Pumpbox?
	yes
14. Does the equation  PsubF∙GsubF=PsubU∙GsubU+PsubB∙GsubB hold.

Common conversion ratios, approximate values and formulas:
1. T=Short tons∙volumetric loading
2. Tm=tons per volume of a mill
3. V=volume   
4. D=Diameter
5. w=mass of the slurry in 〖ft〗^3  
6. L=length of mill  
7.  w=(weight of slurry in lbs)/〖ft〗^3 
8. kwr=power draw in kilowatts (rod mill)
9. Cs=Critical speed of a mill in rpm
10. %Cs=Actual mill speed in rpm (percent of criticla speed)
11 .Water weight and mass: 	62.42 lbs/〖ft〗^3 = 1.9385 slugs/〖ft〗^3 
12. Volume: 1 m^3  = 1000 〖dm〗^3 liters= 35.288 〖ft〗^3  = 1.305 〖yd〗^3
13. Weight/Mass of water 1 g/〖cm〗^3 = 1  g/ml (4 deg C at sea level)
								  = 1 kg/liter 
                                  = 1000 kg/m^3 = 1 tonnes/m^3 
                                  = 62.4 lbs/〖ft〗^3 
                                  = 8.34 (lbs)/gal
14. Conversion for water volume: 	7.473(lbs)/gal ≈ 1 lbs/〖ft〗^3   
15. Refined iron ore weight:		≈449.42 lbs/〖ft〗^3
16. Crushed iron ore weight	≈156.07 lbs/〖ft〗^3
17. SAG mill overflow		SG=2.6 (needs to be confirmed mathematically--direct measurement takes drying time)
18. Kilowatts per ton for rod mill:   	kwr=〖1.07〗^0.34 (6.3-5.4∙Vp)∙%Cs kw/ton=kw/Tr
19. Power draw:  			Prm=Tr∙kwr 
20. Critical Speed formula (rod mill):	
				D(Csr)^2=76.63 (constant for a rod mill needs adjustment for a SAG mill)  
				Cs=76.63/√D (critical speed isolated)
21. When ρ of ref=ρ of water (@ 4°C): 	S.G.=ρ_material = ρ of material/ρ of water = ρ_material/1.00 
22. Linear conversion factor		1m ≈ 3.28 ft

