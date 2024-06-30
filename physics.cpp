#include<iostream>

using namespace std;

class PhysicsObject{
public: 
	float velocityInitial;
	float velocityFinal;
	float acceleration;
	float time;
	float distance;

	void getAcceleration(float v_f, float v_i, float t){
		velocityInitial = v_i;
		velocityFinal = v_f;
		time = t;

		acceleration = (velocityFinal - velocityInitial)/time;

		cout<<"Acceleration: "<<acceleration<<endl;
	}

	void getDistance(float a, float v_i, float t){
		velocityInitial = v_i;
		acceleration = a;
		time = t;

		distance = ((velocityInitial * time) + (0.5 * acceleration * time * time));

		cout<<"Distance: "<<distance<<endl;
	}

	void getVelocityFinal(float a, float v_i, float d){
		velocityInitial = v_i;
		acceleration = a;
		distance = d;

		velocityFinal = ((velocityInitial * velocityInitial) + (2 * acceleration * distance));

		cout<<"Velocity Final : "<<velocityFinal<<endl;
	}
};

int main(){

	PhysicsObject p1;

	p1.getAcceleration(12, 6, 2);

	p1.getDistance(2, 4, 2);

	p1.getVelocityFinal(2, 12, 8);

	return 0;
}