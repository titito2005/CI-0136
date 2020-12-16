import pygame, sys
pygame.init()

size = (500,500)

BLACK = (0,0,0)
WHITE = (255,255,255)
GREEN = (0,255,0)
RED   = (255,0,0)
BLUE  = (0,0,255)
ESPERANZA = (100,50,150)
ESPERANZA2 = (0,100,150)

screen= pygame.display.set_mode(size)
clock = pygame.time.Clock()

cord_x = 25;
cord_y = 0;

speed_x =3;
speed_y =3;

while True:
	for event in pygame.event.get():
		if event.type == pygame.QUIT:
			sys.exit()

	if (cord_x > 425 or cord_x < 0):
		speed_x *= -1

	if (cord_y > 425 or cord_y < 0):
		speed_y *= -1

	screen.fill(WHITE)

	pygame.draw.rect(screen, ESPERANZA2, (cord_x,cord_y, 80, 80))	
	cord_x+=speed_x;
	cord_y+=speed_y;

	#for i in range (25, 500, 100):
		#pygame.draw.rect(screen, ESPERANZA2, (i,250,50,50))

	#pygame.draw.line(screen, BLUE, [0,100], [100,100], 8)
	#pygame.draw.rect(screen, ESPERANZA, (100,100,80,80))
	#pygame.draw.circle(screen, BLACK, (400,400), 40)



	pygame.display.flip()
	clock.tick(60)