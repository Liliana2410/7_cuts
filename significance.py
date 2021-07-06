import numpy as np
import matplotlib.pyplot as plt

filename = 'significance_bins.txt'
f = open(filename, 'r')
data = []
for row in f:
	data.append([x for x in row.split()])	
	

bkg_mu = []
bkg_e = []
lista = []
x_e=["0-100", "100-200", "200-300", "300-400", "400-500", "500-600", "600-700", "700-800", "800-900", "900-1000", "1000-1100", "1100-3000"]
x_mu=["0-100", "100-200", "200-300", "300-400", "400-500", "500-600", "600-700", "700-800", "800-900","900-1000", "1000-1100","1100-1200", "1200-3000"]
i=1
#suma bkgs 
while i < len(data[0]):
	bkg_mu.append(float(data[0][i]) + float(data[1][i]))
	i += 1
	
j=1
while j < len(data[6]):
	bkg_e.append(float(data[6][j]) + float(data[7][j]))
	j += 1
	
for i in range (len(data)):
	if (data[i][0] == 's1' or data[i][0] == 's2' or data[i][0] == 's3'  or data[i][0] == 's4'):
		signal = []
		j = 1
		
		nombres=["b1", "b2", r'$t \overline{t} \ Z^{\prime} \ m(Z^{\prime})=350 \ GeV$', r'$t \overline{t} \ Z^{\prime} \ m(Z^{\prime})=1000 \ GeV$',r'$t \overline{t} \ Z^{\prime} \ m(Z^{\prime})=1500 \ GeV$', r'$t \overline{t} \ Z^{\prime} \ m(Z^{\prime})=2000 \ GeV$', "b1", "b2", r'$t \overline{t} \ Z^{\prime} \ m(Z^{\prime})=350 \ GeV$', r'$t \overline{t} \ Z^{\prime} \ m(Z^{\prime})=1000 \ GeV$',r'$t \overline{t} \ Z^{\prime} \ m(Z^{\prime})=1500 \ GeV$', r'$t \overline{t} \ Z^{\prime} \ m(Z^{\prime})=2000 \ GeV$']
		if (i<=5):
			while j < len(data[0]):
				signal.append(float(data[i][j]))
				j+=1
			sigma = []
			
			for l in range (len(signal)):
				if (l==0):
					sigma.append(0)
					
				elif (l==1):
					sigma.append(0)
				else:
					sigma.append(signal[l]/((signal[l]**2 + bkg_mu[l]**2 + (0.25*bkg_mu[l])**2)**(0.5)))
						
			colors = ["white", "white", 'cyan', 'red', 'magenta','blue', "white", "white", 'cyan', 'red', 'magenta','blue']
			#plt.subplot(1,2,1)
			plt.plot(x_mu, sigma, label= nombres[i], marker = '.', markersize = 10, linewidth = 2, color = colors[i])
			#plt.title("Muon channel")
			plt.legend(loc='best')	
			lista.append(sigma)
		
		elif (i>5):	
			k = 1 
			while k < len(data[6]):
				signal.append(float(data[i][k]))
				k+=1
			sigma = []	
			for l in range (len(signal)):
				if (l==0):
					sigma.append(0)
					
				elif (l==1):
					sigma.append(0)
				else:
					sigma.append(signal[l]/((signal[l]**2 + bkg_e[l]**2 + (0.25*bkg_e[l])**2)**(0.5)))
					
			#plt.subplot(1,2,1)
			#plt.plot(x_e, sigma, label= nombres[i], marker = '.', markersize = 10, linewidth = 2, color = colors[i])
			#plt.title("Muon channel")
			#plt.legend(loc='best')	
			lista.append(sigma)

plt.tight_layout()
plt.xlabel(r' Masses of the $Z^{\prime}$ (GeV)')
plt.ylabel(r'Significance ($S_{sig}^{\mu}$)')	
plt.show()
for i in range (len(lista)):
	with open('resultados.txt', 'ab') as r:
		np.savetxt(r,[lista[i]], delimiter=' ')	


############################################### PARTE 2 ##########################################################


filename2 = 'masses_significance.txt'
f2 = open(filename2, 'r')
data2 = []
for row in f2:
	data2.append([x for x in row.split()])		

lista2=[]
x2=np.linspace(1,10,10)
lista3 = []
for i in range (len(data2)):
	signal2 = 0
	bkg1 = 0
	bkg2 = 0
	bkg = 0
	if (data2[i][0] == 's1mu'):
		j = 1
		while j < (len(data2[i])):
			signal2= signal2 + float(data2[i][j])
			bkg1 = bkg1 + float(data2[0][j])
			bkg2 = bkg2 + float(data2[1][j])
			j +=1
		bkg = bkg1 + bkg2
		sigma2 = signal2/((signal2**2 + bkg**2 + (0.25*bkg)**2)**(0.5))
		lista2.append(sigma2)
		#print "s1mu", signal2
		#print "b1mu", bkg
		lista3.append(signal2)
		lista3.append(bkg)
		
	elif (data2[i][0] == 's1e'):
		j = 1
		while j < (len(data2[i])):
			signal2= signal2 + float(data2[i][j])
			bkg1 = bkg1 + float(data2[6][j])
			bkg2 = bkg2 + float(data2[7][j])
			j +=1
		bkg = bkg1 + bkg2
		sigma2 = signal2/((signal2**2 + bkg**2 + (0.25*bkg)**2)**(0.5))
		lista2.append(sigma2)	
		#print "s1e", signal2
		#print "b1e", bkg
		lista3.append(signal2)
		lista3.append(bkg)
				
	elif ( (data2[i][0] == 's4mu') or (data2[i][0] == 's3mu')):
		signal2= float(data2[i][-1])
		bkg1 = float(data2[0][-1])
		bkg2 = float(data2[1][-1])
		bkg = bkg1 + bkg2
		sigma2 = signal2/((signal2**2 + bkg**2 + (0.25*bkg)**2)**(0.5))
		lista2.append(sigma2)	
		#print "s4mu", signal2
		#print "b4mue", bkg
		lista3.append(signal2)
		lista3.append(bkg)
		
	elif ( (data2[i][0] == 's3e') or (data2[i][0] == 's4e')):
		signal2= float(data2[i][-1])
		bkg1 = float(data2[6][-1])
		bkg2 = float(data2[7][-1])
		bkg = bkg1 + bkg2
		sigma2 = signal2/((signal2**2 + bkg**2 + (0.25*bkg)**2)**(0.5))
		lista2.append(sigma2)
		#print "s_e", signal2
		#print "b_e", bkg
		lista3.append(signal2)
		lista3.append(bkg)
		
	elif (data2[i][0] == 's2mu'):	
		j = 1
		while j < (len(data2[i])):
			signal2= signal2 + float(data2[i][j])	
			j +=1
		k = 5
		while k < (len(data2[0])):
			bkg1 = bkg1 + float(data2[0][k])
			bkg2 = bkg2 + float(data2[1][k])
			k +=1
		bkg = bkg1 + bkg2
		sigma2 = signal2/((signal2**2 + bkg**2 + (0.25*bkg)**2)**(0.5))
		lista2.append(sigma2)
		#print "s2mu", signal2
		#print "b2mu", bkg	
		lista3.append(signal2)
		lista3.append(bkg)
		
	elif (data2[i][0] == 's2e'):	
		j = 1
		while j < (len(data2[i])):
			signal2= signal2 + float(data2[i][j])	
			j +=1
		k = 5
		while k < (len(data2[6])):
			bkg1 = bkg1 + float(data2[6][k])
			bkg2 = bkg2 + float(data2[7][k])
			k +=1
		bkg = bkg1 + bkg2
		sigma2 = signal2/((signal2**2 + bkg**2 + (0.25*bkg)**2)**(0.5))
		lista2.append(sigma2)
		#print "s2e", signal2
		#print "b2e", bkg	
		lista3.append(signal2)
		lista3.append(bkg)			
		
sigma_combination = []

k = 0
print lista3

while k < 4:
	NS= lista3[2*k]+lista3[(2*k)+8]
	NB= lista3[(2*k)+1]+lista3[(2*k)+9]
	temp = NS /( (NS**2 + NB**2 + (0.25*NB)**2)**(0.5) )
	sigma_combination.append(temp)
	#print "NS: ", NS 
	#print "nb: ", NB
	k +=1
	
nombres2 = ["s1mu", "s2mu", "s3mu", "s4mu", "s1e", "s2e", "s3e","s4e"]
nombres3 = ["s1", "s2", "s3", "s4"]

textfile = open("resultados2.txt", "w")
for i in range (len(lista2)):
	textfile.write( str(nombres2[i]) + " " +  str(lista2[i]) + "\n")
textfile.write("Combinados" + "\n")

for j in range (len(nombres3)):
	textfile.write( str(nombres3[j]) + " " +  str(sigma_combination[j]) + "\n")
textfile.close()

#######################################################21/06/21#############################################################

l_350_mu = (lista[0][3] + lista[0][4] + lista[0][5]+ lista[0][2])/(np.sqrt(4))
l_1000_mu = (lista[1][8] + lista[1][9] + lista[1][10] + lista[1][11] + lista[1][12])/(np.sqrt(5))
l_1500_mu = (lista[2][11] + lista[2][12])/(np.sqrt(2))
l_2000_mu = lista[3][12]

l_350_e = (lista[4][2] + lista[4][3] + lista[4][4] + lista[4][5]+ lista[4][6])/(np.sqrt(5))
l_1000_e = (lista[5][8] + lista[5][9] + lista[5][10] + lista[5][11])/(np.sqrt(4))
l_1500_e = lista[6][11]
l_2000_e = lista[7][11]

l_350_c = (lista[0][3] + lista[0][4] + lista[0][5] + lista[4][3] + lista[4][4] + lista[4][5])/(np.sqrt(6))
l_1000_c = (lista[1][8] + lista[1][9] + lista[1][10] + lista[1][11] + lista[1][12] + lista[5][8] + lista[5][9] + lista[5][10] + lista[5][11])/(np.sqrt(9))
l_1500_c = (lista[2][11] + lista[2][12] + lista[6][11])/(np.sqrt(3))
l_2000_c = (lista[3][12] + lista[7][11])/(np.sqrt(2))

l_350_ct = (lista[0][3] + lista[0][4] + lista[0][5] + lista[4][3] + lista[4][4] + lista[4][5] + 0.62309920106 + 1.5101117942227433)/(np.sqrt(10))
l_1000_ct = (lista[1][8] + lista[1][9] + lista[1][10] + lista[1][11] + lista[1][12] + lista[5][8] + lista[5][9] + lista[5][10] + lista[5][11] + 1.5751432965302015 + 2.1734507155460556)/(np.sqrt(17))
l_1500_ct = (lista[2][11] + lista[2][12] + lista[6][11] + 2.1550240219403918 + 1.1078245522485521)/(np.sqrt(10))
l_2000_ct = (lista[3][12] + lista[7][11] + 0.999046512624 + 0.994721354189)/(np.sqrt(4))



textfile = open("resultados3.txt", "w")
textfile.write( "350 mu" + " " +  str(l_350_mu) + "\n")
textfile.write( "1000 mu" + " " +  str(l_1000_mu) + "\n")
textfile.write( "1500 mu" + " " +  str(l_1500_mu) + "\n")
textfile.write( "2000 mu" + " " +  str(l_2000_mu) + "\n")
textfile.write(" " + "\n")
textfile.write( "350 e" + " " +  str(l_350_e) + "\n")
textfile.write( "1000 e" + " " +  str(l_1000_e) + "\n")
textfile.write( "1500 e" + " " +  str(l_1500_e) + "\n")
textfile.write( "2000 e" + " " +  str(l_2000_e) + "\n")
textfile.write(" " + "\n")
textfile.write("Combinados" + "\n")
textfile.write( "350" + " " +  str(l_350_c) + " " + str(6) + "\n")
textfile.write( "1000" + " " +  str(l_1000_c) + " " + str(9) + "\n")
textfile.write( "1500" + " " +  str(l_1500_c) + " " + str(3) + "\n")
textfile.write( "2000" + " " +  str(l_2000_c) + " " +  str(2) + "\n")
textfile.write(" " + "\n")
textfile.write("Combinados_total" + "\n")
textfile.write( "350" + " " +  str(l_350_ct) + " " + "\n")
textfile.write( "1000" + " " +  str(l_1000_ct) + " "  + "\n")
textfile.write( "1500" + " " +  str(l_1500_ct) + " "  + "\n")
textfile.write( "2000" + " " +  "-" + " " + "\n")
textfile.write(" " + "\n")
textfile.close()

