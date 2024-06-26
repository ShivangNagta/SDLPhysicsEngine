
#include "Particle.h"
#include <math.h>
#include <stdlib.h>

namespace caveofprogramming {

Particle::Particle(): m_x(0), m_y(0) {

    
	m_direction = (2 * M_PI * rand())/RAND_MAX;
	m_speed = (0.005 * rand())/RAND_MAX;
}

Particle::~Particle() {
}

void Particle::update() {
    
    m_direction += 0.002;
	double xspeed = m_speed * cos(m_direction);
	double yspeed = m_speed * sin(m_direction);

	m_x += xspeed;
	m_y += yspeed;
}

}