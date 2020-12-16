#CLASE DECORADORA DE PERSONAJE EXTRAVIDA
import pygame as pg
import pygame.font as font
import os
import pygame
import sys
from Personaje import Personaje

class Personaje_Extravida(Personaje):
    '''Clase Personaje_Extravida, decorador para personaje''' 
    objetoPersonaje=None
    extraVida = 0
    vidaAcual=0
    
    def __init__(self, personaje, val):
        '''
        Descripcion:
        Constructor de la clase Personaje_Extravida
        
        Parametros:
        personaje (Personaje): objeto personaje
        val (int): nueva vida del personaje
        Retorno:
        
        '''
        pygame.sprite.Sprite.__init__(self)
        self.objetoPersonaje=personaje
        self.extraVida=val
        self.vidaActual= self.objetoPersonaje.getVida()
        self.objetoPersonaje.definirVida(self.extraVida + self.vidaActual)
    
    def definirVida(self,valor):
        '''
        Descripcion:
        Asigna nueva vida al personaje
        
        Parámetros:
        valor (int): nueva vida del personaje
        
        Retorno:
    
        '''
        self.objetoPersonaje.definirVida(valor)
    
    def getVida(self):
        '''
        Descripcion:
        Retorna la vida del personaje
        
        Parámetros:
        
        Retorno:
        self.vida: vida actual del personaje
        '''
        return self.objetoPersonaje.getVida()
        
    def resteVida(self, cont):
        '''
        Descripcion:
        Resta vida al personaje
        
        Parámetros:
        cont (int): cantidad de vida a restar
        
        Retorno:
        sel.vida: vida actual del personaje
        '''
        return self.objetoPersonaje.resteVida(cont)
  
    def resteVida(self):
        '''
        Descripcion:
        Resta una vida al personaje
        
        Parámetros:
        
        Retorno:
        sel.vida: vida actual del personaje
        '''
        return self.objetoPersonaje.resteVida()
        
    def asiganrVelocidadY(self, valor):
        '''
        Descripcion:
        Asigna una nueva velocidad en y al personaje
        
        Parámetros:
        valor (int): nueva velocidad en y
        
        Retorno:

        '''
        self.objetoPersonaje.asignarVelocidadY(valor)
    
    def asignarVelocidadX(self, valor):
        '''
        Descripcion:
        Asigna una nueva velocidad en x al personaje
        
        Parámetros:
        valor (int): nueva velocidad en x
        
        Retorno:

        '''
        self.objetoPersonaje.asignarVelocidadX(valor)
    
    def terminarDecoracion(self):
        '''
        Descripcion:
        Termina la decoración del personaje
        
        Parámetros:
        
        Retorno:
        self.objetoPersonaje: objeto personaje predeterminado sin decoración

        '''
        self.extraVida=0
        return objetoPersonaje

    def getRectX(self):
        '''
        Descripcion:
        Retorna la posición en x del personaje
        
        Parametros:
    
        Retorno:
        self.rect.x: Retorna la posición actual en x
        '''
        return self.objetoPersonaje.getRectX()

    def getRectY(self):
        '''
        Descrición:
        Retorna la posición en y del personaje
        
        Parametros:
    
        Retorno:
        self.rect.y: Retorna la posición actual en y
        '''
        return self.objetoPersonaje.getRectY()

    def getImage(self):
        '''
        Descripcion:
        Retorna la imagen actual del personaje
        
        Parametros:
    
        Retorno:
        self.image: Retorna la imagen actual del personaje
        '''
        return self.objetoPersonaje.getImage()
       
    def move(self,changeX,changeY):
        '''
        Descripcion:
        Mueve el personaje a otra posición
        
        Parámetros:
        changeX (int): nueva posición en x
        changeY (int): nueva posición en y
        
        Retorno:

        '''
        self.objetoPersonaje.move(changeX, changeY)
        
    def agregarAnimacionMovimiento(self, animacionNueva):
        '''
        Descripcion:
        Agrega un vector con la animación de movimiento al personaje
        
        Parametros:
        animacionNueva (vector): Vector con las animaiones de movimiento
    
        Retorno:
        
        '''
        self.objetoPersonaje.agregarAnimacionMovimiento(animacionNueva);

    def agregarAnimacionMuerte(self, animacionNueva):
        '''
        Descripcion:
        Agrega un vector con la animación de muerte al personaje
        
        Parametros:
        animacionNueva (vector): Vector con las animaiones de muerte
    
        Retorno:
        
        '''
        self.objetoPersonaje.agregarAnimacionMuerte(animacionNueva);

    def cambiarAnimacionMuerte(self):
        '''
        Descrición:
        Cambia la animación utilizada actualmente por el personaje por la animación de muerte
        
        Parametros:
    
        Retorno:
        
        '''
        self.objetoPersonaje.cambiarAnimacionMuerte();

    def cambiarAnimacionMovimiento(self):
        '''
        Descripcion:
        Cambia la animación utilizada actualmente por el personaje por la animación de movimiento
        
        Parametros:
    
        Retorno:
        
        '''
        self.objetoPersonaje.cambiarAnimacionMovimiento();

    def cambiarVelocidadAnimacion(self, tiempo):
        '''
        Descripcion:
        Cambia la velocidad con la que transcurre la animación en el personaje
        
        Parametros:
        tiempo (int): Indica la velocidad con la que la animación del personaje transcurre
    
        Retorno:
        
        '''
        self.objetoPersonaje.cambiarVelocidadAnimacion(tiempo);

    def actualizarImagen(self):
        '''
        Descrición:
        Método que se encarga de actualizar la imagen de animación del personaje
        
        Parametros:
    
        Retorno:
        
        '''
        self.objetoPersonaje.actualizarImagen();