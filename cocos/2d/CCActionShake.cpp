// Code by Francois Guibert
// Contact: www.frozax.com - http://twitter.com/frozax - www.facebook.com/frozax
#include "cocos2d.h"
#include "CCActionShake.h"
NS_CC_BEGIN
// not really useful, but I like clean default constructors
ActionShake::ActionShake() : _strength_x(0), _strength_y(0), _initial_x(0), _initial_y(0)
{
}

ActionShake* ActionShake::create( float duration, float strength )
{
  // call other construction method with twice the same strength
  return ActionShake::create( duration, strength, strength );
}

ActionShake* ActionShake::create(float duration, float strength_x, float strength_y)
{
  ActionShake *p_action = new ActionShake();
  p_action->initWithDuration(duration, strength_x, strength_y);
  p_action->autorelease();

  return p_action;
}

bool ActionShake::initWithDuration(float duration, float strength_x, float strength_y)
{
  if (ActionInterval::initWithDuration(duration))
  {
    _strength_x = strength_x;
    _strength_y = strength_y;
    return true;
  }

  return false;
}

// Helper function. I included it here so that you can compile the whole file
// it returns a random value between min and max included
float fgRangeRand( float min, float max )
{
  float rnd = ((float)rand()/(float)RAND_MAX);
  return rnd*(max-min)+min;
}

void ActionShake::update(float time)
{
  float randx = fgRangeRand( -_strength_x, _strength_x );
  float randy = fgRangeRand( -_strength_y, _strength_y );

  // move the target to a shaked position
  _target->setPosition( ccp( randx, randy) );
}

ActionShake* ActionShake::clone() const
{
	// no copy constructor	
	auto a = new ActionShake();
	a->initWithDuration(_duration, _strength_x, _strength_y);
	a->autorelease();
	return a;
}

//ActionShake is not really reversable
ActionShake* ActionShake::reverse(void) const
{
    return ActionShake::create(_duration, _strength_x, _strength_y);
}

void ActionShake::startWithTarget(Node *pTarget)
{
  ActionInterval::startWithTarget( pTarget );

  // save the initial position
  _initial_x = pTarget->getPosition().x;
  _initial_y = pTarget->getPosition().y;
}

void ActionShake::stop(void)
{
  // Action is done, reset clip position
  _target->setPosition( ccp( _initial_x, _initial_y ) );

  ActionInterval::stop();
}
NS_CC_END
