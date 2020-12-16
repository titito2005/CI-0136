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

game_over=False
largo = 90
ancho = 15

#Coordenadas Jugador 1
jugador1_x = 50
jugador1_y = 255
jugador1_movimiento= 0

#Coordenadas Jugador 2
jugador2_x = 735
jugador2_y = 255
jugador2_movimiento= 0

#Coordenadas Bola
bola_x = 400
bola_y = 300
bola_mover_x = 3
bola_mover_y = 3
bola_tam=10

while not game_over:

	for event in pygame.event.get():
		if event.type == pygame.QUIT:
			game_over= True
		if event.type == pygame.KEYDOWN:
			#jugador1
			if event.key == pygame.K_w:
				jugador1_movimiento= -4;
			if event.key == pygame.K_s:
				jugador1_movimiento= 4;	

			#jugador2
			if event.key == pygame.K_UP:
				jugador2_movimiento= -4;
			if event.key == pygame.K_DOWN:
				jugador2_movimiento= 4;

		if event.type == pygame.KEYUP:
			#jugador1
			if event.key == pygame.K_w:
				jugador1_movimiento= 0;
			if event.key == pygame.K_s:
				jugador1_movimiento= 0;	

			#jugador2
			if event.key == pygame.K_UP:
				jugador2_movimiento= 0;
			if event.key == pygame.K_DOWN:
				jugador2_movimiento= 0;

	#Logica modificar coordenadas
	if bola_y > 490:
		bola_mover_y *= -1

	if bola_y < 10:
		bola_mover_y *= -1

	if bola_x > 800 or bola_x < 0:
		bola_x = 400
		bola_y = 300
		bola_mover_x *= -1
		bola_mover_y *= -1



	jugador1_y += jugador1_movimiento
	jugador2_y += jugador2_movimiento

	if jugador1_y > 400:
		jugador1_y = 400
	
	if jugador1_y < 10:
		jugador1_y = 10
	
	if jugador2_y > 400:
		jugador2_y = 400

	if jugador2_y < 10:
		jugador2_y = 10

	bola_x += bola_mover_x
	bola_y += bola_mover_y


	screen.fill(BLACK)

	#Zona de dibujos
	jugador1=pygame.draw.rect(screen, ESPERANZA2, (jugador1_x, jugador1_y, ancho, largo))
	jugador2=pygame.draw.rect(screen, ESPERANZA2, (jugador2_x, jugador2_y, ancho, largo))
	bola=pygame.draw.circle(screen, ESPERANZA, (bola_x, bola_y), bola_tam)

	if bola.colliderect(jugador1) or bola.colliderect(jugador2):
		bola_mover_x *= -1 

	pygame.display.flip()
	clock.tick(60)