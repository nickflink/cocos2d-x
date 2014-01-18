#ifndef __ACTION_SHAKE_H__
#define __ACTION_SHAKE_H__

#include "CCActionInterval.h"
NS_CC_BEGIN

class ActionShake : public ActionInterval
{
  // Code by Francois Guibert
  // Contact: www.frozax.com - http://twitter.com/frozax - www.facebook.com/frozax
public:
  ActionShake();

  // Create the action with a time and a strength (same in x and y)
  static ActionShake* create(float duration, float strength );
  // Create the action with a time and strengths (different in x and y)
  static ActionShake* create(float duration, float strength_x, float strength_y );
  bool initWithDuration(float duration, float strength_x, float strength_y );

  virtual ActionShake* clone() const override;
  virtual ActionShake* reverse(void) const override;
  virtual void startWithTarget(Node *pTarget) override;
  virtual void update(float time) override;
  virtual void stop(void);

protected:
  // Initial position of the shaked node
  float _initial_x, _initial_y;
  // Strength of the action
  float _strength_x, _strength_y;
};

NS_CC_END
#endif //__ACTION_SHAKE_H__
