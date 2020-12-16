import pygame, sys, random
pygame.init()

BLACK = (0,0,0)
WHITE = (255,255,255)
GREEN = (0,255,0)
RED   = (255,0,0)
BLUE  = (0,0,255)
ESPERANZA = (100,50,150)
ESPERANZA2 = (0,100,150)

size = (800, 500)
screen = pygame.display.set_mode(size)
clock = pygame.time.Clock()

#GENERADOR DE OBJETOS EN LA LISTA
#lista = []
#for i in range (60):
	#x = random.randint(0,800)
	#y = random.randint(0,500)
	#lista.append([x,y])

x=10;
y=20;

velocidad_x=0
valocidad_y=0

#MUESTRA O NO EL MOUSE
pygame.mouse.set_visible(0)

while True:
	for event in pygame.event.get():
		if event.type == pygame.QUIT:
			sys.exit()

		#EVENTOS TECLADO
		if event.type == pygame.KEYDOWN:
			if event.key == pygame.K_LEFT:
				velocidad_x=-3
			if event.key == pygame.K_RIGHT:
				velocidad_x=3
		
		if event.type ==pygame.KEYUP:
			if event.key == pygame.K_LEFT:
				velocidad_x=0
			if event.key == pygame.K_RIGHT:
				velocidad_x=0
	#OBTIENE LA POSICION DEL MOUSE
	#pos= pygame.mouse.get_pos()
	#x= pos[0]
	#y= pos[1]

	screen.fill(BLACK)

	x+= velocidad_x

	pygame.draw.circle(screen, ESPERANZA2, (x,y), 3)

	#MUEVE LOS OBJETOS CREADOS ANTERIORMENTE
	#for j in lista:
		#x = j[0]
		#y = j[1]
		#pygame.draw.circle(screen, ESPERANZA2, j, 2)
		#j[1]+= 2

		#if j[1]>500:
			#j[1]=0
			
	pygame.display.flip()
	clock.tick(60)